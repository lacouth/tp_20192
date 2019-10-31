#include <iostream>
#include <vector>

using namespace std;

int main(){
    int valor;
    vector<int> vetor;

    cout << "Informe valores inteiros: ";
    
    while(cin >> valor){
        vetor.push_back(valor);
    }

    
    for(auto elemento : vetor){
        cout << elemento<<" ";
    }
    return 0;
}