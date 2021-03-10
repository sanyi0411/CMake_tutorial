#include "gtest/gtest.h"
#include "Vehicle.h"

TEST(VehicleTests, test1)
{
    //Arrange
    Vehicle myCar(car);
    //Act
    int pass = myCar.getNumberOfPassengers();
    std::string fuel = myCar.getFuelType();
    //Assert
    ASSERT_EQ(pass, 5);
    ASSERT_EQ(fuel, "petrol");
}