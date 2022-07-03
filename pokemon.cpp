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
    grid current_pokemongrid(20,20);
    current_pokemongrid.randomise();
    grid future_pokemongrid(20,20);
    printArray<int>(current_pokemongrid.pokemon_grid);
    battle(current_pokemongrid,future_pokemongrid,battletable);
    std::cout<<"\n\n";
    printArray<int>(future_pokemongrid.pokemon_grid);
    battle(future_pokemongrid,current_pokemongrid,battletable);
    std::cout<<"\n\n";
    printArray<int>(future_pokemongrid.pokemon_grid);
}