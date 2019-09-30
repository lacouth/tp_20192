#include <iostream>
#include "ponto.h"

using namespace std;

class Ponto3d : public Ponto {

    public:
        int z;
        Ponto3d(int a, int b, int c);
        void show();

};