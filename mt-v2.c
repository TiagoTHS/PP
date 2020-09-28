#include <stdio.h>

const int MAX = 10;
const int MAXFN = 50; 

int loadA (int m[][MAX], int *M, int *N);
void transp(const int m[][MAX], int lin, int col, int mt[][MAX]);
void showA(int m[][MAX], int lin, int col);
int simetr(const int m[][MAX], int lin, int col, const int mt[][MAX]);

int main()
{
    int A[MAX][MAX];    /* Representa a matriz. */
    int AT[MAX][MAX];   /* Representa a matriz transposta. */
    int M = 0;          /* Variável para linhas da matriz. */
    int N = 0;          /* Variável para colunas da matriz. */
    int x = 0;
    int y = 0;

    x = loadA(A, &M, &N);

    if (x == 0)
    {
        fprintf(stderr, "Arquivo não foi aberto!!!");
        return 5;
    }

    printf("\n");
    printf("Valor de M: %d ", M);
    printf("Valor de N: %d", N);

    printf("\nOs valores da matriz:\n\n");
    showA(A, M, N);

    transp(A, N, M, AT);

    printf("\nOs valores da matriz transposta:\n\n"); 
    showA(AT, N, M);

    y = simetr(A, M, N, AT);
    printf("\nValor retornado pela funcao simetr(): %d\n", y);
    if (y == 1)
    {
        printf("\nMatriz Simetrica\n");
    }
    else if (y == 0)
    {
        printf("\nMatriz Nao Simetrica\n");
    }
    
    return 0;
}

int
loadA (int m[][MAX], int *M, int *N)
{
    int i, j;
    char fn[MAXFN];
    FILE *f = NULL;

    printf("Digite o nome do arquivo: ");
    scanf("%s", fn);

    f = fopen(fn, "r");

    if (f == NULL)
    {
        return 0;
    }

    fscanf(f, "%d %d", &*M, &*N);

    for(i = 0; i < *M; i++)
    {
        for(j = 0; j < *N; j++)
        {
            fscanf(f, "%d", &m[i][j]);
        }
    }

    fclose(f);

    return 1;
}

void
transp(const int m[][MAX], int lin, int col, int mt[][MAX])
{
    int i, j;

    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            mt[i][j] = m[j][i];
        }
    }
}

void
showA(int m[][MAX], int lin, int col)
{
    int i, j;

    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int
simetr(const int m[][MAX], int lin, int col, const int mt[][MAX])
{
    int i, j;

    for (i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(m[i][j] != mt[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}