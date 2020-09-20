//O programa recebe uma string digitada pelo usuário, e apresenta essa string na forma inversa
//por Tiago Souza, 2020

#include <stdio.h>
#include <string.h>
#define MAXN 100
int 
main ()
{
    char n[MAXN]; // palavra digitada
    char c; // recebe cada caractere da string
    int j=0; // variável de apoio para formar a string
    int i=0; // variável para o laço for
    

    printf ("digite uma string\n");
    do
    {
        c = getchar();
        n[j] = c;
        j++;
    } while (c != '\n');
    

    //coloca-se um '\0' na ultima posição da string, no lugar do '\n'
    n[j-1] = '\0';
    

    for (i = strlen(n)-1; i >= 0; i--)
    {
        putchar (n[i]);
    }

    printf("\n");

    return 0;
}