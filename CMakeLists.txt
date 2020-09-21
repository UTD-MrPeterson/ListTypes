cmake_minimum_required(VERSION 3.17)
project(ListTypes)

set(CMAKE_CXX_STANDARD 14)

add_executable(ListTypes main.cpp VectorWrapper.h LinkedListWrapper.h ListWrapper.h)