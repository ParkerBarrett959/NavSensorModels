############################################################
#              Cmake Build of Static Library               #
############################################################

# Project Setup
cmake_minimum_required(VERSION 3.22.0)
project(NavSensorModels 
	VERSION 1.0
	LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)

# Define Variables
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# External Dependencies
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

# Add Library Source
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

# Add Unit Tests
add_subdirectory(${PROJECT_SOURCE_DIR}/test)
