project(day1)

include_directories("${PROJECT_SOURCE_DIR}/include")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(day1part1 ${PROJECT_SOURCE_DIR}/src/part1.cpp)
set_target_properties(day1part1 PROPERTIES OUTPUT_NAME "part1")

add_executable(day1part2 ${PROJECT_SOURCE_DIR}/src/part2.cpp)
set_target_properties(day1part2 PROPERTIES OUTPUT_NAME "part2")
