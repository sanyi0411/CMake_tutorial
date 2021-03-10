#include "gtest/gtest.h"
#include "Animal.h"

TEST(AnimalTests, test1)
{
    //Arrange
    Animal Baley(dog);
    //Act
    int legs = Baley.getLegCount();
    //Assert
    ASSERT_EQ(legs, 4);
}