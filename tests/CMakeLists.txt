add_executable(${PROJECT_TESTS_NAME} main.cpp Animal_tests.cpp Vehicle_tests.cpp)

add_test(NAME ${PROJECT_TESTS_NAME} COMMAND ${PROJECT_TESTS_NAME})

target_link_libraries(${PROJECT_TESTS_NAME} Animals Vehicles gtest)