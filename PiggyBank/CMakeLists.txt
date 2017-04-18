cmake_minimum_required(VERSION 3.6)
project(PiggyBank)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp PiggyBank.h PiggyBank.cpp)
add_executable(PiggyBank ${SOURCE_FILES})