cmake_minimum_required(VERSION 3.30)
project(learning)

set(CMAKE_CXX_STANDARD 20)

# Include directories for common headers
include_directories(include subjects/class subjects/pointer subjects/struct)

# Define executables for each subject
add_executable(Pointer "subjects/pointer/main.cpp" "subjects/pointer/Log.cpp")
add_executable(Struct  "subjects/struct/math.cpp")   # Struct doesn't have a main yet
add_executable(Class   "subjects/class/main.cpp"
        subjects/class/main.cpp
        subjects/class/Static.cpp
        subjects/class/Enum.cpp
        subjects/class/Constructor.cpp
)   # If you have a main file in class

# Ensure each executable is independent
target_include_directories(Pointer PRIVATE subjects/pointer)
target_include_directories(Struct PRIVATE subjects/struct)
target_include_directories(Class PRIVATE subjects/class)
