/*
    6) Leia o nome e a idade de três pessoas e informe o nome  da pessoa mais velha e o nome da pessoa mais nova. 
    Considere que não existem idades iguais.
*/

#include <iostream>
#include <string>

#define QTD_IDADE 3

using namespace std;

int main() {

    int idades[QTD_IDADE], maiorIdade, menorIdade;
    string nome1 = "";
    string nome2 = "";
    string nome3 = "";

    cin >> nome1 >> idades[0];
    cin >> nome2 >> idades[1];
    cin >> nome3 >> idades[2];

    int aux = 0;
    bool troca = true;
    
    while(troca) {
        troca = false;
        for (int i = 0; i < QTD_IDADE; i++){
            if (idades[i] > idades[i+1]){

                /*Realiza a troca*/
                aux = idades[i];
                idades[i] = idades[i+1];
                idades[i+1] = aux;

                troca = true; 
            }
        }
    }

    maiorIdade = menorIdade = idades[0];
    for (int i = 0; i < QTD_IDADE; i++) {
        if(idades[i] > maiorIdade) {
            maiorIdade = idades[i];
        } else {
            if(idades[i] < menorIdade) {
                menorIdade = idades[i];
            }
        }
    }

    cout << menorIdade << " " << maiorIdade;

    return 0;
}
