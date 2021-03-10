cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_NAME CMake_tutorial)
set(PROJECT_TESTS_NAME ${PROJECT_NAME}_tests)

project(${PROJECT_NAME} VERSION 1.0.0)

#set(PATH_TO_GOOGLETEST ${CMAKE_CURRENT_SOURCE_DIR}/lib/googletest)

add_subdirectory(src)

if (BUILD_TESTS)
    add_subdirectory(tests)
    add_subdirectory(lib/googletest)
endif()