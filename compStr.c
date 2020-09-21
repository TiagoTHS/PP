/*
    O programa recebe interativamente uma string.

    O usuário digita uma string até que essa string seja igual a "Fim".

    A função compStr() compara as strings digitadas com a palavra "Fim".  

    por Tiago Souza, 2020
*/

#include <stdio.h>

int compStr (const char s1[], const char s2[]);

int 
main()
{
    char st[50];  //string digitada pelo usuário

    do
    {
        printf("Digite uma string: ");
        scanf ("%s", st);
    } while (compStr (st, "Fim") != 0);

    return 0;
}

/*
    compStr
    -------
    Compara o conteúdo de s1 contra o de s2.

    Retorna x tal que:
    x é zero, se o contéudo de s1 é igual ao de s2;
    x > 0, se o contéudo de s1 é maior que o de s2;
    x < 0, se o contéudo de s1 é maior que o de s2;
*/
int
compStr (const char s1[], const char s2[])
{
    unsigned int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] > s2[i])
        {
            return 1;
        }
        else if (s1[i] < s2[i])
        {
            return -1;
        }
    }

    return 0;
}
