cmake_minimum_required(VERSION 3.21)
project(includes_problem)
add_executable(problem main.cpp)

#target_include_directories(problem PRIVATE
#    a/public
#    b/public
#)

add_library(a INTERFACE)
target_include_directories(a INTERFACE a/public)

add_library(b INTERFACE)
target_include_directories(b INTERFACE b/public)

target_link_libraries(problem PRIVATE a b)
