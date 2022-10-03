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

#--------------------------------------------------------------
# !!! Any advice on this welcome !!!
# The line below cannot be called on an Apple silicon machine
# which makes ctest not able to discover the test
# a) how can I NOT run this ONLY if it's a SILICON Apple
# b) how can I just make it work for all systems?
#--------------------------------------------------------------
if (APPLE)
    add_test(tests COMMAND tests)
else
    catch_discover_tests(tests)
endif (NOT APPLE)

