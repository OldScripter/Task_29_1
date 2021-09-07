#include "../include/Cat.h"

void Cat::makeSoundTo(Animal* animal)
{
    if (typeid(*animal) == typeid(Cat))
    {
        std::cout << "Purr";
    }
    else
    {
        std::cout << "Meow";
    }
}