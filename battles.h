#pragma once

#include <vector>
#include <iostream>
#include <random>
#include "pokemon_types.h"
#include "array2d.h"

namespace battles{
    array2d<float> makeBattleTable(){
        array2d<float> return_array(18,18,1.0);
        return_array(0,5) = 0.5;
        return_array(0,7) = 0.0;
        return_array(0,8) = 0.5;
        return_array(1,0) = 2.0;
        return_array(1,2) = 0.5;
        return_array(1,3) = 0.5; 
        return_array(1,5) = 2.0;
        return_array(1,6) = 0.5;
        return_array(1,7) = 0.0;
        return_array(1,8) = 2.0;
        return_array(1,13) = 0.5;
        return_array(1,14) = 2.0;
        return_array(1,16) = 2.0;
        return_array(1,17) = 0.5;
        return_array(2,1) = 2.0;
        return_array(2,5) = 0.5;
        return_array(2,6) = 2.0;
        return_array(2,8) = 0.5; 
        return_array(2,11) = 2.0;
        return_array(2,12) = 0.5;
        return_array(3,3) = 0.5;
        return_array(3,4) = 0.5;
        return_array(3,5) = 0.5;
        return_array(3,7) = 0.5;
        return_array(3,8) = 0.0;
        return_array(3,11) = 2.0;
        return_array(3,17) = 2.0;
        return_array(4,2) = 0.0;
        return_array(4,3) = 2.0;
        return_array(4,5) = 2.0;
        return_array(4,6) = 0.5;
        return_array(4,8) = 2.0;
        return_array(4,9) = 2.0;
        return_array(4,11) = 0.5;
        return_array(4,12) = 2.0;
        return_array(5,1) = 0.5;
        return_array(5,2) = 2.0;
        return_array(5,4) = 0.5;
        return_array(5,6) = 2.0;
        return_array(5,8) = 0.5;
        return_array(5,9) = 2.0;
        return_array(5,14) = 2.0;
        return_array(6,1) = 0.5;
        return_array(6,2) = 0.5;
        return_array(6,3) = 0.5;
        return_array(6,7) = 0.5;
        return_array(6,8) = 0.5;
        return_array(6,9) = 0.5;
        return_array(6,11) = 2.0;
        return_array(6,13) = 2.0;
        return_array(6,16) = 2.0;
        return_array(6,17) = 0.5;
        return_array(7,0) = 0.0;
        return_array(7,7) = 2.0;
        return_array(7,13) = 2.0;
        return_array(7,16) = 0.5;
        return_array(8,5) = 2.0;
        return_array(8,8) = 0.5;
        return_array(8,9) = 0.5;
        return_array(8,10) = 0.5;
        return_array(8,12) = 0.5; 
        return_array(8,14) = 2.0;
        return_array(8,17) = 2.0;
        return_array(9,5) = 0.5;
        return_array(9,6) = 2.0;
        return_array(9,8) = 2.0;
        return_array(9,9) = 0.5; 
        return_array(9,10) = 0.5; 
        return_array(9,11) = 2.0;
        return_array(9,14) = 2.0;
        return_array(9,15) = 0.5; 
        return_array(10,4) = 2.0;
        return_array(10,5) = 2.0;
        return_array(10,9) = 2.0;
        return_array(10,10) = 0.5;
        return_array(10,11) = 0.5;
        return_array(10,15) = 0.5; 
        return_array(11,2) = 0.5;
        return_array(11,3) = 0.5; 
        return_array(11,4) = 2.0;
        return_array(11,5) = 2.0;
        return_array(11,6) = 0.5;
        return_array(11,8) = 0.5; 
        return_array(11,9) = 0.5; 
        return_array(11,10) = 2.0;
        return_array(11,11) = 0.5; 
        return_array(11,15) = 0.5; 
        return_array(12,2) = 2.0;
        return_array(12,4) = 0.0;
        return_array(12,10) = 2.0;
        return_array(12,11) = 0.5;
        return_array(12,12) = 0.5; 
        return_array(12,15) = 0.5;
        return_array(13,1) = 2.0;
        return_array(13,3) = 2.0;
        return_array(13,8) = 0.5; 
        return_array(13,13) = 0.5;
        return_array(13,16) = 0.0; 
        return_array(14,2) = 2.0;
        return_array(14,4) = 2.0;
        return_array(14,8) = 0.5;
        return_array(14,9) = 0.5;
        return_array(14,10) = 0.5;
        return_array(14,11) = 2.0;
        return_array(14,14) = 0.5;
        return_array(14,15) = 2.0;
        return_array(15,8) = 0.5;
        return_array(15,15) = 2.0;
        return_array(15,17) = 0.0;
        return_array(16,1) = 0.5; 
        return_array(16,7) = 2.0;
        return_array(16,13) = 2.0;
        return_array(16,16) = 0.5;
        return_array(16,17) = 0.5; 
        return_array(17,1) = 2.0;
        return_array(17,3) = 0.5; 
        return_array(17,8) = 0.5; 
        return_array(17,9) = 0.5; 
        return_array(17,15) = 2.0;
        return_array(17,16) = 2.0;
        return return_array;
    }
    int battle(int attack,int defend,array2d<float> &battletable){
        static std::default_random_engine generator;
        static std::uniform_real_distribution<float> distribution(0.0,1.0);
        float atk=distribution(generator)*battletable(attack,defend);
        float def=distribution(generator)*battletable(defend,attack);
        // std::cout<<distribution(generator)<<"\n";
        return atk>def?attack:defend;
    }
    int gridBattle(int i,int j,array2d<int> &pokemon_grid,array2d<float> &battletable){
        int winner=battle(pokemon_grid(i,j+1),pokemon_grid(i,j),battletable);
        winner=battle(pokemon_grid(i+1,j),winner,battletable);
        winner=battle(pokemon_grid(i,j-1),winner,battletable); 
        winner=battle(pokemon_grid(i-1,j),winner,battletable);
        // std::cout<<"winner: " << winner << "\n";
        return winner;
    }
};