//O programa recebe uma senha qualquer e apresenta seus caracteres de acordo com a tabela ASCII
//Ao receber a senha: 'FIM', o programa para.
//por Tiago Souza, 2020
#include <stdio.h>
#include <string.h>
const int MAXN = 100;
int 
main ()
{
    unsigned char n[MAXN]; // senha digitada
    unsigned int i=0; // variável para o laço 

    do
    {
        printf ("digite a sua senha: ['FIM' para encerrar]\n");
        scanf("%s", n);
        for (i=0; i < strlen(n); i++)
        {
            printf("%d ", n[i]);
        }
        printf("\n");
        
    } while (strcmp(n, "FIM") != 0);

    return 0;
}