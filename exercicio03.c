//Leia um vetor de 10 posi��es e em seguida um valor X qualquer. Seu programa
//devera fazer uma busca do valor de X no vetor lido e informar a posi��o em que foi
//encontrado ou se n�o foi encontrado.

#include <stdio.h>
int main()
{
    int v[10], x, i, aqui, p;
    for(i = 0; i < 10; i++)
    {
        printf("Entre com um valor:\n");
        scanf("%d", &v[i]);
    }
    printf("Entre com um valor X:\n");
    scanf("%d", &x);
    for(i = 0; i<10; i++)
    {
        if(v[i] == x)
        {
            aqui = 1;
            p = i;
            break;
        }else{
            aqui = 0;
        }
    }
    if(aqui==1)
        {
        printf("O valor de x no vetor lido est� na posicao %d\n", p);
        }
    else{
        printf("Nao foi encontrado\n");
        }
    return 0;
}
