//O programa calcula o IMC de uma pessoa
//O usuário informa nome, peso, altura
//O programa apresenta nome, peso, altura, IMC e a interpretação do IMC
//by Tiago Souza 2020

#include <stdio.h>

int 
main() 
{
    char n[50];        //nome da pessoa
    float p = 0.0;     // peso da pessoa
    float a = 0.0;     // altura da pessoa
    float imc = 0.0;   // imc

    printf("Digite o nome:\n");
    scanf("%s", n);
    printf("Digite o peso:\n");
    scanf("%f", &p);
    printf("Digite a altura:\n");
    scanf("%f", &a);

    imc = p / (a * a);

    printf("Nome: %s\n", n);
    printf("Peso: %.2f\n", p);
    printf("Altura: %.2f\n", a);
    printf("IMC = %.2f\n", imc);

    if (imc < 18.5)
    {
        printf("Abaixo do peso\n");
    }
    else if (imc < 25)
    {
        printf("Peso normal\n");
    }
    else if (imc < 30)
    {
        printf("Sobrepeso\n");
    }
    else 
    {
        printf("Obesidade\n");
    }
    
    return 0;
}