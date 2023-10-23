cmake_minimum_required(VERSION 3.26)
project(8_template_classes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(8_template_classes
        main.cpp
        realvector_soln.cpp
        realvector_soln.h)
