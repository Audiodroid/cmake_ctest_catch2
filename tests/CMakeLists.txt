
enable_testing()

# These tests need their own main
add_executable(tests some_test.cpp test_main.cpp)

target_link_libraries(tests Catch2::Catch2)

include(CTest)
include(Catch)

add_test(NAME CTestRunner COMMAND tests)