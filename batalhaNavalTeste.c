#include <stdio.h>

int main(){

    int tabuleiro [10][10];
    int i,j;
    int indiceTabuleiro = 1;
    int posicaoI1,posicaoI2,sentido1,sentido2;
    char posicaoJ1,posicaoJ2;
    int menu,reiniciar;
do{ 
    printf("*********************************\n");
    printf("****B A T A L H A  N A V A L ****\n");
    printf("*********************************\n");
    printf("                      //         \n");
    printf("                  ___| |_        \n");
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
    scanf("%d",&menu);
switch (menu)
{
case 1:
    //tabuleiro recebe 0 em todas posições 
    for(i=0;i < 10;i++){
        for(j=0;j < 10; j++){
            tabuleiro [i][j]= 0;
            }
      }
    
    //exibe tabuleiro
    printf("\n");
    printf("     A  B  C  D  E  F  G  H  I  J\n");
    for(i=0,indiceTabuleiro=1;i < 10;i++){    
       printf(" %.2d ",indiceTabuleiro);       
       for(j=0;j < 10; j++){           
            printf(" %d ",tabuleiro [i][j]);            
            }
          indiceTabuleiro++;
            printf("\n");
         }
        
    printf("\n");
    
        //verifica posição do numero navio 1
    printf("Em qual Numero quer posicionar Navio 1? \n");
    scanf("%d",&posicaoI1);
    if(posicaoI1 >10){
        printf("Posição invalida!\n");
    }    
    --posicaoI1;


    // verifica posição letra
    printf("Em qual Letra quer posicionar Navio 1? \n");
    scanf(" %c",&posicaoJ1);

    // posição vertical ou horizontal
    printf("Quer posicionar na vertical(1) ou na horizontal(2) ?\n");
        scanf("%d",&sentido1);

        //verifica posição da letra index navio 1
       switch (posicaoJ1){
        case 'a':
        case 'A':
             posicaoJ1 = 0;
        break;
        case 'b':
        case 'B':
             posicaoJ1 = 1;
        break;
        case 'c':
        case 'C':
           posicaoJ1 = 2;
        break;
        case 'd':
        case 'D':
           posicaoJ1 = 3;
        break;
        case 'e':
        case 'E':
           posicaoJ1 = 4;
        break;
        case 'f':
        case 'F':
           posicaoJ1 = 5;
        break;
        case 'g':
        case 'G':
           posicaoJ1 = 6;
        break;
        case 'h':
        case 'H':
           posicaoJ1 = 7;
        break;
        case 'i':
        case 'I':
           posicaoJ1 = 8;
        break;
        case 'j':
        case 'J':
           posicaoJ1 = 9;
        break;
        
    default:
    printf("Posição invalida!\n");
    break;
    } 
    
    //NAVIO 2

    //verifica posição do numero navio 2
    printf("Em qual Numero quer posicionar Navio 2? \n");
    scanf("%d",&posicaoI2);
    if(posicaoI2 >10){
        printf("Posição invalida!\n");
    }    
    --posicaoI2;


    // verifica posição letra
    printf("Em qual Letra quer posicionar Navio 2? \n");
    scanf(" %c",&posicaoJ2);

    // posição vertical ou horizontal navio 2
    printf("Quer posicionar na vertical(1) ou na horizontal(2) Navio 2 ?\n");
        scanf("%d",&sentido2);

        //verifica posição da letra index navio 2
       switch (posicaoJ2){
        case 'a':
        case 'A':
             posicaoJ2 = 0;
        break;
        case 'b':
        case 'B':
             posicaoJ2 = 1;
        break;
        case 'c':
        case 'C':
           posicaoJ2 = 2;
        break;
        case 'd':
        case 'D':
           posicaoJ2 = 3;
        break;
        case 'e':
        case 'E':
           posicaoJ2 = 4;
        break;
        case 'f':
        case 'F':
           posicaoJ2 = 5;
        break;
        case 'g':
        case 'G':
           posicaoJ2 = 6;
        break;
        case 'h':
        case 'H':
           posicaoJ2 = 7;
        break;
        case 'i':
        case 'I':
           posicaoJ2 = 8;
        break;
        case 'j':
        case 'J':
           posicaoJ2 = 9;
        break;
        
    default:
    printf("Posição invalida!\n");
    break;
    } 
    
    /*
    printf("index numero(linha) %d \n",posicaoI1);
    printf("index letra(coluna) %d \n",posicaoJ1);
    printf("sentido que vai ser %s",sentido1 == 1 ? "Vertical" : "Horizontal");
    printf("index numero(linha) %d \n",posicaoI2);
    printf("index letra(coluna) %d \n",posicaoJ2);
    printf("sentido que vai ser %s",sentido2 == 1 ? "Vertical" : "Horizontal");*/
   
    //navio 1
    if(sentido1 == 2){
    for(i = 0; i < 3; i++){
      tabuleiro[posicaoI1][posicaoJ1] = 3;
      posicaoJ1++;
      }
    }else if(sentido1 == 1){
      for(i = 0; i < 3; i++){
      tabuleiro[posicaoI1][posicaoJ1] = 3;
      posicaoI1++;
      }

    }
    //navio 2
    if(sentido2 == 2){
    for(i = 0; i < 3; i++){
      tabuleiro[posicaoI2][posicaoJ2] = 3;
      posicaoJ2++;
      }
    }else if(sentido2 == 1){
      for(i = 0; i < 3; i++){
      tabuleiro[posicaoI2][posicaoJ2] = 3;
      posicaoI2++;
      }

    }

    //exibe tabuleiro atualizado
    printf("\n");
    printf("     A  B  C  D  E  F  G  H  I  J\n");
    for(i=0,indiceTabuleiro=1;i < 10;i++){    
       printf(" %.2d ",indiceTabuleiro);       
       for(j=0;j < 10; j++){           
            printf(" %d ",tabuleiro [i][j]);            
            }
          indiceTabuleiro++;
            printf("\n");
         }


  printf("Ir para o menu? (1. Sim / 2. Não)\n");
  scanf("%d",&reiniciar);


      break;
  

   // regras
   case 2:
      printf("regras\n");
   break;

   case 3:
   printf("jogo finalizando...\n");
         break;
   default:
   break;

}



} while (reiniciar == 1);

printf("Finalizado!\n");
    return 0;
    
}