#ifndef TASK_29_1_CAT_H
#define TASK_29_1_CAT_H

#include "Animal.h"

class Cat : public Animal {

public:
    void makeSoundTo(Animal* animal) override;

};

#endif //TASK_29_1_CAT_H