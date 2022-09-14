#include <stdio.h>
#include <math.h>

typedef struct pontoNoPlano{
    int x;
    int y;
} tponto;

int distanciaPontos(tponto ponto1, tponto ponto2) {
    int d = pow((ponto1.x - ponto2.x), 2) + pow((ponto1.y - ponto2.y), 2);
    return d;
}

int main(void) {
    
    tponto ponto1, ponto2;
    int resDistanciaPontos;

    scanf("%d", &ponto1.x);
    scanf("%d", &ponto1.y);
    scanf("%d", &ponto2.x);
    scanf("%d", &ponto2.y);
    
    resDistanciaPontos = distanciaPontos(ponto1, ponto2);

    printf("%d\n", resDistanciaPontos);

    return 0;
}