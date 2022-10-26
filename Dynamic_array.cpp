#include "Dynamic_array.h"

//
// Created by apple on 21.10.2022.
//
Dynamic_array::~Dynamic_array(){
    if(not tab)delete []tab;

}
void Dynamic_array::push_back(const Animal & animal) {
    if(capacity==0){
        reserve(2*rozmiar+5);
    }
    tab[rozmiar]=animal;
    rozmiar+=1;
    capacity-=1;
}
void Dynamic_array::reserve(int new_size) {
    std::cout<<"new max size"<<new_size<<"\n";
    auto * tmp=new Animal[new_size];
    for(int i=0;i<rozmiar;i++){
        tmp[i]=tab[i];
    }
    delete[]tab;
    tab=tmp;
    std::cout<<"old cap"<<capacity<<"\n";
    capacity+=new_size-rozmiar;
    std::cout<<"new cap"<<capacity<<"\n";

}
Animal & Dynamic_array::operator[](int index) const{
    if(index>rozmiar){
        throw std::out_of_range("-");

    }
    return tab[index];

}

#include "Dynamic_array.h"
