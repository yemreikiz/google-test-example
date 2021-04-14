cmake_minimum_required(VERSION 3.12)

project(my_cpp_project)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(mytest mytests.cpp)

target_link_libraries(mytest GTest::GTest GTest::Main)
    