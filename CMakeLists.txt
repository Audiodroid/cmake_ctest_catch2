cmake_minimum_required(VERSION 3.21)

project(CMakeCTestCatch2Prj LANGUAGES CXX VERSION 0.0.1)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED true)

#####################################################
# APP
#####################################################
file(GLOB SRC_FILES src/*.h src/*.cpp)
add_executable(app ${SRC_FILES} app/main.cpp)
target_include_directories(app PUBLIC src/)

#####################################################
# TEST
#####################################################
enable_testing()

# These tests need their own main
file(GLOB TEST_FILES tests/*.h tests/*.cpp)
add_executable(tests ${TEST_FILES} ${SRC_FILES})

add_subdirectory(submodules/Catch2)
add_subdirectory(submodules/trompeloeil)

target_link_libraries(tests 
    Catch2::Catch2
    trompeloeil::trompeloeil
)

# "enable_testing()" is sufficient no need for "#include CTest"
#include(CTest)
include(Catch)

add_test(NAME CTestRunner COMMAND tests)

target_include_directories(tests PUBLIC src/ tests/)
