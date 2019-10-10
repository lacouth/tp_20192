#include <iostream>
#include "retangulo.h"
using namespace std;

int main(){

    Retangulo ret1(5,5);
    Retangulo ret2(5,5);
    Retangulo ret3;
    
    ret1.show();
    cout << endl;
    cout << endl;
    ret3 = ret1 + ret2;

    ret3.show();
 
    return 0;
}