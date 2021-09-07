#include "../include/Animal.h"

void Animal::meeting(Animal *animal_1, Animal *animal_2)
{
    animal_1->makeSoundTo(animal_2);
    std::cout << " - ";
    animal_2->makeSoundTo(animal_1);
    std::cout << "\n";
}