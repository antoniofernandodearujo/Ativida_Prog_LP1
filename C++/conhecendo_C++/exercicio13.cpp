/*
    13) Escreva quantos anos serão necessários para que Ciclano seja maior que 
    Fulano. Considere que Fulano tem 1,50 m e cresce 2 cm por ano e Ciclano 
    tem 1,10 m e cresce 3 cm por ano.
*/

#include <iostream>

using namespace std;

int main() {
    
    float alturaFulano = 1.50, alturaCiclano = 1.10;
    int contAnos;
    
    //Fulano cresce 2cm e Ciclano 3cm por ano;
    contAnos = 0;
    while(true) {
        alturaCiclano += 0.3;
        alturaFulano += 0.2;
        contAnos++;

        if(alturaCiclano > alturaFulano) {
            break;
        }
        
    }

    cout << "Ciclano vai ser maior que Fulano daqui a: " << contAnos << " anos.";


    return 0;
}
