#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void obterChute(string &chutes);
void mostrarForca(string c, string p);
int contarAcertos(string c, string p);
int contarErros(string c, string p);
string obterPalavra(string filename);