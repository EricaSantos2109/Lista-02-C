//Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e
//versa. Escreva ao final o vetor obtido

#include <stdio.h>
int main()
{
    int v[8], i, x, y;
    for(i = 0; i < 8; i++)
    {
        scanf("%d", &v[i]);

    }
    for(i = 0; i < 4; i++)
    {
        x=v[i];
        v[i]=v[4+i];
        v[4+i]=x;
    }
    for(i = 0; i < 8; i++)
    {
        printf("Posicoes trocadas: %d\n", v[i]);
    }
    return 0;
}
