#include <stdio.h>

int main() {

    int i, moveBispo = 1, moveRainha = 1;


    // Movimento Torre em for
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento Bispo Do-While
    do
    {        
        printf("Cima, direita\n");
        moveBispo++;        

    } while (moveBispo <= 5);

    // Movimento Rainha While
    while (moveRainha <= 8) {        
        printf("Esquerda\n");
        moveRainha++;  
    }
       

    return 0;
}