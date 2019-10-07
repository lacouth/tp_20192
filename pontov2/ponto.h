#include <iostream>

using namespace std;

class Ponto {
    private:
        int x;
        int y;
    public:
        Ponto(int a, int b);
        Ponto();
        void setX(int a);
        void setY(int b);

        int getX();
        int getY();
        string quadrante();
        
};
