#include <stdio.h>

void SomarMatrizes(int a[20][20], int b[20][20],int soma[20][20], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            soma[i][j] = a[i][j] + b[i][j];
        } 
    }
}

void ImprimirMatriz(int a[20][20], int m, int n) {
    int i ,j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if (j+1 == n) {
                printf("%d\n", a[i][j]);
            }
            else {
                printf("%d ", a[i][j]);
            }
        } 
    }
}

void PreenherMatriz(int a[20][20], int m, int n) {
    int i ,j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        } 
    }
}

int main() {   
    int m, n;
    int a[20][20], b[20][20], soma[20][20];

    scanf("%d %d", &m ,&n);

    PreenherMatriz(a, m, n);
    PreenherMatriz(b, m, n);

    SomarMatrizes(a, b, soma, m, n);
    ImprimirMatriz(soma, m, n);

    return 0;
}