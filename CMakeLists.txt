cmake_minimum_required(VERSION 3.3)
project(List)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Element.cpp Element.h Integer.cpp Integer.h Double.cpp Double.h String.cpp String.h List.cpp List.h)
add_executable(List ${SOURCE_FILES})