#pragma once 

#include <vector>
#include <string>
#include <functional>
#include <map>

namespace pokemon{
    class type{
        public:
        type(){
            std::map<std::string,int> tmpMap{{"normal",0},{"fight",1},{"flying",2},{"poison",3},{"ground",4},{"rock",5},{"bug",6},{"ghost",7},{"steel",8},{"fire",9},{"water",10},{"grass",11},{"electric",12},{"psychic",13},{"ice",14},{"dragon",15},{"dark",16},{"fairy",17}};
            nameToNumber = tmpMap;
            std::vector<std::string> tmpVector{"normal","fight","flying","poison","ground","rock","bug","ghost","steel","fire","water","grass","electric","psychic","ice","dragon","dark","fairy"};
            numberToName = tmpVector;
        }
        int get_number(std::string key){
            return nameToNumber[key];
        }
        std::string get_name(int number){
            return numberToName[number];
        }
        private:
        std::map<std::string,int> nameToNumber;
        std::vector<std::string> numberToName;
    };
};