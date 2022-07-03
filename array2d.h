#pragma once

#include <vector>
#include <cmath>
#include <tuple>
#include <iostream>

template<class T>
class array2d{
    public:
    array2d(){
        array2d(0,0,0);
    }
    array2d(int size_x,int size_y,T init_val):pitch(size_x),sizex(size_x),sizey(size_y){
        data.assign(size_x * size_y,init_val);
    }
    array2d(array2d<T> &a){
        data = a.getData();
        sizex=a.sizeX();
        sizey=a.sizeY();
        pitch=sizex;
    }
    const std::vector<T> getData(){
        return data;
    }
    int getPitch(){
        return pitch;
    }
    T& getElementReference(int x, int y){
        return data[x + pitch*y];
    }
    T& operator()(int x, int y){
        return getElementReference(x,y);
    }
    int sizeX(){
        return sizex;
    }
    int sizeY(){
        return sizey;
    }
    auto begin(){
        return std::begin(data);
    }
    auto end(){
        return std::end(data);
    }
    private:
    int pitch;
    std::vector<T> data;
    int sizex;
    int sizey;
};

template<class T>
bool printArray(array2d<T> arr){
    std::cout<<arr.sizeX()<<", "<<arr.sizeY()<<"\n";
    for(int i=0;i<arr.sizeX();++i){
        for(int j=0;j<arr.sizeY();++j){
            std::cout << arr(i,j) << "\t";
        }
        std::cout << "\n";
    }
    return true;
}