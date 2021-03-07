#include "Vehicle.h"

Vehicle::Vehicle(VehicleTypes type)
{
    switch (type){
        case car:
            m_numberOfPassengers = 5;
            m_fuelType = "petrol";
            break;
        case lorry:
            m_numberOfPassengers = 2;
            m_fuelType = "diesel";
            break;
        case bus:
            m_numberOfPassengers = 40;
            m_fuelType = "diesel";
        default:
            break;
    }
}

unsigned short int Vehicle::getNumberOfPassengers()
{
    return m_numberOfPassengers;
}

std::string Vehicle::getFuelType()
{
    return m_fuelType;
}