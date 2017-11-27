cmake_minimum_required(VERSION 3.6)

project(AOC++17)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

include_directories(
  "${PROJECT_SOURCE_DIR}/include"
  "${PROJECT_SOURCE_DIR}/lib/range-v3/include")

add_executable(day1_part1 ${CMAKE_SOURCE_DIR}/src/day1/part1.cpp)
add_executable(day1_part2 ${CMAKE_SOURCE_DIR}/src/day1/part2.cpp)
