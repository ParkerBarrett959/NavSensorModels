# Unit Testing Build
enable_testing()
add_executable( TestNavSensorModels)# ${PROJECT_SOURCE_DIR}/test/testMain.cpp)
target_link_libraries(
  TestNavSensorModels
  GTest::gtest_main
  NavSensorModels
)

# Google Test Discover
include(GoogleTest)
gtest_discover_tests(TestNavSensorModels)
