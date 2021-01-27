/*
    Questão 1 - Prova 2 (02/10/2020)

    Programa que apresenta em stdout (tela do computador) o conteúdo de um arquivo.
    O usuário informa o nome desse arquivo.

    É apresentado todo o conteúdo do arquivo.
    O programa termina quando todo o conteúdo do arquivo tiver sido apresentado.

    Feito por Tiago da Silva e Souza Pinto - 12011BCC001.
*/
#include <stdio.h>

// --- var.externas ---
const int MAXFN = 50;

int 
main()
{
    char fn[MAXFN];     /* Nome do arquivo */
    char c = 0;         /* Recebe cada carectere contido em f */
    FILE *f = NULL;     

    printf("Digite o nome do arquivo que deseja apresentar: ");
    scanf("%s", fn);
    printf("\n");

    f = fopen(fn, "r");

    if (f == NULL)
    {
        fprintf(stderr, "Arquivo nao pode ser aberto!!!\n");
        return 5;
    }   

    while ( (c = fgetc (f)) != EOF )
    {
        putchar(c);
    }

    printf("\n");
    fclose(f);

    return 0;
}
