/*
    1) Leia um número inteiro e mostre uma mensagem indicando se este número 
    é par ou ímpar, e se é positivo ou negativo.
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if(n % 2 == 0) {
        if(n > 0) {
            cout << n << " eh par e positivo";
        } else {
            cout << n << " eh par e negativo";
        }
    } else {
        if(n > 0) {
            cout << n << " eh impar e positivo";
        } else {
            cout << n << " eh impar e negativo";
        }
    }




    return 0;
}


