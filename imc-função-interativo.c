/*
    O programa apresenta o IMC e a sua interpretação
    para determinado peso e altura.
    
    O usuário informa o peso e a altura,
    por meio da função imc() é calculado o IMC do usuário.

    O programa é interativo e termina quando o usuário digita N.

    O IMC é apresentado, e
    por meio da função interpretaIMC() é apresentado a interpretação do IMC

    por Tiago Souza, 2020
*/

#include <stdio.h>

float imc(float peso, float altura);
void interpretaIMC (float resultado);

int 
main() {
    float p = 0.0;  //peso
    float a = 0.0;  //altura
    float r = 0.0;  //valor do imc
    char s = 0;     //resposta para continuação

    do
    {
        printf ("digite o peso (em Kg) e a altura (em metros)\n");
        scanf ("%f %f", &p, &a);
        while (getchar() != '\n');

        r = imc (p, a);
        printf("IMC = %.2f\n", r);
        interpretaIMC (r);

        printf("Deseja continuar? (s/n): ");
        s = getchar();
        while (getchar() != '\n');

    } while (s != 'n');

    return 0;
}

/*
    imc
    ---
    Retorna o valor do IMC;
    O cálculo do IMC é feito a partir dos valores de peso(Kg) e altura(m).
*/
float
imc(float peso, float altura)
{
    return peso/(altura * altura);
}

/*
    interpretaIMC
    -------------
    Apresenta a interpretação do IMC.
    Tem como base a tabela utilizada em exercícios anteriores
*/
void
interpretaIMC (float resultado)
{
    if (resultado < 18.5)
    {
        printf("Abaixo do peso\n");
    }
    else if (resultado < 25)
    {
        printf("Peso normal\n");
    }
    else if (resultado < 30)
    {
        printf("Sobrepeso\n");
    }
    else if (resultado < 35)
    {
        printf("Obesidade grau 1\n");
    }
    else if (resultado < 40)
    {
        printf("Obesidade grau 2\n");
    }
    else
    {
        printf("Obesidade grau 3\n");
    }
}