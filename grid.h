#pragma once

#include <vector>
#include <random>
#include <tuple>
#include "pokemon_types.h"
#include "array2d.h"
#include "battles.h"

class grid{
    public:
    grid(int size_x, int size_y){
        pokemon_grid = array2d<int>(size_x,size_y,0);
    }
    grid(grid &g){
        pokemon_grid = g.pokemon_grid;
    }
    void randomise(){
        std::default_random_engine generator;
        std::uniform_int_distribution<int> distribution(0,17);
        for(auto pkmn=pokemon_grid.begin();pkmn<pokemon_grid.end();++pkmn){
            *pkmn=distribution(generator);
        }
    }
    array2d<int> pokemon_grid;
};
void battle(grid &current, grid &future,array2d<float> &battletable){
    //periodic boundaries are implemented in here more elegant solution in future?
    for(int i=1; i<current.pokemon_grid.sizeX()-1;++i){
        for(int j=1; j<current.pokemon_grid.sizeY()-1;++j){
             future.pokemon_grid(i,j)=battles::gridBattle(i,j,current.pokemon_grid,battletable);
        }
    }
    for(int j=1; j<current.pokemon_grid.sizeY()-1;++j){
        future.pokemon_grid(0,j)=future.pokemon_grid(future.pokemon_grid.sizeX()-1,j);
        future.pokemon_grid(future.pokemon_grid.sizeX(),j)=future.pokemon_grid(1,j);
    }
    for(int i=1; i<current.pokemon_grid.sizeX()-1;++i){
        future.pokemon_grid(i,0)=future.pokemon_grid(i,future.pokemon_grid.sizeY()-1);
        future.pokemon_grid(i,future.pokemon_grid.sizeY())=future.pokemon_grid(i,1);
    }
};