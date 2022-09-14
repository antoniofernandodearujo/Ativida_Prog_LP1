/*
    12) Leia um conjunto de 100 números inteiros positivos e escreva 
    o maior e o menor deles.
*/

#include <iostream>

#define NUM 10

using namespace std;

int main() {
    
    short int lista[NUM];
    int maior, menor;
    
    for(int i = 0; i < NUM; i++) {
        cout << "#" << i+1 << ": ";
        cin >> lista[i];
    }

    maior = menor = lista[0];
    for(int i = 0; i < NUM; i++) {
        if(lista[i] > maior) {
            maior = lista[i];
        } else {
            if(lista[i] < menor) {
                menor = lista[i];
            }
        }
    }
    
    cout << "O maior numero eh: " << maior << ", e o menor eh: " << menor;

    return 0;
}
