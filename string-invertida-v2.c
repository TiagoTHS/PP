//O programa recebe uma string digitada pelo usuário, e apresenta essa string na forma inversa
//por Tiago Souza, 2020

#include <stdio.h>
#include <string.h>
#define MAXN 100
int main ()
{
    char n[MAXN]; // palavra digitada
    int i=0; // variável para o laço for

    printf ("digite uma string \n");
    scanf("%s", n);

    for (i = strlen(n)-1; i >= 0; i--)
    {
        printf("%c", n[i]);
    }

    printf("\n");

   return 0;
}