cmake_minimum_required(VERSION 3.21)

project(CMakeCTestCatch2Prj LANGUAGES CXX VERSION 0.0.1)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(submodules/Catch2)
add_subdirectory(submodules/trompeloeil)

add_subdirectory(src)
add_subdirectory(tests)
