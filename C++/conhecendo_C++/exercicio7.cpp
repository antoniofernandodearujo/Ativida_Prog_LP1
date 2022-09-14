/*

    7) leia os números inteiros A e B e informe se A é múltiplo, divisor ou
    nada de B.

*/

#include <iostream>

using namespace std;

bool isMultiplo(int n1, int n2) {

    if(n1 % n2 == 0) {
        return true;
    }

    return false;
}

bool isDivisor(int n1, int n2) {

    if(isMultiplo(n1, n2)) {
        if(n2 % n1 == 0) {
            return true;
        }
    }

    return false;
    
}

int main() {

    int A, B, multiplo, divisor;

    cin >> A >> B;
    multiplo = isMultiplo(A, B);
    divisor = isDivisor(A, B);

    if(multiplo && divisor) {
        cout << A << " eh divisor de " << B << " e tambem multiplo de " << B;
    } else {
        cout << A << " nao eh divisor de " << B << " e tambem nao eh multiplo de " << B;
    }

    return 0;
}
