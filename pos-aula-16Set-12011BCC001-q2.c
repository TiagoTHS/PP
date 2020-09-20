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
#include <string.h>

int ehNum(char st[]);

int 
main()
{
    char st[5];  //valor digitado pelo usuário armazenado em uma string
    int n = 0;   //string digitada transformada em um número
    
    printf("Digite o valor a ser dobrado: ");
    scanf("%s", st);

    if ( ehNum (st) == 0 )
    {
        fprintf(stderr, "O valor digitado nao contem apenas algarismos\n");
        return 0;
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
ehNum (char array[])
{
    unsigned int i, k;
    unsigned int j = 0;             //auxiliar para contar algarismos
    char alg[10] = "0123456789";    //array de algarismos

    for (i = 0; i < strlen(array); i++)
    {
        for (k = 0; k < strlen(alg); k++)
        {
            if (array[i] == alg[k])
            {
                j++;
            }
        }
    }

    if (j == strlen(array))
    {
        return 1;
    }

    return 0;
}