cmake_minimum_required(VERSION 3.5)

project(CMakeCTestCatch2Prj LANGUAGES CXX VERSION 0.0.1)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(app main.cpp)

#--------------------------------------------------------------
# Tests
#--------------------------------------------------------------
enable_testing()

add_subdirectory(Catch2)

# These tests need their own main
add_executable(tests some_test.cpp test_main.cpp)
target_link_libraries(tests Catch2::Catch2)

include(CTest)
include(Catch)

add_test(NAME CTestRunner COMMAND tests)
