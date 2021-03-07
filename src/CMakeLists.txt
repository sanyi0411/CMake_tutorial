include_directories(Animals)
include_directories(Vehicles)

add_subdirectory(Animals)
add_subdirectory(Vehicles)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Animals)
target_link_libraries(${PROJECT_NAME} PRIVATE Vehicles)