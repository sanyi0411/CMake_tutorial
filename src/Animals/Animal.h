#include <string>

enum animalType
{
    dog,
    bird,
    fish
};

class Animal 
{
public:
    Animal(animalType type);
    int getLegCount();
    void makeSound();
private:
    unsigned short int m_numberOfLegs;
    std::string m_soundItMakes;
};