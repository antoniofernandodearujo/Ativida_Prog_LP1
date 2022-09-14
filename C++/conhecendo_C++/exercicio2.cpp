/*
    2) Leia quatro números inteiros e encontre a média aritmética 
    simples entre as que correspondem a números pares.
*/

#include <iostream>



using namespace std;

int main() {

    int n;
    //Ao menos uma das variaveis que vai estar no calculo da media deve
    //estar como float.
    float soma, media;

    soma = media = 0;
    for(int i = 1; i <= 4; i++) {
        cin >> n;
        soma += n;
        media = soma / i;
    }

    cout << media;

    return 0;
}
