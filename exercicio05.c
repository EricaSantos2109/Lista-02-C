//Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. Faça
//um programa em C que calcule o produto escalar P de A por B. (Isto é, P =
//A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).

#include <stdio.h>
int main()
{
    int n[10], m[10], i, p = 0, aux=0;
    printf("Entre com os valores de n:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("Entre com os valores de m:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &m[i]);
    }
    //for(i=0; i<10; i++)
    //{
        p = (n[0] * m[0]) + (n[1] * m[1]) + (n[2] * m[3]) + (n[4] * m[4]) + (n[5] * m[5]) + (n[6] * m[6]) +(n[7] * m[7]) + (n[8] * m[8]) +(n[9] * m[9]);
    //}
    printf("%d", p);
    return 0;
}
