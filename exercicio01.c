//Dada uma lista de vetores, imprimir inversamente

#include <stdio.h>

int main()
{
    int x, i, j;
    printf("Entre com a quantidade de numeros:\n");
    scanf("%d", &x);
    int vetor[x];
    for(i = 0; i < x; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d", &vetor[i]);
    }
    for (i = x-1; i >= 0; i--)
    {
        printf("a ordem inversa eh: %d \n", vetor[i]);
    }
    return 0;
}
