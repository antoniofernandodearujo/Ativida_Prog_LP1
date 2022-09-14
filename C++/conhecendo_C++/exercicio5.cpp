/*
    5) leia dois números inteiros, uma operação matemática (+,-,*,/) 
    e faça o calculo destes números segundo a operação lida
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, resultado;
    char operacao;

    cin >> n1 >> n2;
    cin >> operacao;

    resultado = 0;
    switch(operacao) {
        case '+':
            resultado = n1 + n2;
            cout << n1 << " " << "+ " << n2 << " = " << resultado;
            break;
        case '-':
            resultado = n1 - n2;
            cout << n1 << " " << "- " << n2 << " = " << resultado;
            break;
        case '*':
            resultado = n1 * n2;
            cout << n1 << " " << "* " << n2 << " = " << resultado;
            break;
        case '/':
            resultado = n1 / n2;
            cout << n1 << " " << "/ " << n2 << " = " << resultado;
            break;
        default:
            cout << "Por favor insira uma operção valida!";
            break;
    }
}