#include <stdio.h>

#define TAM_MAX 10

int Esparsa(int a[TAM_MAX][TAM_MAX], int m, int n) {
    int prct, qntZero = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == 0) {
                qntZero++;
            }
        }
    }
    
    prct = ((qntZero*100)/(m*n));
   
    if (prct >= 70) {
        return 1;
    } else {
        return 0;
    }
}

int main() {   
    int m, n;
    scanf("%d %d", &m, &n);

    int matriz [TAM_MAX][TAM_MAX];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    if(Esparsa(matriz, m, n)) {
        puts("A matriz é esparsa");
    } else {
        puts("A matriz não é esparsa");
    }
    
    return 0;
}