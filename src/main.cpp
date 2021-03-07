#include <iostream>
#include "Animal.h"
#include "Vehicle.h"

int main()
{   
    Animal Max(dog);
    Animal Zazu(bird);
    Animal Nemo(fish);

    std::cout << "Max has " << Max.getLegCount() << " legs." << std::endl;
    std::cout << "Zazu has " << Zazu.getLegCount() << " legs." << std::endl;
    std::cout << "Nemo has " << Nemo.getLegCount() << " legs." << std::endl;

    Max.makeSound();
    Zazu.makeSound();
    Nemo.makeSound();

    Vehicle myCar(car);
    std::cout << "Seats: " << myCar.getNumberOfPassengers() << std::endl;
    std::cout << "Fuel: " << myCar.getFuelType() << std::endl;


    return 0;
}