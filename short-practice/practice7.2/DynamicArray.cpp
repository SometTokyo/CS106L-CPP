#include "DynamicArray.h"
#include <iostream>

// TODO: Implement your class!
    DynamicArray::DynamicArray(int size){
        this->size = size;
        array = new int[size];
    }
        
    DynamicArray::~DynamicArray(){
        delete []array;
    }
        
    void DynamicArray::setSquaredIndices(){
        for (int i = 0; i < size; i++){
            array[i] = i*i;
        }
    }
        
    void DynamicArray::displayElements(){
        for(int i = 0; i < size; i++){
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
        
    }