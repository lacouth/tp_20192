#include "forca.h"

void obterChute(string &chutes){

    char letra;
    cout << "Informe uma letra: ";
    cin >> letra;
    chutes += letra;

}

void mostrarForca(string c, string p){
    for(int i=0;i<p.size();i++){
        if(c.find(p[i])==-1)
            cout << "_ ";
        else
            cout << p[i]<<" ";
    }
    cout << endl;
}

int contarAcertos(string c, string p){
    int contador = 0;
    for(int i=0;i<p.size();i++){
        if(c.find(p[i])!=-1){
            contador++;
        }
    }
    return contador;
}

int contarErros(string c, string p){
    int contador = 0;
    for(int i=0;i<c.size();i++){
        if(p.find(c[i])==-1)
            contador++;
    }
    return contador;
}

string obterPalavra(string filename){
    srand(time(NULL));
    ifstream arquivo;
    arquivo.open(filename);
    vector<string> palavras;
    string palavra;
    int posicao;
    if(arquivo.is_open()){
        while(arquivo >> palavra){
            palavras.push_back(palavra);
        }
        posicao = rand() % palavras.size();
        arquivo.close();
        return palavras[posicao];
    }else
        cout << "Deu ruim!!\n";
    arquivo.close();
    return "-1";
}