#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main () {

    //Dizer qual arquivo ser� lido
    ifstream input("Vocabulario.txt");

    //String que receber� o texto lido
    string textoLido;

    //Passa o texto do arquivo para a string
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //Mostrar o conte�do
    cout << textoLido;

    return 0;
}
