# https://libcheck.github.io/check/
cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_COMPILER "g++")

project(syft VERSION 0.0.1 DESCRIPTION "A library for encrypted, privacy preserving machine learning" LANGUAGES CXX)

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

include_directories(src)
include_directories(${SYFT_INCLUDE_DIR})

enable_testing()
add_subdirectory(src)
add_subdirectory(lib/googletest)

# Testing configurations
set(BINARY ${CMAKE_PROJECT_NAME}_tst)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false tests/*.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${TEST_SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)
