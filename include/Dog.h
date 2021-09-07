#ifndef TASK_29_1_DOG_H
#define TASK_29_1_DOG_H

#include "Animal.h"

class Dog : public Animal {

public:
    void makeSoundTo(Animal* animal) override;

};

#endif //TASK_29_1_DOG_H