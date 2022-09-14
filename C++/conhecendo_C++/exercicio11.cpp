/*
    11) Leia uma lista de números inteiros positivos e escreva a média 
    aritmética de todos os números lidos que são pares. O algoritmo 
    finaliza quando digitado zero, o qual deve ser excluindo para cálculo 
    da média. 
*/

#include <iostream>

#define NUM 1000

using namespace std;

int main() {
    
    int lista[NUM], cont;
    float soma, media;

    soma = media = cont = 0;
    while(true) {
        cin >> lista[NUM];

        if(lista[NUM] == 0) {
            break;
        }

        soma+=lista[NUM];
        cont++;
    }
    media = soma / cont;
    cout << "A media dos valores eh: " << media;
    return 0;
}
