cmake_minimum_required(VERSION 3.12)
project(lists)

set(CMAKE_CXX_STANDARD 11)

add_executable(LinkedList
        LinkedList/LinkedList.cpp
        LinkedList/LinkedList.h
        LinkedList/main.cpp
        )
