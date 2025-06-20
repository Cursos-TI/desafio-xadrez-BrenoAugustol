#include <stdio.h>

    int main() {
            printf("\n*****Desafio do Xadrez!*****\n");

        int i = 0;

        printf("\nMovimentação da Torre:\n");
        while (i < 5){
            printf("Direita\n");
            i++;
        }


       printf("\n_______________________________\n");


        printf("\nMovimentação do Bispo:\n");
       for(i = 0; i < 5; i++){
          printf("Para cima e à direita\n");
       }


        printf("\n_______________________________\n");


        printf("\nMovimentação da Rainha:\n");
        do{
           printf("Esquerda\n");
           i++;
       } while(i < 13);



    

    return 0;
}