cmake_minimum_required(VERSION 3.6)

project(aocpp16)

include_directories("${PROJECT_SOURCE_DIR}/lib/range-v3/include")

add_subdirectory("${PROJECT_SOURCE_DIR}/day1")
add_subdirectory("${PROJECT_SOURCE_DIR}/day3")
