/* User of the car class defined in car.h and implemented in car.cpp */
// Don't forget to #include "car.h"!
#include "car.h"

int main() {
    // TODO: Be a client of your car class!
    // Run the solution to see what you could do 
    // (but don't look at the .h and .cpp file until you've given this a go!)
    Car car("Toyota", "Camry", 1998, 30000);
    car.drive(2000);
    car.displayinfo();

    return 0;
}