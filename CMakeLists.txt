cmake_minimum_required(VERSION 3.26)
project(primefactorization_commandlinetool)

set(CMAKE_CXX_STANDARD 20)

add_executable(primefactorization_commandlinetool main.cpp
        factorization_helpers.cpp)
