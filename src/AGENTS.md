# Repository Guidelines

한국어로 답변해주세요.

`vicpinky-project-tuning`(요청 표기: `vicpinky_project_turning`) 폴더는 ROS 2 Jazzy 기준 레퍼런스입니다. 먼저 해당 내용을 검토해 주세요.

## 프로젝트 구조 및 모듈 구성
- `omo_r1-ros2`: ROS 2 Jazzy에서 주행하도록 직접 포팅한 워크스페이스이며 `omo_r1_bringup`, `omo_r1_navigation2`, `omo_r1_cartographer`, `omo_r1_description`, `omo_r1_gazebo` 패키지를 묶습니다.
- `omo_r1-ros2-origin-folder`: 공식 배포본(jazzy 기준) 아카이브이므로 Jazzy 마이그레이션 비교용으로만 사용합니다.
- `vicpinky-project-tuning`: 외부 파트너 패키지로 Jazzy 호환, LiDAR 예외 처리, Nav2 튜닝 사례가 정리돼 있습니다. LiDAR 오류 대응과 경로 계획 검증은 이 폴더의 `vicpinky_bringup`, `vicpinky_navigation`을 먼저 참고하세요.
- 벤더 드라이버(`ydlidar_sdk`, `ydlidar_ros2_driver`)는 워크스페이스 루트에 보관하며, 업데이트 시 상위 저장소 커밋 해시와 변경 이유를 기록합니다.

## 빌드·테스트·개발 명령어
- 워크스페이스 루트(`/home/mac/dev_ws/omo_robot`)에서 `colcon build --symlink-install`로 빌드하세요.
- 새 세션마다 `source install/setup.bash`로 오버레이를 활성화한 뒤 노드·테스트를 실행합니다.
- 패키지 단위 검증은 `colcon test --packages-select <pkg> --event-handlers console_direct+`로 수행하고, 드라이버 계층은 `ros2 run omo_r1_bringup omo_r1_mcu_node` 등 개별 노드로 재현합니다.
- 통합 스모크 테스트: `ros2 launch omo_r1_bringup omo_r1_bringup.launch.py`(실기기), `ros2 launch omo_r1_gazebo omo_r1mini.launch.py`(시뮬레이션), `ros2 launch vicpinky_bringup bringup.launch.xml`(Jazzy 파트너 설정).

## 코딩 스타일 및 네이밍 규칙
- Python 노드는 4칸 들여쓰기와 snake_case 파일명, `rclpy.logging` 기반 로그를 유지합니다.
- 런치 파일은 `<기능>.launch.py` 규칙을 지키고, Jazzy 포팅 시 jazzy 전용 API 호출은 `vicpinky-project-tuning` 예제처럼 래핑합니다.
- 파라미터·설정은 `config/` 또는 `param/` 디렉터리에 YAML로 분리하고, 변경 시 `package.xml`, `CMakeLists.txt`(또는 `setup.py`) 설치 규칙을 즉시 갱신합니다.
- LiDAR 예외 처리나 Nav2 튜닝은 `vicpinky_navigation`의 파라미터 패턴을 재사용하고, 커스텀 예외는 명시적 메시지와 재시도 간격을 주석으로 남깁니다.

## 테스트 가이드라인
- 논리 테스트는 `ament_pytest`로 `<package>/test` 하위에 두고, 하드웨어 의존 테스트는 `pytest.mark.hardware` 태그로 분리합니다.
- Nav2/SLAM 변경 시 `ros2 launch omo_r1_navigation2 navigation2.launch.py map:=$HOME/map.yaml`과 `ros2 launch vicpinky_navigation navigation_launch.xml`을 병행해 Jazzy 동작을 비교합니다.
- LiDAR 예외 수정 후 `ros2 topic hz /scan`, `ros2 bag play <bag>`으로 안정성을 확인하고, 오류 로그는 `log/` 아래에 정리합니다.
- 실기기 검증 절차: MCU 직결 확인 → `sudo sh create_udev_rules.sh`로 권한 갱신 → rosbag 또는 비디오 캡처 → README에 결과 요약.

## 커밋 및 PR 가이드라인
- 커밋 메시지는 `[영역] 요약` 형식을 유지합니다. 예: `[nav2] tune obstacle params for jazzy`.
- Jazzy 호환 작업은 `omo_r1-ros2`와 `vicpinky-project-tuning` 변경을 분리 커밋으로 제출하고, `omo_r1-ros2-origin-folder`는 비교 스크린샷·Diff 링크만 첨부합니다.
- PR에는 실행한 빌드·테스트 명령, 참고한 지도·bag 링크, LiDAR 예외 처리 결과(로그·스크린샷)를 포함하세요.
- 리뷰 요청 시 영향 패키지 담당자와 파트너 협업자를 지정하고, Jazzy/jazzy 행동 차이를 bullet로 정리합니다.

## 보안 및 구성 팁
- USB 규칙 변경 후 `sudo sh create_udev_rules.sh`를 재실행해 권한을 갱신합니다.
- 비밀 정보는 `/etc/ros/params.d` 등 호스트 설정에 보관하고, 저장소에는 샘플만 커밋합니다.
- 벤더 드라이버 업데이트나 파트너 패키지 반영 시 라이선스를 확인하고, `vicpinky-project-tuning/doc/`에 적용 노트를 남깁니다.
