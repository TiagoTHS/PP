//O programa recebe uma matriz A e apresenta a sua transposta, dizendo se elas são ou não simétricas
//O usuário informa o número de linhas(M) e colunas(N) da matriz A
//O usuário informa os valores inteiros da matriz A
//Como saída o programa apresenta os valores que compõem A, os valores de sua transposta
//E apresenta também uma mensagem informando se a matriz é ou não é Simétrica
//por Tiago Souza - 12011BCC001, 2020
#include <stdio.h>

int 
main()
{
    int A[10][10]; // matriz A
    int AT[10][10]; // matriz A transposta
    int M = 0; //numero de linhas da matriz
    int N = 0; //numero de colunas da matriz
    int i=0; //linha da matriz
    int j=0; //coluna da matriz
    int sim = 1; //diz se as matrizes são simétricas

    printf("Digite o valor de M (M e o numero de linhas): [entre 2 e 10]\n");
    scanf("%d", &M);

    printf("Digite o valor de N (N e o numero de colunas): [entre 2 e 10]\n");
    scanf("%d", &N);

    if (M >= 2 && M <= 10 && N >= 2 && N <= 10)
    {
        //inicializador da matriz A de ordem N
        while (i < M)
        {
            while (j < N)
            {
                printf("Valor para [%d][%d]: ", i, j);
                scanf("%d", &A[i][j]);
                j++;
            }
            j=0;
            i++;
        }

        //reinicialização das variáveis para 0
        i=0;
        j=0;

        //apresenta os valores de A
        printf("\n");
        printf("matriz A: \n");
        printf("\n");
        while (i < M)
        {
            while (j < N)
            {
                printf("%d ", A[i][j]);
                j++;
            }
            printf("\n");
            j=0;
            i++;
        }
        printf("\n");

        //reinicialização das variáveis para 0
        i=0;
        j=0;

        //inicializador da matriz AT
        while (i < N)
        {
            while (j < M)
            {
                AT[i][j] = A[j][i];
                j++;
            }
            j=0;
            i++;
        }

        //reinicialização das variáveis para 0
        i=0;
        j=0;

        //apresenta os valores de AT
        printf("\n");
        printf("matriz A Transposta: \n");
        printf("\n");
        while (i < N)
        {
            while (j < M)
            {
                printf("%d ", AT[i][j]);
                j++;
            }
            printf("\n");
            j=0;
            i++;
        }
        printf("\n");

        //reinicialização das variáveis para 0
        i=0;
        j=0;

        //confere se as matrizes são simétricas
        while (i < N)
        {
            while (j < M)
            {
                if (A[i][j] != AT[i][j])
                {
                    sim = 0;
                }
                j++;
            }
            j=0;
            i++;
        }

        if (sim)
        {
            printf("As Matrizes sao simetricas\n");
        }
        else
        {
            printf("As Matrizes nao sao simetricas\n");
        }
        
    }
    else
    {
        printf("Valor invalido\n");
        printf("Digite um numero N, tal que 2 <= N <= 10\n");
    }
    
    return 0;
}