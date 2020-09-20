//O programa apresenta a Diagonal Secundária de uma matriz de ordem N
//N é informado pelo usuário
//por Tiago Souza, 2020
#include <stdio.h>

int main()
{
    int M[10][10];
    int N = 3; //ordem da matriz
    int i=0; //linha da matriz
    int j=0; //coluna da matriz

    printf("Digite a ordem da matriz: [entre 2 e 10]\n");
    scanf("%d", &N);

    if (N >= 2 && N <= 10)
    {
        //inicializador da matriz de ordem N
        while (i < N)
        {
            while (j < N)
            {
                printf("Valor para [%d][%d]: ", i, j);
                scanf("%d", &M[i][j]);
                j++;
            }
            j=0;
            i++;
        }
        
        //reinicialização dos valores das variáveis 
        i=0;
        j=N-1;

        //Apresentação da Diagonal Secundária com apenas um while
        while (j >= 0)
        {
            printf("%d ", M[i][j]);
            i++;
            j--;
        }

        printf("\n");
        
    }
    else
    {
        printf("Valor invalido\n");
    }
    
    return 0;
}