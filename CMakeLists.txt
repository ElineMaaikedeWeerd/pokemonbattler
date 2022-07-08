cmake_minimum_required(VERSION 3.22)

# set(CMAKE_CXX_COMPILER "/usr/bin/c++")

project(Pokemon)

add_compile_options(-g -fsanitize=address -std=c++17)
add_executable(pokemon pokemon.cpp pokemon_types.h grid.h battles.h array2d.h)
target_link_libraries(pokemon -fsanitize=address)