cmake_minimum_required(VERSION 3.6)

project(aocpp16)
enable_testing()

include_directories("${PROJECT_SOURCE_DIR}/lib/range-v3/include")

add_subdirectory("${PROJECT_SOURCE_DIR}/day1")
