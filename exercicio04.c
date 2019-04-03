//Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que
//imprima todos os elementos comuns aos dois vetores.

#include <stdio.h>
int main()
{
    int A[5];
    int B[8];
    int i, x;

    for(i = 0; i < 5; i++)
        {
        scanf("%d", &A[i]);
        }
    for(i = 0; i < 8; i++)
        {
        scanf("%d", &B[i]);
        }
    for(i=0;i<5;i++)
    {
       for(x=0;x<8;x++)
       {
         if(A[i] == B[x])
            {
              printf("%d",B[x]);
         }
       }
    }
    return 0;
}
