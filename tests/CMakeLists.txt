
enable_testing()

# These tests need their own main
file(GLOB TEST_FILES ./*.h ./*.cpp)

add_executable(tests ${TEST_FILES} ../src/Addressbook.cpp)

target_link_libraries(tests 
    Catch2::Catch2
    trompeloeil::trompeloeil
)

# "enable_testing()" is sufficient no need for "#include CTest"
#include(CTest)
include(Catch)

add_test(NAME CTestRunner COMMAND tests)
