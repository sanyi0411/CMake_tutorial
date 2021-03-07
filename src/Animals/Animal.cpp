#include <iostream>
#include "Animal.h"

Animal::Animal(animalType type)
{
    switch (type) {
        case dog:
            m_numberOfLegs = 4;
            m_soundItMakes = "woof";
            break;
        case bird:
            m_numberOfLegs = 2;
            m_soundItMakes = "chirp";
            break;
        case fish:
            m_numberOfLegs = 0;
            m_soundItMakes = "bubble";
            break;
        default:
            break;
    }
};

int Animal::getLegCount()
{
    return m_numberOfLegs;
};

void Animal::makeSound()
{
    std::cout << m_soundItMakes << std::endl;
};