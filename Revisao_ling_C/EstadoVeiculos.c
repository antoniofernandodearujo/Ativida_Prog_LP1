#include <stdio.h>

#define MAX_CARACTERES 100

typedef struct Veiculo{
    char modelo[MAX_CARACTERES];
    char marca[MAX_CARACTERES];
    int ano;
    float preco;

} tVeiculo;

int main() {

    tVeiculo c1, c2;
    scanf("%s %s %d %f%*c", c1.modelo, c1.marca, &c1.ano, &c1.preco);
    scanf("%s %s %d %f%*c", c2.modelo, c2.marca, &c2.ano, &c2.preco);

    if(c1.ano < c2.ano) {
        printf("%s %s", c1.marca, c1.modelo);
    }
    else if(c2.ano < c1.ano) {
        printf("%s %s", c2.marca, c2.modelo);
    }
    else {
        if(c1.preco < c2.preco) {   
            printf("%s %s",c1.marca, c1.modelo);
        }
        else {
            printf("%s %s",c2.marca, c2.modelo);
        }   
    }

    return 0; 
}