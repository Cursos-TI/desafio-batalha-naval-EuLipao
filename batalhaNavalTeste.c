#include <stdio.h>

int main(){
    int tabuleiro [10][10];
    int contagem = 1;
    
    printf("****************************\n");
    printf("**B a t a l h a  N a v a l *\n");
    printf("****************************\n");

    //Tabuleiro
    for ( int i = 0; i < 10; i++)
    {   for (int j = 0; j < 10; j++){
         tabuleiro [i][j] = 0;
        }
    }

    printf("   A B C D E F G H I J\n");
    for ( int i = 0 ; i < 10; i++)
    {      
        printf("%.2d %d %d %d %d %d %d %d %d %d %d\n",
        contagem,
        tabuleiro [i][0],
        tabuleiro [i][1],
        tabuleiro [i][2],
        tabuleiro [i][3],
        tabuleiro [i][4],
        tabuleiro [i][5],
        tabuleiro [i][6],
        tabuleiro [i][7],
        tabuleiro [i][8],
        tabuleiro [i][9]);
        contagem++;
    }

    tabuleiro [2][4] = 3;
    tabuleiro [2][5] = 3;
    tabuleiro [2][6] = 3;

    printf("   A B C D E F G H I J\n");
    for ( int i = 0 ; i < 10; i++)
    {      
        printf("%.2d %d %d %d %d %d %d %d %d %d %d\n",
        contagem,
        tabuleiro [i][0],
        tabuleiro [i][1],
        tabuleiro [i][2],
        tabuleiro [i][3],
        tabuleiro [i][4],
        tabuleiro [i][5],
        tabuleiro [i][6],
        tabuleiro [i][7],
        tabuleiro [i][8],
        tabuleiro [i][9]);
        contagem++;
    }


return 0;

}