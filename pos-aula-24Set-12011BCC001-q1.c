/*
    O programa recebe uma sequencia de caracteres.

    Apresenta a quantidade de caracteres digitados.
    Apresenta a ordem inversa desses caracteres.
    Apresenta o produto entre os caracteres: (primeiro, do meio, e o último).

    por Tiago Souza, 2020
*/
#include <stdio.h>

const int MAX = 50;

int loadA (char str[]);
void inv (const char str[], int tam);
int prod (const char str[], int tam);

int 
main()
{   
    char a[MAX];        //array que armazena a sequencia
    int x = 0;          //quantidade de caracteres
    int y = 0;          //produto dos caracteres

    x = loadA(a);
    printf("\nQuantidade de caracteres digitados:\n%d\n", x);

    if (x == MAX)
    {
        fprintf(stderr, "Máximo de caracteres alcançados!!!\n");
    }

    inv(a, x);

    y = prod(a, x);
    printf("\nO valor do produto entre o primeiro, o do meio e o ultimo:\n%d\n", y);

    return 0;
}

/*
    loadA
    -----
    Carrega no array a sequencia de caracteres digitadas pelo usuário.

    Recebe o array em que deve ser armazenado a sequencia de caracteres.
    A função getchar() é utilizada para capturar os caracteres digitados pelo usuário.

    Retorna a quantidade de caracteres armazenados no array.
*/
int 
loadA (char str[])
{
    char c = 0; // recebe cada caractere da sequencia
    int j = -1; // variável de apoio para formar a sequencia

    printf("Digite a sequencia de caracteres:\n");
    do
    {
        j++;
        c = getchar();
        str[j] = c;
    } while (c != '\n' && j < MAX);

    /*
        for (j = 0; j < MAX; j++)
        {
            str[j] = getchar();
            if (str[j] == '\n')
                break;
        }
    */

    return j;
}

/*
    inv
    ---
    Realiza a apresentação inversa dos caracteres

    Recebe o array em que está a sequencia de caracteres, e o tamanho desse array.
*/
void 
inv (const char str[], int tam)
{
    int i;

    printf("\nInverso dos caracteres:\n");
    for (i = tam-1; i >= 0; i--)
    {
        putchar(str[i]);
    }
    printf("\n");
}

/*
    prod
    ----
    Realiza cálculo do produto entre o primeiro, do meio, e o último caractere.

    Recebe o array em que está a sequencia de caracteres, e o tamanho desse array.

    Retorna o valor desse produto.
*/
int 
prod (const char str[], int tam)
{
    int p = 0;      //produto entre os caracteres
    int meio = 0;   //caractere do meio

    meio = (tam - 1)/2;

    p = str[0] * str[meio] * str[tam-1];
    
    return p;
}