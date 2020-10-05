/*
    Questão 2 - Prova 2 (02/10/2020)

    Programa que grava em um arquivo tudo o que o usuário escreve em stdin (digita no teclado).
    O usuário informa o nome do arquivo desejado para a gravação.

    O programa termina quando o usuário digita <enter> (\n)

    Feito por Tiago da Silva e Souza Pinto - 12011BCC001.
*/
#include <stdio.h>

// --- var.externas ---
const int MAXFN = 50;

int 
main()
{
    char fn[MAXFN];     /* Nome do arquivo */
    char c = 0;         /* Recebe cada carectere digitado */
    FILE *f = NULL; 

    printf("Digite o nome do arquivo onde deseja gravar: ");
    scanf("%s", fn);
    while (getchar() != '\n');  //limpa buffer

    f = fopen(fn, "w");

    if (f == NULL)
    {
        fprintf(stderr, "Arquivo nao pode ser aberto!!!\n");
        return 5;
    }

    while (c != '\n')
    {   
        c = getchar();
        fputc(c, f);
    }

    fclose(f);
    return 0;
}
