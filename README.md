
My CMake project template
- C/C++ Linux projects
- Native x86_64/arm projects
- arm cross on x86_64

How to use
- Create and edit your project source files
- Add to CMakeLists.txt or customize it
- Run build.py

Build as native in x86_64 or arm
```
./build.py
```
- release build

   ```
   ./build.py release
   ```
- clean and then build

   ```
   ./build.py clean
   ```

Cross build for arm in x86_64
```
./build.py arm
```
