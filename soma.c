/*
	Apresenta a soma dos números naturais entre dois números A e B, tal que A < B.
	
	por Tiago Souza.
*/
#include <stdlib.h>
#include <stdio.h>

int 
main() 
{
	int a=0; //número informado
	int b=0; //número informado
	int s=0; //guarda soma
	
	printf("Digite dois números\n");
	scanf("%d %d", &a, &b); //lê teclado (stdin)

	while (a <= b)
	{
		s = s + a;
		a = a + 1;
	}
	printf("o valor de s = %d\n", s);
	return 0;
}