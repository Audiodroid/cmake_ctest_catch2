# cmake_ctest_catch2
(cannot) get catch to work with cmake's ctest.  
Usual command-line procedure:  

rm -rf build Testing  
cmake -S . -B build -G Xcode  
ctest -V  
