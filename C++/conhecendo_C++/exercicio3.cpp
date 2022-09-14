/*
    3) Leia 4 notas, calcule a média dessas e escreva: 
        Reprovado (média < 5), 
        Recuperação (média >= 5 e < 7) e 
        Aprovado (média >= 7)
*/

#include <iostream>

using namespace std;

int main() {

    float n, soma, media;

    soma = media = 0;
    for(int i = 1; i <= 4; i++) {
        cin >> n;
        soma += n;
        media = soma / i;
    }

    if(media < 5) {
        cout << media << " Reprovado";
    } else if(media >= 5 && media < 7) {
        cout << media << " Recuperacao";
    } else {
        cout << media << " Aprovado";
    }
    

    return 0;
}
