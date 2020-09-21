#include <stdlib.h>
#include <stdio.h>
//#include <stdio_ext.h> -> utilizar para limpar stdin no LINUX

int 
main() {
    char c = 0;
    float m = 0.0;
    float a = 0.0;
    float imc = 0.0;

    do
    {   
        printf("Digite a massa(Kg):\n");
        scanf("%f", &m);
        printf("Digite a altura(metros):\n");
        scanf("%f", &a);
        while (getchar() != '\n'); // limpar stdin universal
        //setbuf(stdin, NULL); -> WINDOWS ou __fpurge(stdin); -> Linux
        
        imc = m / (a * a);

        printf("\n");

        printf("IMC = %.2f\n", imc);
        printf("\n");
        printf("Deseja continuar? ['s' - SIM]/['n' - NAO]:\n");

        c = getchar();
        while (getchar() != '\n');
        printf("\n");
        
        
    } while (c != 'n');
    
    printf("\n");
    printf("Fim do Programa\n");
    return 0;
}