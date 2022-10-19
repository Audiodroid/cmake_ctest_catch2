# cmake_ctest_catch2
This project now successfully runs on macos, windowds and linux using github-actions.
If you want to run through a similar process as the github-actions script use the following commands:

rm -rf build Testing  
cmake -S . -B build -G Xcode
cmake --build build
ctest --test-dir ./build -V -C Debug --progress
build/src/Debug/app

## todos
* move file into subfolders
* we will want to add the trompleil-mocking framework
* (make a variant of this?) adding juce
* (make a variant of this?) adding focusrite-e2e