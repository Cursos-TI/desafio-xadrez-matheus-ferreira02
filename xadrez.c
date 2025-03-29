#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo: \n");
    int casasBispo = 5;
    for (casasBispo; casasBispo > 0; casasBispo--) {
    
        printf("Cima, Direita \n");
    }

    printf("============================\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre: \n");
    int casasTorre = 5;
    while (casasTorre > 0)
    {
        printf("Direita\n");
        casasTorre--;
    }

    printf("============================\n");

    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha: \n");

    int casasRainha = 8;
    do
    {
        printf("Esquerda\n");
        casasRainha--;
    } while (casasRainha > 0);

    printf("============================\n\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação do Cavalo: \n");
    int casasCavaloBaixo = 2;
    int casasCavaloEsquerda = 1;
    for(casasCavaloEsquerda; casasCavaloEsquerda > 0; casasCavaloEsquerda--) {
        while (casasCavaloBaixo > 0)
        {
            printf("Baixo\n");
            casasCavaloBaixo--;
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
