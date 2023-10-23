#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray {
    public:
        // TODO: Define your methods
        DynamicArray(int size);
        
        ~DynamicArray();
        
        void setSquaredIndices();
        void displayElements();
     
    private:
        // TODO: Define your private member variables
        int size;
        int *array;
};

#endif