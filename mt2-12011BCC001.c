/*
    Esse programa apresenta o conteúdo de uma matriz (A) M x N contida em um arquivo,
    a sua matriz transposta (AT) e uma mensagem indicando se ela é simétrica ou não;
    Os dados de entrada são o valor do tamanho das linhas e das colunas,
    e os valores de cada posição da matriz bidimensional;
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

// --- var.externas ---
const int MAX = 10;     // tamanho máximo de linhas e colunas
const int MAXFN = 50;   // tamanho máximo do nome do arquivo

// --- protótipos ---
int loadA (int m[][MAX], int *M, int *N);
void transp(const int m[][MAX], int lin, int col, int mt[][MAX]);
void showA(int m[][MAX], int lin, int col);
int simetr(const int m[][MAX], int lin, int col, const int mt[][MAX]);

int main()
{
    int A[MAX][MAX];    /* Representa a matriz. */
    int AT[MAX][MAX];   /* Representa a matriz transposta. */
    int M = 0;          /* Variável para linhas da matriz A. */
    int N = 0;          /* Variável para colunas da matriz A. */
    int x = 0;          /* Recebe o retorno de loadA(). */
    int y = 0;          /* Recebe o retorno de simetr(). */

    x = loadA(A, &M, &N);

    if (x == 0)
    {
        fprintf(stderr, "Arquivo nao pode ser aberto!!!\n");
        return 5;
    }

    printf("\n");

    printf("\nOs valores da matriz:\n\n");
    showA(A, M, N);

    transp(A, N, M, AT);

    printf("\nOs valores da matriz transposta:\n\n"); 
    showA(AT, N, M);

    y = simetr(A, M, N, AT);
    
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

/*
    loadA
    -----
    Função que carrega as posiçõesde A com osdados do arquivo, a partirda segunda linha.
    Recebe o array onde ficará a matriz, o número de linhas e de colunas.

    Retorna 1, se o arquivo foi aberto com sucesso; 
    Retorna 0, caso contrário.
*/
int
loadA (int m[][MAX], int *M, int *N)
{
    int i, j;
    char fn[MAXFN];     //nome do arquivo
    FILE *f = NULL;

    printf("Digite o nome do arquivo: ");
    scanf("%s", fn);

    f = fopen(fn, "r");

    if (f == NULL)
    {
        return 0;
    }

    fscanf(f, "%d %d", M, N);

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

/*
    transp
    ------
    Função que carrega a matriz AT(transposta de A)
    Recebe a matriz A, o número de linhas e de colunas, e o array onde ficará AT.
*/
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

/*
    showA
    -----
    Função que apresenta o conteúdo de uma matriz.
    Recebe a matriz que quer apresentar, o número de linhas e de colunas.
*/
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

/*
    simetr
    ------
    Função que detecta se AT é simétrica.
    Recebe a matriz A, o número de linhas e de colunas, e a matriz AT.

    Retorna 1, se a matriz transposta for simétrica.
*/
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