#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i,j;
    char tipopeca; 
    
    printf("\n\nBem-vindo ao jogo Xadrez!\n");
    printf("Você deve escolher uma peça para movimentar.\n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");

    printf("C. Cavalo\n"); // Insersão da peça Cavalo
    
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
            printf("Direita\n"); //Imprime a direção do movimento
            printf("Superior\n"); //Imprime a direção do movimento
            i++;
            }
            break;
            
        case 'R':
        case 'r':
            i=0;
            printf("\nVocê escolheu a Rainha!\n\n");
            do{
            printf("Esquerda\n"); //Imprime a direção do movimento
            i++;
            }while(i<8);
            break;
            
        case 'C':
        case 'c':
            i=0;
            printf("\nVocê escolheu o Cavalo!\n\n");
            while(i<1){ //loop de repetição externo
            for(j=1;j<=2;j++){//loop de repetição interno
            printf("Baixo\n");//Imprime a direção do movimento
            }
			printf("Esquerda\n"); //Imprime a direção do movimento
            i++;
            }
            break;
            
        default:
            printf("\nOpção de peça inválida\n\n"); 
            break;
    }

    return 0;
}