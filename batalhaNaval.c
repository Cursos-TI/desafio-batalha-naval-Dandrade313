#include <stdio.h>

int main()
  {
    //Criando o a matriz do Tabuleiro do Jogo
      int  i, j,Posicao=1;
    int Tabuleiro10x10[10][10]={
      {0}
    };
    // Criando os Vetores dos navios
      int Navios[3]={3,3,3};

      for(i=0;i<3;i++){
          Tabuleiro10x10[2][3+i]=Navios[i];
          Tabuleiro10x10[5+i][3]=Navios[i];
          Tabuleiro10x10[4+i][5+i]=Navios[i];
          Tabuleiro10x10[7+i][5+i]=Navios[i];
      }
      //Area de Habilidade
          // Cone
    for (int i = 0; i < 3; i++) {
        int meio = 2; // Posição central
        int inicio = meio - i;
        int fim = meio + i;
        for (int j = inicio; j <= fim; j++) {
            if (j >= 0 && j < 5)
                Tabuleiro10x10[i+5][j] = 1;
        }
    }
      // Octaedro
for (int dx = -1; dx <= 1; dx++) {
     int centroX = 1;
     int centroY = 6;
    for (int dy = -1; dy <= 1; dy++) {
        // Desenha apenas se for o centro ou os 4 lados (ignora diagonais)
        if ((dx == 0 || dy == 0) && (centroX + dx >= 0 && centroX + dx < 10) && (centroY + dy >= 0 && centroY + dy < 10)) {
            Tabuleiro10x10[centroX + dx][centroY + dy] = 1;
        }
    }
}
      //Cruz
      int centroX = 6;
      int centroY = 7;
      int alcance = 2; // define o tamanho da cruz

// Linha horizontal
for (int j = centroY - alcance; j <= centroY + alcance; j++) {
    if (j >= 0 && j < 10)
        Tabuleiro10x10[centroX][j] = 1;
}

// Coluna vertical
for (int i = centroX - alcance; i <= centroX + alcance; i++) {
    if (i >= 0 && i < 10)
        Tabuleiro10x10[i][centroY] = 1;
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
  }
