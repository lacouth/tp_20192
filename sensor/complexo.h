#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>

using namespace std;

class Complexo{
    private:
        int real;
        int imaginario;
    public:
        Complexo(int a, int b);
        Complexo(){}
        void show(); // real+imaginario i
        Complexo operator+(Complexo b);
        Complexo operator+(int b);
        
        int getReal(){return real;}
        int getImaginario(){return imaginario;}
};

#endif