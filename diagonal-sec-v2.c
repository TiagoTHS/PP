//O programa apresenta a Diagonal Secundária de uma matriz de ordem N
//N é informado pelo usuário
//por Tiago Souza, 2020
#include <stdio.h>

int main()
{
    int M[10][10]; //matriz 10 x 10
    int N = 0; //ordem da matriz
    int i=0; //linha da matriz
    int j=0; //coluna da matriz

    printf("Digite a ordem da matriz: [entre 2 e 10]\n");
    scanf("%d", &N);

    if (N >= 2 && N <= 10)
    {
        /*inicializador da matriz de ordem N com apenas um FOR
        for (j = 0; j <= N; j++)
        {
            if (j == N)
            {
                j=0;
                i++;
                if (i == N)
                {
                    break;
                }
                
            }
            printf("Valor para [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
        */

        //inicializador da matriz de ordem N
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                printf("Valor para [%d][%d]: ", i, j);
                scanf("%d", &M[i][j]);
            }
        }

        //Apresentação da Diagonal Secundária
        printf("\n");
        printf("Valores da Diagonal Secundaria: \n");
        for (i = 0, j = N-1; j >= 0; j--, i++)
        {
            printf("%d ", M[i][j]);
        }

        printf("\n");
    }
    else
    {
        fprintf( stderr, "Valor invalido\nDigite um numero N, tal que 2 <= N <= 10\n");
    }
    
    return 0;
}