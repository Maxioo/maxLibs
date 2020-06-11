cmake_minimum_required(VERSION 3.10)
project(maxLibs)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)
add_subdirectory(maxlibs)
add_subdirectory(libs/googletest)

add_executable(cliontest main.cpp)
target_link_libraries(cliontest
        maxString_dll)