#include<string>

class Car {
public:
    // TODO: Fill in method signatures!
    Car (std::string make, std::string model, int year, int mileage);
    
    void drive(int distance);
    void displayinfo();
    
    std::string getMake();
    std::string getModel();
    int getYear();
    int getMileage();

private:
    // TODO: Fill in private member variables
    std::string make;
    std::string model;
    int year;
    int mileage;
};
