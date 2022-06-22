cmake_minimum_required(VERSION 3.16)    # CMake version check
project(data_structures_and_algorithms) # Create project "simple_example"
set(CMAKE_CXX_STANDARD 17)              # Enable c++17 standard

include_directories(
        src/LinkedList/
        src/Stack/)

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES
        src/LinkedList/LinkedList.h
        src/Stack/Stack.h
        src/main.cpp
        src/LinkedList/LinkedList.cpp
        src/LinkedList/LinkedListNode.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(simple_example ${SOURCE_FILES})