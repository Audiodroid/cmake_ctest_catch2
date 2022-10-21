rm -rf build
cmake -S . -B build -G Xcode
cmake --build build
ctest --test-dir ./build/tests -V -C Debug --progress