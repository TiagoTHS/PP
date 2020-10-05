/*
    Questão 4 - Prova 2 (02/10/2020)

    Programa que apresenta o conteúdo de uma matriz N×N e dados sobre essa matriz.

    A matriz é de números inteiros e seus valores estão armazenados em um arquivo em disco.
    O usuário informa o nome desse arquivo.
    A ordem N da matriz será 2 ≤ N ≤ 10.

    Após a apresentação da matriz, o programa interage com o usuário.
    O programa apresenta opções para o usuário: DP, DS, TotalLinha, Sair.

    Feito por Tiago da Silva e Souza Pinto - 12011BCC001.
*/
#include <stdio.h>

// --- var.externas ---
const int MAX = 10;     //Ordem máxima da matriz
const int MIN = 2;      //Ordem mínima da matriz
const int MAXFN = 50;   // tamanho máximo do nome do arquivo

// --- protótipos ---
void dp (int tam, const int bi[][MAX]);
void ds (int tam, const int bi[][MAX]);
int tl (int tam, const int bi[][MAX], int x);

int 
main()
{
    int m[MAX][MAX];    /* Representa a matriz. */
    int N = 0;          /* Ordem da matriz */
    int r = 0;          /* Resposta para as opções */
    int x = 0;          /* Linha escolhida pelo usuário */
    int s = 0;          /* Soma dos valores da linha escolhida */
    int i, j;

    char fn[MAXFN];     /* Nome do arquivo */
    FILE *f = NULL;

    printf("Digite o nome do arquivo que contem a ordem e valores da matriz: ");
    scanf("%s", fn);

    f = fopen(fn, "r");
    if (f == NULL)
    {
        fprintf(stderr, "Arquivo nao pode ser aberto!!!\n");
        return 5;
    }

    /* Carrega a ordem da matriz (primeira sequencia de algarismos do arquivo) */
    fscanf(f, "%d", &N);
    if(N > MAX || N < MIN)
    {
        fprintf(stderr, "A quantidade de linhas e de colunas deve estar entre 2 e 10, inclusive estes.\nFim do programa.\n");
        return 7;
    }

    /* Carrega os valores de cada posição da matriz */
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            fscanf(f, "%d", &m[i][j]);
        }
    }   

    fclose(f);

    /* Apresenta os valores contidos na matriz */
    printf("\nOs valores da matriz:\n\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    /* Etapa de interação com o usuário*/
    while (1 == 1)  // loop while infinito, pois para apenas quando a opção for "sair"
    {
        printf("\nEscolha uma das opcoes abaixo: [De 1 a 4]\n\n");
        printf("1 - DP (Apresenta a diagonal principal)\n");
        printf("2 - DS (Apresenta a diagonal secundaria)\n");
        printf("3 - TotalLinha (Apresenta a soma dos valores contidos em uma linha da matriz)\n");
        printf("4 - Sair\n");
        printf("\n");

        scanf("%d", &r);

        if (r == 1)
        {
            dp(N, m);
        }
        else if (r == 2)
        {
            ds(N, m);
        }
        else if (r == 3)
        {   
            printf("Digite qual linha quer somar: ");
            scanf("%d", &x);
            s = tl(N, m, x);
            printf("---------------------------------\n");
            printf("O soma dos valores da linha %d e = %d\n", x, s);
            printf("---------------------------------\n");
        }
        else if (r == 4)
        {
            break;
        }
        else
        {   
            printf("---------------------------------\n");
            printf("!!!!Digite uma opcao valida!!!!\n");
            printf("---------------------------------\n");
        }
        
    }

    return 0;
}


/*
    dp
    --
    A função faz a apresentação da diagonal principal.
    Recebe o tamanho do array(ordem da matriz) e o array propriamente dito.
*/
void
dp (int tam, const int bi[][MAX])
{
    int i, j;

    printf("---------------------------------\n");
    printf("Valores da Diagonal Principal: \n");
    for (i = 0, j = 0; i < tam ; j++, i++)
    {
        printf("%d ", bi[i][j]);
    }
    printf("\n");
    printf("---------------------------------\n");
}

/*
    ds
    --
    A função faz a apresentação da diagonal secundária.
    Recebe o tamanho do array(ordem da matriz) e o array propriamente dito.
*/
void
ds (int tam, const int bi[][MAX])
{
    int i, j;

    printf("---------------------------------\n");
    printf("Valores da Diagonal Secundaria: \n");
    for (i = 0, j = tam-1; j >= 0; j--, i++)
    {
        printf("%d ", bi[i][j]);
    }
    printf("\n");
    printf("---------------------------------\n");
}

/*
    tl
    --
    A função apresenta a soma dos valores contidos em uma linha da matriz.
    Recebe o tamanho do array(ordem da matriz), o array propriamente dito e o número X correspondente à linha de interesse.
    
    Retorna a soma dos valores contidos na linha X da matriz.
*/
int 
tl (int tam, const int bi[][MAX], int x)
{   
    int s = 0;
    int i;

    for (i = 0; i < tam; i++)
    {
        s = s + bi[x-1][i];
    }

    return s;
}