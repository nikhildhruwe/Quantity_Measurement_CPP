cmake_minimum_required(VERSION 3.18.2)

project(quantity_measurement)

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(executeTests main/feet.cpp main/feet.h test/feetTest.cpp)

target_link_libraries(executeTests PRIVATE gtest)
