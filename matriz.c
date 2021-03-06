//Programa que indica se uma matriz é ou não "identidade"
//por Tiago Souza, 2020
#include <stdio.h>

int main()
{
    int M[10][10];
    int N = 3; //ordem da matriz
    int i=0; //linha da matriz
    int j=0; //coluna da matriz
    int count_diag = 0; //contador de 1 na diagonal principal 
    int count_rest = 0; //contador de 0 para as demais posições

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

        //reinicialização das variáveis para 0
        i=0;
        j=0;

        //contagem de de 1 na diagonal principal e 0 para as demais posições
        while (i < N)
        {
            while (j < N)
            {
                if (i==j && M[i][j]==1)
                {
                    count_diag++; 
                }
                else if (i!=j && M[i][j]==0)
                {
                    count_rest++; 
                }

                j++;
            }
            j=0;
            i++;
        }

        //reinicialização das variáveis para 0
        i=0;
        j=0;

        //apresenta os valores de M
        printf("\n");
        printf("matriz M: \n");
        printf("\n");
        while (i < N)
        {
            while (j < N)
            {
                printf("%d ", M[i][j]);
                j++;
            }
            printf("\n");
            j=0;
            i++;
        }
        printf("\n");
        
        //analise das contagens para estabelecer se é ou não matriz identidade
        if (count_diag == N && count_rest == ((N*N)-N))
        {
            printf("a matriz e identidade\n");
        }
        else
        {
            printf("a matriz NAO e identidade\n");
        }
        
        
    }
    else
    {
        printf("Valor invalido\n");
        printf("Digite um número N, tal que 2 <= N <= 10\n");
    }
    
    return 0;
}