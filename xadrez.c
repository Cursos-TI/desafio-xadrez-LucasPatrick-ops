#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int numJogador;
    int T = 1;
    int R = 1;
    int C1 = 2;

    //Inicio do Jogo
    printf("***Desafio Xadrez***\n");
    printf("Escolha uma peça para se mover: \n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &numJogador);
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    switch (numJogador)
    {
        case 1:
            for (int B = 1; B <= 5; B++)
            {
                printf("O Bispo se moveu %d casas para a diagonal.\n", B);
            }
        break;
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        case 2:
            while (T <= 5)
            {
                printf("A Torre se moveu %d casas para a direita.\n", T);
                T++;
            }
        break;
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda
        case 3:
            do {
                printf("A Rainha se moveu %d casas para a esquerda.\n", R);
                R++;
            } while (R <= 8);
        break;
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
        case 4:
            while (C1 <= 2){
                for(int C2 = 1; C2 <= 1; C2++){
                    printf("O Cavalo se moveu %d casas para baixo e %d casas para a esquerda\n", C1, C2);
                }
                C1++;
            }
        break;
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
