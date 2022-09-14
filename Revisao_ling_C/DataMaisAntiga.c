#include <stdio.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;

} tData;

int ComptDatas(tData d1, tData d2) {
    if(d1.ano < d2.ano ) {
        return 1;
    } else if (d2.ano < d1.ano) {
        return -1;
    } else if (d1.mes < d2.mes) {
        return 1;
    } else if (d2.mes < d1.mes) {
        return -1;
    } else if (d1.dia < d2.dia) {
        return 1;
    } else if (d2.dia < d1.dia) {
        return -1;
    }

    return 0;
}

int main() {

    tData d1, d2;
    int flag = 0;

    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);

    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    flag = ComptDatas(d1, d2);

    if(flag == 0) {
        printf("Pessoas são da mesma idade\n");
    } else {
        if(flag == 1) {
            printf("Pessoa 1 é mais velha\n"); 
        } else {
            printf("Pessoa 2 é mais velha\n");
        }
    }
    
   
    return 0;
}