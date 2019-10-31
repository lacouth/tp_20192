#include <iostream>
#include <vector>

using namespace std;

int main(){
    int valor;
    vector<int> lista;

    cout<<"Informe os valores (x para sair) ";

    while(cin >> valor){
        lista.push_back(valor);
    }

    for(int a : lista){
        cout << a << " ";
    }

    return 0;
}