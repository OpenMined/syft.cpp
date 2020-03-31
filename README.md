# syft.cpp
A C++ implementation of [PySyft](https://github.com/OpenMined/PySyft/) - A library for encrypted, privacy preserving machine learning

## Installation

**syft.cpp** comes with a CMake build script that can be used on a wide range of platforms. If you don't have CMake installed already, you can download it for free from http://www.cmake.org/.

Then, do as follows to build this library:

1. Get the source code and change to it. e.g. cloning with git:
```bash
git clone https://github.com/hericlesme/syft.cpp.git
cd syft.cpp
```
2. Build the project using CMake:

```bash
mkdir build && cd build
cmake ..
make
```

### Build Type

By default `Release` build type will be used. Note that assert will be disabled with this build type.

You can a specific build type vai the `CMAKE_BUILD_TYPE` flag.


```bash
mkdir build && cd build
cmake -D CMAKE_BUILD_TYPE=Debug ..
make
make test
```

***

## Deployment

If you wish to install the `syft` library run the following command with `sudo` after building the project:

```bash
make install
```
