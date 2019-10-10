#include <iostream>

using namespace std;

class Retangulo{
    private:
        int altura;
        int largura;
    public:
        Retangulo(int a, int l);
        Retangulo();
        void show();
        int getAltura();
        int getLargura();

        Retangulo operator+(int valor);
        Retangulo operator+(Retangulo b);


};