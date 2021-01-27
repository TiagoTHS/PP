/*
    Esse programa apresenta o conteúdo de uma matriz (A) M x N pseudo-aleatória,
    a sua matriz transposta (AT) e uma mensagem indicando se ela é simétrica ou não;
    Os dados de entrada são o valor do tamanho das linhas e das colunas,
    sendo que os dados da matriz escolhidos aleatoriamente de 0 a 10 por rand() % 11;
    Os dados de saída são os valores da matriz A, da matriz transposta de A (AT) e
    uma mensagem explicitando se a matriz A é simétrica;

    Feito por :
    Felipe Canabarro Graffunder - 12011BCC038, 
    Marcus Vinícius Torres Silva - 12011BCC025, 
    Pedro Henrique Marra Araújo - 12011BCC008 e 
    Tiago da Silva e Souza Pinto- 12011BCC001 
    em 2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 10;    /* Tamanho máximo das matrizes. */
const int MIN = 2;      /* Tamanho mínimo das matrizes.  */

int 
main()
{
    int A[MAX][MAX];    /* Representa a matriz. */
    int AT[MAX][MAX];   /* Representa a matriz transposta. */
    int M = 0;          /* Variável para linhas da matriz. */
    int N = 0;          /* Variável para colunas da matriz. */
    int i = 0, j = 0;
    
    
    printf("Digite a quantidade de linhas(De 2 a 10): ");
    scanf("%d",&M);
    printf("Digite a quantidade de colunas(De 2 a 10): ");
    scanf("%d",&N);
    
    /* Condição para finalizar o programa caso as linhas ou colunas forem
       menor do que 2 ou maior do que 10. */
    
    if(M < MIN || M > MAX || N < MIN || N > MAX)
    {
        fprintf(stderr, "A quantidade de linhas e de colunas deve estar entre 2 e 10, inclusive estes.\nFim do programa.");
        return 0;
    }
    
    /* Capturando os elementos da matriz A. */  
    srand(time(NULL)); /* Colocando a seed para rand() */
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            A[i][j] = rand() % 11;
        }
    }
    
    printf("\nOs valores da matriz:\n\n");
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nOs valores da matriz transposta:\n\n"); 
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            AT[i][j] = A[j][i];
            printf("%d\t",AT[i][j]);
        }
        printf("\n");
    }
    
    /* Validando se a matriz é simetrica ou não. */  
    for (i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(A[i][j] != AT[i][j])
            {
                printf("\nMatriz Nao Simetrica");
                return 0;
            }
        }
    }
    printf("\nMatriz Simetrica");
    return 0;
}