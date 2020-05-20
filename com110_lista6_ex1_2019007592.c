
#include <stdio.h>

int main (){
    int vetor[10], aux; // Variaveis

// Entrada de Dados
    for(int i = 0; i < 10; i++){
        printf("Digite o numero %d do vetor: ", i);
        scanf("%d", &vetor[i]);

    }


    for(int x = 0; x< 10; x++){
        for(int y = x; y < 10; y++){   // Comparacoes

            if(vetor[x] > vetor[y]){

                aux = vetor [x];
                vetor[x] = vetor[y];
                vetor[y] = aux;

            }
        }
    }

    for(int i = 0; i< 10; i++){
        printf("\nNumero %d e: %d", i, vetor[i]);

    }

}
