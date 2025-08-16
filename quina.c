# include <stdio.h>

// Construa um programa em linguagem C que declare um arrayzão de 12 posições de inteiros
// e peça para o usuário preencher todos os seus valores. A seguir o programa deverá copiar os
// dados deste arrayzão em dois outros arrays: “array1” e “array2” que foram declarados com 12
// posições cada um. A lógica de armazenamento deverá ser: o array1 recebe os valores positivos
// armazenados no arrayzão e o array2 recebe os valores negativos do arrayzão. Ao final o array1
// e o array2 deverão ser impressos na tela, assim também como a quantidade de valores que cada
// um está armazenando.

void main(){
    int arreyzao[12];
    int array1[12];
    int array2[12];
    int indice1 = 0, indice2 = 0;

    printf("Digite valores para o arrayzao: \n");

    for(int i = 0; i < 12; i++){
        printf("Posicao %i: ", i);
        scanf("%i", &arreyzao[i]);
    }


    for(int i = 0; i < 12; i++){
        if (arreyzao[i] > -1){
            array1[indice1] = arreyzao[i];
            indice1++;
        }
    }

    for (int i = 0; i < 12; i++){
        if (arreyzao[i] < 0){
            array2[indice2] = arreyzao[i];
            indice2++;
        }
    }

    printf("Positivos: ");
    for (int i = 0; i < indice1; i++){
        printf("%i > ", array1[i]);
    }

    printf("\nNegativos: ");
    for (int i = 0; i < indice2; i++){
        printf("%i > ", array2[i]);
    }
}
