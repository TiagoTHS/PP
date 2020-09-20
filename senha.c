//O programa recebe uma senha qualquer e apresenta seus caracteres de acordo com a tabela ASCII
//Ao receber a senha: 'FIM', o programa para.
//por Tiago Souza, 2020
#include <stdio.h>
#include <string.h>
#define MAXN 100
int main ()
{
    unsigned char n[MAXN]; // senha digitada
    unsigned int i=0; // variável para o laço 

    printf ("digite a sua senha: ['FIM' para encerrar]\n");
    scanf("%s", n);

    while (strcmp(n, "FIM") != 0) //compara a senha digitada com a palavra 'FIM'
    {  
        while (i < strlen(n))
        {
            printf("%d ", n[i]);
            i++;
        }
        i=0;

        printf("\n");

        printf ("digite a sua senha: ['FIM' para encerrar]\n");
        scanf("%s", n);
    }

   return 0;
}