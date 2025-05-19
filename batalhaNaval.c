#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    //Criando o a matriz do Tabuleiro do Jogo
      int i , j,Posicao=1;
    int Tabuleiro10x10[10][10]={
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,},
      {0,0,0,0,0,0,0,0,0,0,}
    };
    // Criando os Vetores dos navios
      int Navios1[3]={3,3,3};
      int Navios2[3]={3,3,3};

      for(i=0;i<3;i++){
          Tabuleiro10x10[2][3+i]=Navios1[i];
      }
      for(i=0;i<3;i++){
          Tabuleiro10x10[5+i][3]=Navios2[i];
      }


      //Imprimindo o resultado o resultado do jogo
    printf("****Jogo Batalha Naval*****\n");
    printf("   A B C D E F G H I J");
      for (i = 0; i < 10; i++)
      {
      printf("\n %d ",Posicao);
      
      Posicao=Posicao+1;

      for(j=0;j<10;j++)
      {
          printf("%d ",Tabuleiro10x10[i][j]);
      }
      
      }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
