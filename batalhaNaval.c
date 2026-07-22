#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tab = 1;
    int tabuleiro[10][10]={
       //0 1 2 3 4 5 6 7 8 9
  /*0*/ {0,0,0,0,0,0,0,0,0,0},
  /*1*/ {0,0,0,0,0,0,0,0,0,0},
  /*2*/ {0,0,0,0,0,0,0,0,0,0},
  /*3*/ {0,0,0,0,0,0,0,0,0,0},
  /*4*/ {0,0,0,0,0,0,0,0,0,0},
  /*5*/ {0,0,0,0,0,0,0,0,0,0},
  /*6*/ {0,0,0,0,0,0,0,0,0,0},
  /*7*/ {0,0,0,0,0,0,0,0,0,0},
  /*8*/ {0,0,0,0,0,0,0,0,0,0},
  /*9*/ {0,0,0,0,0,0,0,0,0,0}
    };
    int navio[3]= {3,3,3};

    printf("****************************\n");
    printf("**B a t a l h a  N a v a l *\n");
    printf("****************************\n");
    printf("   A B C D E F G H I J\n");
   
    for (int i = 0; i < 10; i++)
    {   
        printf(" %d %d %d %d %d %d %d %d %d %d %d \n",tab,tabuleiro[i][0],tabuleiro[i][1],tabuleiro[i][2],tabuleiro[i][3],tabuleiro[i][4],tabuleiro[i][5],tabuleiro[i][6],tabuleiro[i][7],tabuleiro[i][8],tabuleiro[i][9]);
        tab++;
    }
    tabuleiro [2][3]= 3;
    tabuleiro [2][4]= 3;
    tabuleiro [2][5]= 3;
    

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
