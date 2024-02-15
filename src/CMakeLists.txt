# Create Source List
set(SOURCE_LIST ${PROJECT_SOURCE_DIR}/src/Sensor.cpp)

# Create Header List
set(HEADER_LIST ${PROJECT_SOURCE_DIR}/src/Sensor.h)

# Add Library
add_library(NavSensorModels STATIC ${SOURCE_LIST})
target_include_directories(NavSensorModels PUBLIC ${HEADER_LIST})

