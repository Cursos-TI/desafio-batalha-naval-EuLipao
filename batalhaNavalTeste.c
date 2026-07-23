#include <stdio.h>

int main(){

    int tabuleiro [10][10];
    int i,j;
    int indiceTabuleiro = 1;
    int posicaoI,sentido;
    char posicaoJ;
    //tabuleiro recebe 0 em todas posições 
    for(i=0;i < 10;i++){
        for(j=0;j < 10; j++){
            tabuleiro [i][j]= 0;
            }
    printf("\n");
    }
    
    printf("*********************************\n");
    printf("****B A T A L H A  N A V A L ****\n");
    printf("*********************************\n");
    printf("                  _______        \n");
    printf("            ______|_____|        \n");
    printf("     _______|___________|_____   \n");
    printf("    |   o       o       o   /    \n");
    printf("~~~~|______________________/~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    // fazer menu 1 jogar, 2 instruções, 3 sair
    printf("\n");
    printf("* 1. Jogar "); 
    printf("2. Instruções ");
    printf("3. Sair *");
    printf("\n");
    
    //exibe tabuleiro
    printf("\n");
    printf("     A  B  C  D  E  F  G  H  I  J\n");
    for(i=0;i < 10;i++){    
       printf(" %.2d ",indiceTabuleiro);       
       for(j=0;j < 10; j++){           
            printf(" %d ",tabuleiro [i][j]);            
            }
          indiceTabuleiro++;
            printf("\n");
         }
        
    printf("\n");
    
    //posição numero
    //verifica posição do numero
    printf("Em qual Numero quer posicionar 1 Navio? \n");
    scanf("%d",&posicaoI);
    if(posicaoI >10){
        printf("Posição invalida!\n");
    }

    // posição letra
    printf("Em qual Letra quer posicionar 1 Navio? \n");
    scanf(" %c",&posicaoJ);
    // posição vertical ou horizontal
    printf("Quer posicionar na vertical(1) ou na horizontal(2) ?\n");
        scanf("%d",&sentido);

        //verifica posição da letra
       switch (posicaoJ){
        case 'a':
        case 'A':
             posicaoJ = 0;
        break;
        case 'b':
        case 'B':
             posicaoJ = 1;
        break;
        case 'c':
        case 'C':
           posicaoJ = 2;
        break;
        case 'd':
        case 'D':
           posicaoJ = 3;
        break;
        case 'e':
        case 'E':
           posicaoJ = 4;
        break;
        case 'f':
        case 'F':
           posicaoJ = 5;
        break;
        case 'g':
        case 'G':
           posicaoJ = 6;
        break;
        case 'h':
        case 'H':
           posicaoJ = 7;
        break;
        case 'i':
        case 'I':
           posicaoJ = 8;
        break;
        case 'j':
        case 'J':
           posicaoJ = 9;
        break;
        
    default:
    printf("Posição invalida!\n");
    break;
    } 
    
    printf("index numero(linha) %d \n",--posicaoI);
    printf("index letra(coluna) %d \n",posicaoJ);
    printf("sentido que vai ser %s",sentido == 1 ? "Vertical" : "Horizontal");
    
    return 0;
    
}