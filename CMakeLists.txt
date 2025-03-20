cmake_minimum_required(VERSION 3.20)
project(learning)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
message("Using C++ standard: ${CMAKE_CXX_STANDARD}")

# Force C++14 for Apple Clang
add_compile_options($<$<CXX_COMPILER_ID:AppleClang>:-std=c++14>)

# Define executables for each subject
add_executable(Arrays "subjects/data_structures/Arrays.cpp")
add_executable(String "subjects/data_structures/String.cpp")
add_executable(Pointer
        "subjects/pointer/main.cpp"
        "subjects/pointer/Log.cpp"
        "subjects/class/Static.cpp"
        "subjects/class/Enum.cpp"
        "subjects/class/Constructor.cpp"
        "subjects/class/Virtual.cpp"
        "subjects/class/Interface.cpp"
)

add_executable(SmartPointer "subjects/pointer/SmartPointer.cpp")
add_executable(Macro "subjects/key_words/Macro.cpp")
add_executable(Auto "subjects/key_words/Auto.cpp")
add_executable(FunctionPointer "subjects/pointer/FunctionPointer.cpp")
add_executable(PrecompileHeader "subjects/precompile_headers/main.cpp")

# Instruct CMake to precompile pch.h for the my_app target.
target_precompile_headers(PrecompileHeader PRIVATE subjects/precompile_headers/pch.h)

# Ensure each executable includes its own directories
target_include_directories(Arrays PRIVATE subjects/data_structures)
target_include_directories(Pointer PRIVATE subjects/pointer)


target_compile_definitions(Macro
        PRIVATE
        $<$<CONFIG:Debug>:DEBUG_MODE>
        $<$<CONFIG:Release>:RELEASE_MODE>
)


