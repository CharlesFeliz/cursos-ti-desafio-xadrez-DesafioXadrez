#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int i;
    char tipopeca; 
    
    printf("\n\nBem-vindo ao jogo Xadrez!\n");
    printf("Você deve escolher um número peça para movimentar.\n");//Imprime imprime um menu de escolha de uma peça
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    
    printf("Escolha a comparação: ");
    scanf("%c",&tipopeca);  
    
    switch(tipopeca)
    {
        case 'T':
        case 't':
            printf("\nVocê escolheu a Torre!\n");
            // Mover a torre 5 casas para a direita
            for(i=0;i<5;i++){
            printf("Direita\n");//Imprime a direção do movimento
            }
            break;
            
        case 'B':
        case 'b':
            printf("\nVocê escolheu o Bispo!\n\n");
            i=0;
            while(i<5){
            printf("Direita\n");//Imprime a direção do movimento
            printf("Superior\n");//Imprime a direção do movimento
            i++;
            }
            break;
            
        case 'R':
        case 'r':
            i=0;
            printf("\nVocê escolheu a Rainha!\n\n");
            do{
            printf("Esquerda\n");//Imprime a direção do movimento
            i++;
            }while(i<8);
            break;
        default:
            printf("\nOpção de peça inválida\n\n");
            break;
    }

    return 0;
}