/*
    Apresenta o conteúdo de um array bidimensional e sua diagonal principal.

    O conteúdo de cada posição do array é carregado a partir da função rand().
    A seed da função rand() é o horário atual do computador.

    O carregamento do array com os números pseudoaleatórios é realizado pela função loadA().
    A apresentação do array é realizada pela função showArrayBi().
    A apresentação da diagonal principal é realizada pela função dp().

    por Tiago Souza, 2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//--------variáveis externas----------
const int N = 4;    //Ordem da matriz

//-----------protótipos------------
void loadA (int tam, int bi[][N]);
void showArrayBi (int tam, const int bi[][N]);
void dp (int tam, const int bi[][N]);

int 
main()
{
    int m[N][N];    /* Representa a matriz. */

    loadA(N, m);
    showArrayBi(N, m);
    printf("\n");
    dp(N, m);
    printf("\n");

    return 0;
}

/*
    loadA
    -----
    A função carrega o conteúdo do array bidimensional por meio da função rand().
    Os valores x para o array são tal que 0 ≤ x ≤ 20.
    Recebe o tamanho do array(ordem da matriz) e o array propriamente dito.
*/
void
loadA (int tam, int bi[][N])
{
    int i, j;

    srand(time(NULL)); /* Colocando a seed para rand() */
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            bi[i][j] = rand() % 21;
        }
    }
}

/*
    showArrayBi
    -----------
    A função faz a apresentação do array bidimensional.
    Recebe o tamanho do array(ordem da matriz) e o array propriamente dito.
*/
void
showArrayBi (int tam, const int bi[][N])
{
    int i, j;

    printf("\nOs valores da matriz:\n\n");
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("%d\t", bi[i][j]);
        }
        printf("\n");
    }
}


/*
    dp
    --
    A função faz a apresentação da diagonal principal.
    Recebe o tamanho do array(ordem da matriz) e o array propriamente dito.
*/
void
dp (int tam, const int bi[][N])
{
    int i, j;

    printf("Valores da Diagonal Principal: \n");
    for (i = 0, j = 0; i < tam ; j++, i++)
    {
        printf("%d ", bi[i][j]);
    }
    printf("\n");
}