# include <stdio.h>

// Construa um programa em linguagem C que declare um arrayz�o de 12 posi��es de inteiros
// e pe�a para o usu�rio preencher todos os seus valores. A seguir o programa dever� copiar os
// dados deste arrayz�o em dois outros arrays: �array1� e �array2� que foram declarados com 12
// posi��es cada um. A l�gica de armazenamento dever� ser: o array1 recebe os valores positivos
// armazenados no arrayz�o e o array2 recebe os valores negativos do arrayz�o. Ao final o array1
// e o array2 dever�o ser impressos na tela, assim tamb�m como a quantidade de valores que cada
// um est� armazenando.

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
