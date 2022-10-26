#include <iostream>
#include "Dynamic_array.h"
#include "Animal.h"
#include "Dog.h"
int main() {
    Dynamic_array a=Dynamic_array();
    a.push_back(Animal(14,"Adas"));
    a[0].speak();
    return 0;
}
