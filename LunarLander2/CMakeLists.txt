cmake_minimum_required(VERSION 3.6)
project(LunarLander2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES LanderSim.cpp LunarLander.cpp LunarLander.h)
add_executable(LunarLander2 ${SOURCE_FILES})