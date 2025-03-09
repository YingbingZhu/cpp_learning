cmake_minimum_required(VERSION 3.20) # Lowered for compatibility
project(learning)

set(CMAKE_CXX_STANDARD 20)

# Define executables for each subject
add_executable(Arrays "subjects/data_structures/Arrays.cpp")
add_executable(String "subjects/data_structures/String.cpp")
add_executable(Pointer "subjects/pointer/main.cpp" "subjects/pointer/Log.cpp")
add_executable(Class   "subjects/class/Main.cpp"
        "subjects/class/Static.cpp"
        "subjects/class/Enum.cpp"
        "subjects/class/Constructor.cpp"
        "subjects/class/Virtual.cpp"
        "subjects/class/Interface.cpp")

# Ensure each executable includes its own directories
target_include_directories(Arrays PRIVATE subjects/data_structures)
target_include_directories(Pointer PRIVATE subjects/pointer)
target_include_directories(Class PRIVATE subjects/class)