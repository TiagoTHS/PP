/*
    O programa recebe interativamente uma string.

    O usuário digita uma string até que essa string seja igual a "Agora chega".
    
    A função showUpper() apresenta essa string digitada em maiusculo.
    A função compStr() compara as strings digitadas.  

    por Tiago Souza, 2020
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compStr (const char s1[], const char s2[]);
void showUpper (const char s[]);

const int T = 30;   //tamanho do array

int 
main()
{
    char st[T];      //string digitada pelo usuário
    char fim[T];     //string fim para o laço

    strcpy(fim, "Agora chega");

    do
    {
        printf("Digite uma string: (Digite 'Agora chega' para terminar)\n");
        scanf ("%[^\n]", st);
        while (getchar() != '\n');
        showUpper (st);
    } while (compStr (st, fim) != 0);

    return 0;
}

/*
    compStr
    -------
    Compara o conteúdo de s1 contra o de s2.

    Retorna x tal que:
    x é zero, se o contéudo de s1 é igual ao de s2;
    x > 0, se o contéudo de s1 é maior que o de s2;
    x < 0, se o contéudo de s1 é menor que o de s2;
*/
int
compStr (const char s1[], const char s2[])
{
    unsigned int i;

    for (i = 0; s1[i] == s2[i]; i++)
    {
        if (s1[i] == '\0')
        {
            break;
        }
    }

    return s1[i] - s2[i];

    /* Outra forma:
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
    }
    return 0;
    */
}

/*
    showUpper
    ---------
    Apresenta em maiúsculo os caracteres em s[].
*/
void 
showUpper (const char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        printf("%c", toupper (s[i]));
        //putchar(toupper(s[i]));
    }

    printf("\n");
}
