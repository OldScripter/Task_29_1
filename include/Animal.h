#ifndef TASK_29_1_ANIMAL_H
#define TASK_29_1_ANIMAL_H

#include <iostream>

class Animal {

public:
    /**
     * @method Meeting of 2 animals. Dialog simulation.
     * @param [in] animal_1 Animal*
     * @param [in] animal_2 Animal*
     */
    static void meeting (Animal* animal_1, Animal* animal_2);

    /**
     * @method Make the animal talk.
     * @param [in] animal Animal*
     */
    virtual void makeSoundTo(Animal* animal) = 0;

};

#endif //TASK_29_1_ANIMAL_H