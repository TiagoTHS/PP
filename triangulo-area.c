/*
    Apresenta a área de um triângulo.

    O usuário do programa informa a base e a altura do triângulo
    e o programa apresenta a área.

    O cálculo da área do triângulo é realizado pela função triangArea().
    
    por Autran Macedo 2020
*/

#include <stdio.h>

float triangArea (float base, float altura);

int
main ()
{
    float b = 0.0;  // base do triângulo
    float h = 0.0;  // altura do triângulo

    printf("digite a base e a altura do triângulo\n");
    scanf("%f %f", &b, &h);

    printf("área triângulo = %.2f\n", triangArea(b, h));

    return 0;
}

/* 
    triangArea
    ----------
    Retorna a área do triângulo; o calculada área é realizado 
    considerando os valores contidos em base e altura.
*/
float 
triangArea (float base, float altura)
{
    float r = 0.0;  // área do triângulo

    r = (base * altura) / 2;

    return r;
}