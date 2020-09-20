//O programa recebe um nome e apresenta apenas as suas iniciais
//por Tiago Souza, 2020
#include <stdio.h>
#include <string.h>
#define MAXN 100
int main ()
{
    char n[MAXN]; // palavra digitada
    unsigned int i=0; // variável para o laço 

    printf ("digite um nome\n");
    scanf("%[^\n]", n);
        
    printf("%c", n[0]); // apresenta a primeira inicial
    while (i < strlen(n))
    {
        if (n[i] == 32) // 32 é (space) na tabela ASCII
        {
            printf("%c", n[i+1]);
        }
        i++;
    }

    printf("\n");

   return 0;
}

