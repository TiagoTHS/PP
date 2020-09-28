/*
    O programa apresenta o dobro do valor digitado pelo usuário.
    
    O usuário informa o valor a ser dobrado.

    Por meio da função ehNumR() verifica-se se o valor 
    informado pelo usuário é um número real,
    se for verdade é apresentado o dobro do valor,
    se não, é apresentado uma mensagem de erro.

    Apresenta o dobro do valor inserido ou a mensagem de erro.

    por Tiago Souza, 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int ehNumR(const char st[]);

int 
main()
{
    char st[5];  //seq digitado pelo usuário armazenado em uma string
    float n = 0;   //string digitada transformada em um número
    
    printf("Digite um numero do conjunto dos Reais: ");
    scanf("%s", st);

    if ( ehNumR (st) == 0 )
    {
        fprintf(stderr, "A seq digitada nao e um numero dos reais\n");
        return 5;
    }

    n = atof(st);

    printf ("dobro = %.1f\n", n * 2.0);

    return 0;
}

/*
    ehNum
    -----
    Recebe uma string e confirma se essa é formada por um número do conjunto dos Reais.

    Retorna 1 para a string formada por um número Real;
    Retorna 0 para a string que NÃO formada por um número Real;
    
*/
int
ehNumR (const char array[])
{
    unsigned int i;
    int ocorreuP = 0;   //indica que ocorreu ponto

    for (i = 0; i < strlen(array); i++)
    {

        if (array[i] == '-')
        {
            if (i == 0)
                continue;
            else
                return 0;
        }
        else if (array[i] == '.')
        {
            if (ocorreuP)
                return 0;
            else
                ocorreuP = 1;
        }
        else if (isdigit (array[i]))
        {
            continue;
        }
        else
        {
            return 0;
        }
        
    }

    return 1;
}