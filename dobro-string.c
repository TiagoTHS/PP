/*
    O programa apresenta o dobro do valor digitado pelo usuário.
    
    O usuário informa o valor a ser dobrado.

    Por meio da função ehNum() verifica-se se o valor 
    informado pelo usuário contém apenas algarismos,
    se for verdade é apresentado o dobro do valor,
    se não, é apresentado uma mensagem de erro.

    Apresenta o dobro do valor inserido ou a mensagem de erro.

    por Tiago Souza, 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int ehNum(const char st[]);

int 
main()
{
    char st[5];  //seq digitado pelo usuário armazenado em uma string
    int n = 0;   //string digitada transformada em um número
    
    printf("Digite um numero do conjunto dos Naturais: ");
    scanf("%s", st);

    if ( ehNum (st) == 0 )
    {
        fprintf(stderr, "A seq digitada nao contem apenas algarismos\n");
        return 5;
    }

    n = atoi(st);

    printf ("dobro = %d\n", n * 2);

    return 0;
}

/*
    ehNum
    -----
    Recebe uma string e confirma se essa é formada apenas de algarismos.

    Retorna 1 para a string formada APENAS de algarismos;
    Retorna 0 para a string que NÃO possui apenas algarismos;
    
*/
int
ehNum (const char array[])
{
    unsigned int i;

    /* Opção 1:

    for (i = 0; i < strlen(array); i++)
    {
        if (array[i] < '0' || array[i] > '9')
        {
            return 0;
        }
    }

    */

    // Opção 2:

    for (i = 0; i < strlen(array); i++)
    {
        if (isdigit (array[i]))
            continue;
        else
            return 0;
        
        /*
            if ( !isdigit (str[i]) )
                return 0;
        */
            
    }

    return 1;
}