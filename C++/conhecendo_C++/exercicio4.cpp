/*
    4) Leia a idade de um nadador e exiba sua categoria segundo as regras: 
        A(5 até 7); 
        B(8  até 10); 
        C(11 até 13); 
        D(14  até 18) e 
        E( Idade > 18)
*/

#include <iostream>

using namespace std;

int main() {

    int idade;

    cin >> idade;

    if(idade >= 5 && idade <= 7) {
        cout << "Com " << idade << " anos sua categoria eh A";
    } else if (idade >= 8 && idade <= 10) {
        cout << "Com " << idade << " anos sua categoria eh B";
    } else if(idade >= 11 && idade <= 13) {
        cout << "Com " << idade << " anos sua categoria eh C";
    } else if(idade >= 14 && idade <= 18) {
        cout << "Com " << idade << " anos sua categoria eh D";
    } else {
        cout << "Com " << idade << " anos sua categoria eh E";
    }

    return 0;
}
