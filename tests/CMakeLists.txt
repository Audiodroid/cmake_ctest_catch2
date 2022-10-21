
enable_testing()

# These tests need their own main
add_executable(tests ../src/Addressbook.cpp Addressbook_Test.cpp test_main.cpp)

target_link_libraries(tests Catch2::Catch2)

target_include_directories(tests PUBLIC src)
include(CTest)
include(Catch)

add_test(NAME CTestRunner COMMAND tests)