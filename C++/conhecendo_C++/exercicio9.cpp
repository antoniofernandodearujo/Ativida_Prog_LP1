/*
    9) Escrever um programa que leia as medidas dos lados de um triângulo,
    e exiba a classificação do triângulo quanto aos lados.
*/

#include <iostream>

using namespace std;

bool isTriangulo(int lado1, int lado2, int lado3) {

    if((lado2 - lado3 * (-1)) < lado1 && lado1 < (lado2 + lado3)) {
        if((lado1 - lado3 * (-1)) < lado2 && lado2 < (lado1 + lado3)) {
            if((lado1 - lado2 * (-1)) < lado3 && lado3 < (lado1 + lado2)) {
                return true;
            }
        }
    }

    return false;
     
}

int typeTriangulo(int lado1, int lado2, int lado3) {
    if(lado1 == lado2 == lado3) {
        return 1;
    } else {
        if(
            (lado1 == lado2 && lado3 != lado2 && lado3 != lado1) ||
            (lado2 == lado3 && lado1 != lado2 && lado3 != lado1)
        ) {
            return 2;
        }
    }

    return 3;
}

int main() {
    
    int l1, l2, l3, tipoTriangulo;
    bool ehTriangulo;

    cin >> l1 >> l2 >> l3;
    ehTriangulo = isTriangulo(l1, l2, l3);

    if(ehTriangulo) {
        tipoTriangulo = typeTriangulo(l1, l2, l3);
        switch(tipoTriangulo) {
            case 1:
                cout << "Triangulo equilatero!";
                break;
            case 2:
                cout << "Triangulo isosceles!";
                break;
            case 3:
                cout << "Triangulo escaleno!";
                break;
        }
    } else {
        cout << "Nao eh possivel formar um triangulo com as medidas fornecidas!";
        return 1;
    }

    return 0;
}
