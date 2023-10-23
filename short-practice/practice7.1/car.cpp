// Don't forget to include the .h file!
// TODO: Implement your car class!
#include<iostream>
#include "car.h"

Car::Car (std::string make, std::string model, int year, int mileage){
    this->make = make;
    this->model = model;
    this->year = year;
    this->mileage = mileage;
}
    

void Car::drive(int distance){
    mileage += distance;
}

void Car::displayinfo(){
    std::cout << getMake() << ", "<< getModel() << ", "<< 
    getYear() << ", " <<getMileage() << std::endl;
}

std::string Car::getMake(){
    return make;
}

std::string Car::getModel(){
    return model;
}

int Car::getYear(){
    return year;
}

int Car::getMileage(){
    return mileage;
}