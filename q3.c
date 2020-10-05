/*
    Questão 3 - Prova 2 (02/10/2020)

    O programa apresenta em stdout sequências de caracteres concatenadas pelo caractere asterisco (*).
    As sequências estão contidas em um arquivo;
    O usuário informa o nome desse arquivo.

    É apresentada as sequências concatenadas por asterisco (*).
    O programa termina quando todas as linhas do arquivo tiverem sido apresentadas.

    Feito por Tiago da Silva e Souza Pinto - 12011BCC001.
*/
#include <stdio.h>

// --- var.externas ---
const int MAXFN = 50;

int 
main()
{
    char fn[MAXFN];     /* Nome do arquivo */
    char c = 0;         /* Recebe cada carectere das sequencias */
    FILE *f = NULL;

    printf("Digite o nome do arquivo que contem as sequencias: ");
    scanf("%s", fn);
    printf("\n");

    f = fopen(fn, "r");

    if (f == NULL)
    {
        fprintf(stderr, "Arquivo nao pode ser aberto!!!\n");
        return 5;
    }

    while (fscanf(f,"%c", &c) != EOF)
    {   
        if (c == 32)    //32 é o espaço em ACII
        {
            printf("*");
        }
        else
        {
            putchar(c);
        }
    }

    printf("\n");
    fclose(f);

    return 0;
}
