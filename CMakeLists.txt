cmake_minimum_required(VERSION 3.5)
project(usePlog_demo)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_C_COMPILER "gcc")

# setting build type
set(CMAKE_BUILD_TYPE "Release")
#set(CMAKE_BUILD_TYPE "Debug")

# setting CXX_FLAGS
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(Pangolin 0.2 REQUIRED)
set(OpenCV_DIR "/usr/local/include/opencv3.2.0/share/OpenCV")
find_package(OpenCV 3.2.0 REQUIRED)

include_directories(
${OpenCV_INCLUDE_DIRS}
thirdParty/plog/include
)

add_executable(usePlog_demo main.cpp)
target_link_libraries(usePlog_demo)

