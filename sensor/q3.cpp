#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    int valor;
    ifstream entrada;
    vector<int> lista;
    int contador;

    entrada.open("valores.txt");
    
    if(entrada.is_open()){
        while(entrada >> valor){
            lista.push_back(valor);
        }
    }else{
        cout<< "Não foi possível abrir o arquivo\n";
    }

    contador = count(lista.begin(),lista.end(),800);

    for(int a : lista){
        cout << a << " ";
    }

    cout << "O 800 aparece "<<contador<<" vezes"<<endl;

    entrada.close();

    return 0;
}