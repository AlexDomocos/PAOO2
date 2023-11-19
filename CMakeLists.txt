cmake_minimum_required(VERSION 3.10)
project(MediaManagementSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Media)
add_subdirectory(Book)
add_subdirectory(Movie)
add_subdirectory(src)
