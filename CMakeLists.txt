cmake_minimum_required(VERSION 3.22)

project(Pokemon)

add_compile_options(-O3 -std=c++17)
add_executable(pokemon pokemon.cpp pokemon_types.h grid.h battles.h array2d.h)