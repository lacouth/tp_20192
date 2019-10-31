#include <iostream>
#include "complexo.h"

using namespace std;

int main(){
    Complexo n1(20,50);
    Complexo n2(10,80);

    Complexo n3;

    n3 = n1 + n2;

    n4 = n2 + 2;

    n1.show();
    n2.show();
    n3.show();

    return 0;
}