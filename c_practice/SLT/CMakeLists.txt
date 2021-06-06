cmake_minimum_required(VERSION 3.15)
project(SLT C)

set(CMAKE_C_STANDARD 99)

add_executable(SLT main.c SLTNode.c SLTNode.h)