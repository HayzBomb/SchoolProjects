cmake_minimum_required(VERSION 3.6)
project(ROT13Decoder)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(ROT13Decoder ${SOURCE_FILES})