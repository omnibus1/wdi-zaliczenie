//
// Created by apple on 22.10.2022.
//

#ifndef UNTITLED18_DOG_H
#define UNTITLED18_DOG_H


#include "Animal.h"

class Dog: public Animal{
    void speak()const{
        std::cout<<"This a dog"<<"\n";
    }

};


#endif //UNTITLED18_DOG_H
