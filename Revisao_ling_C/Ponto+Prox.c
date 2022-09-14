#include <stdio.h>
#include <math.h>

typedef struct 
{
    int x;
    int y;

} tPonto;

float Dist(tPonto p1, tPonto p2)
{
    float result;
    result = sqrt(pow((p1.x - p2.x) ,2) + pow((p1.y - p2.y) , 2));
    return result;
}

void MenorDist(float arr[], int tam, tPonto pontos[])
{
    int i , index = 0;
    float menor = arr[0];
    for ( i = 0; i < tam; i++)
    {
        if(arr[i] < menor)
        {
            menor = arr[i];
            index = i;
        }
    }
    printf("Ponto mais perto é (%d, %d)\n", pontos[index].x, pontos[index].y);
}

int main()
{
    int n, i;
    tPonto p1;
    scanf("%d %d %d", &p1.x, &p1.y, &n);
    tPonto pontos [n];
    float dists[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &pontos[i].x, &pontos[i].y);
    }
    for ( i = 0; i < n; i++)
    {
        dists[i] = Dist(p1 , pontos[i]);
    }
    MenorDist(dists, n, pontos);
    return 0;
}