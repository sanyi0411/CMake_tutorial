#include <string>

enum VehicleTypes
{
    car,
    lorry,
    bus
};

class Vehicle
{
public:
    Vehicle(VehicleTypes type);
    unsigned short int getNumberOfPassengers();
    std::string getFuelType();

private:
    unsigned short int m_numberOfPassengers;
    std::string m_fuelType;
};