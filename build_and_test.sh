rm -rf build
cmake -S . -B build -G Xcode
cmake --build build
ctest --test-dir ./build -V -C Debug --progress