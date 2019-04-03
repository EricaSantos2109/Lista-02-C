//Dadas duas seqüências com n números inteiros ent
//números inteiros de n algarismos, calcular a seqüência de números que representa a
//soma dos dois inteiros.

#include<stdio.h>
int main(){
    int m, n, i, v, v1[1000], v2[1000], soma[1000];
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite os numeros da primeira sequencia \n");
    for(i = 1; i<= n; i++)
    {
        scanf("%d", &v1[i]);
    }
    printf("Digite os numeros da segunda sequencia \n +");
    for(i = 1; i<= n; i++)
    {
        scanf("%d", &v2[i]);
    }
    v = 0;
    for(i = n; i > 0; i--)
    {
        m = v1[i] + v2[i] + v;
        soma[i] = m % 10;
        v = m / 10;
    }
    soma[0] = v;
    for(i = 0; i<= n; i++)
    {
        printf("%d", soma[i]);
    }
    return 0;
}
