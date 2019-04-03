//8. Fazer um programa em C para ler uma quantidade N de alunos. Ler a nota de cada
//um dos N alunos e calcular a média aritmética das notas. Contar quantos alunos
//estão com a nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0,
//imprimir mensagem: Não há nenhum aluno com nota acima de 5.

#include <stdio.h>
int main()
{
  int x[1000];
  int media[1000], nota1[1000], nota2[1000], nota3[1000], alunos, i, cont;
  cont = 0;
  printf("Entre com a quantidade de alunos:\n");
  scanf("%d",&alunos);
  for(i = 0; i<alunos; i++)
  {
      printf("Entre com a nota 1 do aluno:\n");
      scanf("%d", &nota1[i]);
      printf("Entre com a nota 2 do aluno:\n");
      scanf("%d", &nota2[i]);
      printf("Entre com a nota 3 do aluno:\n");
      scanf("%d", &nota3[i]);
      media[i]=(nota1[i]+nota2[i]+nota3[i])/3;
  }
  for(i = 0; i < alunos; i++)
  {
      if(media[i] > 5)
      {
          cont = cont + 1;
      }
  }
  if(cont == 0)
      {
        printf("Nao tem nenhum aluno com media acima de 5\n");
      }
    else{
        printf("Teve %d alunos com media acima de 5\n", cont);
    }
    return 0;
}

