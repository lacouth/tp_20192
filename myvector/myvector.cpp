#include "myvector.h"

void MyVector::adicionar(int n){
    if(n>=0){
        vetor.push_back(n);
    }else{
        vetor.push_back(0);
    }
}

void MyVector::show(){
    for(int elemento : vetor){
        cout << elemento << " ";
    }
    cout <<endl;
}

MyVector MyVector::operator+(int valor){
    MyVector temp;
    for(int i:vetor){
        temp.adicionar(i + valor);
    }
    return temp;
}

int MyVector::operator[](int posicao){
    if(posicao>=0)
        return vetor[posicao];
    else
        return vetor[vetor.size()+posicao];
}

MyVector MyVector::operator+(MyVector b){
    MyVector temp;
    for(int i=0; i<vetor.size();i++){
        temp.adicionar(vetor[i]+b[i]);
    }
    return temp;
}

void MyVector::ordenar(){
    sort(begin(vetor), end(vetor));
}