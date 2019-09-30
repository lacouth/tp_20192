#include <iostream>
#include "ponto.h"

using namespace std;

int main(){
    Ponto p(-2,8);
    Ponto m;

    cout << "O ponto p está no "<<p.quadrante()<<" quadrante: "<<endl;
    cout << "O ponto m está no "<<m.quadrante()<<" quadrante: "<<endl;

    return 0;
}