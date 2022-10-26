//
// Created by apple on 21.10.2022.
//

#ifndef UNTITLED18_DYNAMIC_ARRAY_H
#define UNTITLED18_DYNAMIC_ARRAY_H

#include "Animal.h"
class Dynamic_array {
public:
    Animal * tab;
    int rozmiar;
    int capacity;

    Dynamic_array():tab(nullptr),rozmiar(0),capacity(0){}
    ~Dynamic_array();
    void push_back(const Animal & animal);
    void reserve(int);
    Animal & operator [](int index)const;

};


#endif //UNTITLED18_DYNAMIC_ARRAY_H
