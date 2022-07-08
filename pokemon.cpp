#include <iostream>
#include <string>
#include "pokemon_types.h"
#include "grid.h"
#include "battles.h"
#include "array2d.h"

int main(){
    std::cout<<"start \n";
    array2d<float> battletable=battles::makeBattleTable();
    // printArray<float>(battletable);
    grid current_pokemongrid(30,30);
    current_pokemongrid.randomise();
    grid future_pokemongrid(30,30);
    future_pokemongrid.pokemon_grid = current_pokemongrid.pokemon_grid;
    // std::cout<<"\n current grid \n";
    // printArray<int>(current_pokemongrid.pokemon_grid);
    for(int i=0;i<600;++i){
       battle(current_pokemongrid,future_pokemongrid,battletable);
       battle(future_pokemongrid,current_pokemongrid,battletable); 
    }
    // battle(current_pokemongrid,future_pokemongrid,battletable);
    // std::cout<<"\n updated, future \n";
    // printArray<int>(future_pokemongrid.pokemon_grid);
    // battle(future_pokemongrid,current_pokemongrid,battletable);
    // std::cout<<"\n updated,current\n";
    // printArray<int>(current_pokemongrid.pokemon_grid);
    // battle(current_pokemongrid,future_pokemongrid,battletable);
    // std::cout<<"\n updated,future \n";
    // printArray<int>(future_pokemongrid.pokemon_grid);
    // battle(future_pokemongrid,current_pokemongrid,battletable);
    // std::cout<<"\n";
    printArray<int>(current_pokemongrid.pokemon_grid);
}