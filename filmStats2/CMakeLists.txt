cmake_minimum_required(VERSION 3.6)
project(filmStats2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES filmMain.cpp FilmStats.h FilmStats.cpp)
add_executable(filmStats2 ${SOURCE_FILES})