#include "../include/Dog.h"

void Dog::makeSoundTo(Animal* animal)
{
    if (typeid(*animal) == typeid(Dog))
    {
        std::cout << "Woof";
    }
    else
    {
        std::cout << "Bark";
    }
}