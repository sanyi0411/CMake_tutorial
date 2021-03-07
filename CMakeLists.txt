cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_NAME CMake_tutorial)
#set(PROJECT_TESTS_NAME Animal_tests)

project(${PROJECT_NAME} VERSION 1.0.0)

add_subdirectory(src)