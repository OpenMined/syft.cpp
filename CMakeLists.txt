# https://libcheck.github.io/check/
cmake_minimum_required(VERSION 3.1)

project(syft VERSION 0.0.1 DESCRIPTION "A library for encrypted, privacy preserving machine learning")

# Set release as default build type
if(NOT CMAKE_BUILD_TYPE) 
    set(CMAKE_BUILD_TYPE Release)
endif(NOT CMAKE_BUILD_TYPE)

# Configure wether libraries will be static or shared linked
set(BUILD_SHARED_LIBS ON)

set(SYFT_SRC_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(SYFT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/include)

# Show all warning messages
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall -Wextra -std=c89 -pedantic \
                   -Wmissing-prototypes -Wstrict-prototypes \
                   -Wold-style-definition")


file(GLOB src ${SYFT_SRC_ROOT}/*/*.cpp)

include_directories(${SYFT_INCLUDE_DIR})

# Generate the shared library from sources
add_library(syft ${src})

# install shared library at /usr/lib. Use "sudo make install" to apply 
install(TARGETS syft DESTINATION lib)

enable_testing()