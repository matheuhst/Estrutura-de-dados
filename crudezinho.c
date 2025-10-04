#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main()
{
  struct cachorro
  {
      char raca[30];
      char porte[40];
      int esperteza;
      char cor[30];
  };

  typedef struct cachorro Cachorro;

  Cachorro matilha[MAX];
  int quantos = 0;
  char opcao;
  do
  {
      system("cls");
      printf("\nCRUD de Cachorros");
      printf("\nI - Incluir");
      printf("\nC - Consultar");
      printf("\nP - imPrimir");
      printf("\nA - Alterar");
      printf("\nD - Deletar");
      printf("\nS - Sair");

      fflush(stdin);
      printf("\nDigite sua opcao: ");
      opcao = getchar();

      switch (toupper(opcao))
      {
        case 'I': ///inclusao
        {
          printf("\nInclusao de Cachorro");
          if(quantos == MAX) //não tem mais espaço
          {
             printf("\nImpossivel inserir. Tah cheio");
          }
          else
          {
             fflush(stdin);
             printf("\nDigite a raca.....: ");
             gets(matilha[quantos].raca);

             fflush(stdin);
             printf("\nDigite o porte....: ");
             gets(matilha[quantos].porte);

             fflush(stdin);
             printf("\nDigite a esperteza: ");
             scanf("%i",&matilha[quantos].esperteza);

             fflush(stdin);
             printf("\nDigite a cor......: ");
             gets(matilha[quantos].cor);

             quantos++;
          }
          break;
        }
        case 'C': ///consulta
        {
          printf("\nConsulta de Cachorro");
          if(quantos == 0)
          {
              printf("\nImpossivel consultar. Cadastro VAZIO.");
          }
          else
          {
            Cachorro cao;
            fflush(stdin);
            printf("\nDigite a raca.....: ");
            gets(cao.raca);
            fflush(stdin);
            printf("\nDigite o porte....: ");
            gets(cao.porte);
            fflush(stdin);
            printf("\nDigite a esperteza: ");
            scanf("%i", &cao.esperteza);
            fflush(stdin);
            printf("\nDigite a cor......: ");
            gets(cao.cor);
            int indice;
            int achou = 0; ///falso que achou
            for(indice = 0; indice < quantos; indice++)
            {
                if((strcmp(cao.raca, matilha[indice].raca) == 0) &&
                   (strcmp(cao.porte, matilha[indice].porte) == 0) &&
                   (strcmp(cao.cor, matilha[indice].cor) == 0) &&
                   (strcmp(cao.esperteza, matilha[indice].esperteza) == 0))
                {
                    achou++;
                }
            }

            if(achou > 0)
            {
                printf("\nQuantidade encontrada: %i cachorros", achou);
            }
            else
            {
                printf("\nCachorro NAO encontrado");
            }
          }
          break;
        }

        case 'P':
        {
            if (quantos == 0){
                printf("Nao tem como imprimir.");
            }
            else {
                int indice;
                for(indice = 0; indice < quantos; indice++){
                    printf("\nCachorro %i: ", indice);
                    printf("\nRaca: %s", matilha[indice].raca);
                    printf("\nCor: %s", matilha[indice].cor);
                    printf("\nPorte: %s", matilha[indice].porte);
                    printf("\nEsperteza: %i", matilha[indice].esperteza);
                }
            }
        }

        case 'D':   /// Deleção.
        {
            if (quantos == 0){
                printf("Nao ha como fazer a deleção sem cachorros.");
            }
            else {
                Cachorro cao;
                fflush(stdin);
                printf("\nDigite a raca.....: ");
                gets(cao.raca);
                fflush(stdin);
                printf("\nDigite o porte....: ");
                gets(cao.porte);
                fflush(stdin);
                printf("\nDigite a esperteza: ");
                scanf("%i", &cao.esperteza);
                fflush(stdin);
                printf("\nDigite a cor......: ");
                gets(cao.cor);
                int indice;
                int achou = 0;
                int ondeAchou = -1;

            for(indice = 0; indice < quantos; indice++)
            {
                if((strcmp(cao.raca, matilha[indice].raca) == 0) &&
                   (strcmp(cao.porte, matilha[indice].porte) == 0) &&
                   (strcmp(cao.cor, matilha[indice].cor) == 0) &&
                   (strcmp(cao.esperteza, matilha[indice].esperteza) == 0))
                {
                    ondeAchou = indice;
                {
                char resposta = 'N';
                fflush(stdin);
                printf("\nAchei esse, vai deletar? [S/N] ");
                scanf("%s", toupper(resposta));
                if (resposta == 'S')
                {
                    printf("\nDeletando...");
                    for (int i = ondeAchou; i < quantos; i++)
                    {
                        matilha[i] = matilha[i + 1];
                    }
                    quantos--;

                }

                }
                }
            }
        }


        case 'S': ///sair
        {
          printf("\nAdios....");
          break;
        }
        default:
        {
           printf("\nOpcao invalida");
        }
      }
      printf("\n\n");
      system("pause");
  }
  } while(toupper(opcao) != 'S');
}

