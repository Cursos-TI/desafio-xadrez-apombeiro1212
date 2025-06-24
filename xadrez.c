#include <stdio.h>
 
int main() {
    int i = 1;

    // Movimentação da Torre, 5 casas para a direita.

    for (int i = 0; i < 5; i++){
        printf("Direita\n"); // Imprime a direção do movimento.
       
    }

    // Movimento do Bispo, 5 casas para a direita e à cima.
    
    while (i <= 5) {
        printf("Cima Direita\n", i); // Imprime a direção do movimento.
        i++;
    }

    // Movimento da Rainha, 8 casas para à esquerda.

    do {
        printf("Esquerda\n", i);
        i++;
    } while (i <= 13);

    
    return 0;
}