//O programa recebe a temperatura em Fahrenheit e as converte para Celcius, e para quando recebe o código igual a 0
//O usuário informa o código da estação e a temperatura Fahrenheit
//O programa apresenta o código e a temperatura em Celcius
//by Tiago Souza 2020

#include <stdio.h>

int 
main() 
{
    int cod=1;      // código da estação
    float tempF=0.0;  //temperatura em Fahrenheit
    float tempC=0.0;  // temperatura em Celcius
    
    printf("Digite o codigo da estacao: ");
    scanf("%d", &cod);

    while (cod != 0) //código 0 indica o fim do arquivo
    {   
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &tempF);
        tempC = (tempF - 32) * 5/9;
	printf("\n");
        printf("Codigo da estacao: %d\n", cod);
        printf("Temperatura em Celcius: %.2f\n", tempC);
	printf("--------------------------------------\n");
        printf("Digite o codigo da estacao: ");
        scanf("%d", &cod);
    }

    return 0;
}






