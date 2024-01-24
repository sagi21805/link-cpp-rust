set(CMAKE_C_COMPILER "/usr/bin/gcc-13")
set(CMAKE_CXX_COMPILER "/usr/bin/g++-13")

cmake_minimum_required(VERSION 3.15) 
PROJECT ( RUST_LINK )

find_package(OpenCV REQUIRED )

set(CMAKE_CXX_FLAGS "-Wall -std=c++23 -O3")

set(RUST_LIB ${PROJECT_SOURCE_DIR}/target/release/libvect.a)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/*.hpp)

file(GLOB all_SRCS ${PROJECT_SOURCE_DIR}/*.cpp)



add_executable(  ${PROJECT_NAME} ${all_SRCS})
         
target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} ${RUST_LIB})