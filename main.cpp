#include <iostream>

#include "include/Dog.h"
#include "include/Cat.h"

int main() {

    //Animal creation:
    Dog* dog_1 = new Dog();
    Dog* dog_2 = new Dog();
    Cat* cat_1 = new Cat();
    Cat* cat_2 = new Cat();

    //Test of animals meeting
    Animal::meeting(dog_1, dog_2);
    Animal::meeting(dog_1, cat_1);
    Animal::meeting(cat_1, dog_1);
    Animal::meeting(cat_1, cat_2);

    return 0;
}