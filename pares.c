/*
	Apresenta os N primeiros números pares.

	N é informado pelo usuário.

	por Tiago Souza.
*/
#include <stdlib.h>
#include <stdio.h>

int 
main() 
{
	int n=0; //número informado
	int i = 0;
	
	printf("Digite um numero maior que 0:\n");
	scanf("%d", &n);

    /*
    for (i = 0; n > 0; i+=2)
    {
        printf("%d ", i);
        n = n - 1;
    }
    */

	while (n > 0)
	{
		printf("%d ", i);
		i = i + 2;
		n = n - 1;
	}
	return 0;
}