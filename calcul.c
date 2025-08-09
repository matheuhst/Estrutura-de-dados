#include<stdio.h>

void main()
{   
    // Declaração de variáveis
    char verificacao = "s";
    float num1, num2, resultado;
    
    // Entrada de dados
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);

        if (num2 == 0)
        {
            printf("Não se pode dividir um numero por 0");
        }

        else
        {
            // Processamento de dados
            resultado = num1 / num2;
            
            // Saída do resultado
            printf("O resultado da divisão é: %.2f", resultado);

            fflush(stdin); //Limpa buffer de teclado.
            
            // Verifica se usuário quer continuar.
            printf("\nDigite 1 para continuar > ");
            verificacao = tolower(getchar());
        }
    }
    while (verificacao == "s");
}
