cmake_minimum_required(VERSION 3.0)

project(tema2PAOOProject)

set(CMAKE_CXX_STANDARD 17)

add_library(tema2PAOO src/tema2PAOO.cpp)
add_executable(Main src/main.cpp)

target_link_libraries(Main tema2PAOO)
