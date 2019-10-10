#include <iostream>

using namespace std;

int main(){
    Fracao f(3,2);
    Fracao d(5,3);
    Fracao r;

    r = f * d;

    r.show();
}