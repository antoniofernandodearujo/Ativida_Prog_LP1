/*
    10) A prefeitura do Rio de Janeiro abriu uma linha de crédito para os 
    funcionários estatutários. O valor máximo da prestação não poderá 
    ultrapassar 30% do salário bruto. Fazer um algoritmo que permita 
    entrar com o salário bruto e o valor da prestação e informar se o 
    empréstimo pode ou não ser concedido.

*/

#include <iostream>

using namespace std;

bool podeEmprestimo(float salario, float prestacao) {
    float calculaEmprestimo;

    if(prestacao <= (salario * 0.30)) {
        return true;
    }
    return false;
}

int main() {
    
    float salario, prestacao;
    bool emprestimo;

    cin >> salario >> prestacao;

    emprestimo = podeEmprestimo(salario, prestacao);

    if(emprestimo) {
        cout << "Prestacao concedida!";
    } else {
        cout << "Prestacao nao concedida!";
    }

    return 0;
}
