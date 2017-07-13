cmake_minimum_required(VERSION 3.7)
project(MS3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        MyFile.cpp
        MyFile.h
        Streamable.h
        MyFile.cpp
        StreamableTester.cpp)

add_executable(MS3 ${SOURCE_FILES})