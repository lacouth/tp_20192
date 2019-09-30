#include <iostream>

using namespace std;

class Ponto{
   
    public:
        int x;
        int y;
        Ponto(int a, int b);
        Ponto();
        string quadrante();
        void show();
};