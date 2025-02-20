cmake_minimum_required(VERSION 3.30)
project(learning)

set(CMAKE_CXX_STANDARD 20)

add_executable(learning "Source Files/main.cpp" "Source Files/Log.cpp" "Source Files/math.cpp"
        "Header Files/Log.h"
)
