#include <stdio.h>

int main() {

    int i, moveCavalo, moveBispo = 1, moveRainha = 1;


    // Movimento Torre em for
    printf("Movimentacao Torre\n");
    printf("\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento Bispo
    printf("Movimentacao Bispo\n");
    printf("\n");

    do
    {        
        printf("Cima, direita\n");
        
        moveBispo++;        

    } while (moveBispo <= 5);
    printf("\n");

    // Movimento rainha
    printf("Movimentacao Rainha\n");
    printf("\n");

    while (moveRainha <= 8) {        
        printf("Esquerda\n");
        
        moveRainha++;  
    }
    printf("\n");   


    // Movimento Cavalo   

    printf("Movimentacao Cavalo\n");
    printf("\n");    

    for (int j = 0; j < 1; j++)
    {
        int k = 0;

        do
        {
            printf("Baixo\n");
            k++;            
        } while (k < 2 );

        printf ("Esquerda");        
               
    }

    return 0;
}