cmake_minimum_required(VERSION 3.18.2)

project(quantity_measurement)

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(executeTests main/unit.cpp main/unit.h  main/quantityMeasurement.cpp main/quantityMeasurement.h test/quantityMeasurementTest.cpp)

target_link_libraries(executeTests PRIVATE gtest)
