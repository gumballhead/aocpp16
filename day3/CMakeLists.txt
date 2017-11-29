project(day3)
include_directories("${PROJECT_SOURCE_DIR}/include")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# Part 1

add_executable(day3part1 ${PROJECT_SOURCE_DIR}/src/part1.cpp)
set_target_properties(day3part1 PROPERTIES OUTPUT_NAME "part1")

add_test(NAME day3part1test COMMAND sh -c "$<TARGET_FILE:day3part1> < input")
set_tests_properties(day3part1test PROPERTIES PASS_REGULAR_EXPRESSION "993")
