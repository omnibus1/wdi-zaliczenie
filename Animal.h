//
// Created by apple on 21.10.2022.
//

#ifndef UNTITLED18_ANIMAL_H
#define UNTITLED18_ANIMAL_H

#include <iostream>
#include <utility>
class Animal {
public:
    std::string name;
    int age;
    Animal(){
        name="none";
        age=0;
    }
    Animal(const int & age,const std::string & name){
        this->age=age;
        this->name=name;
    }
    void speak()const{
        std::cout<<"Animal: "<<name<<" is: "<<age<<"\n";
    }
};


#endif //UNTITLED18_ANIMAL_H
