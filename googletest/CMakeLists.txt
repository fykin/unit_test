cmake_minimum_required(VERSION 2.8)


enable_testing()
add_executable(unit_test unit_test.cpp TestClass.cpp)
target_link_libraries(unit_test gtest pthread)
add_test(unit_test "unit_test")
