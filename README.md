# cmake_ctest_catch2
This project now successfully runs on MacOs, Windows and Linux using github-actions.
If you want to run through a similar process as the github-actions script use the following commands:

rm -rf build Testing  
cmake -S . -B build -G Xcode  
cmake --build build  
ctest --test-dir ./build/tests -V -C Debug --progress  
build/src/Debug/app

## todos
* show header files in IDE
* use GLOB
* (make a variant of this?) adding juce
* (make a variant of this?) adding focusrite-e2e