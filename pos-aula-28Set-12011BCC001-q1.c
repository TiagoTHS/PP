/*
    Apresenta o Índice de Massa Corporal (IMC),
    correspondente ao peso e altura das pessoas contidas em um arquivo.

    O usuário informa o nome do arquivo que contém as informações.

    É apresentado o IMC, a interpretação do IMC e as informações da pessoa.

    por Tiago Souza, 2020.
*/
#include <stdio.h>

struct pessoa
{
    char nome[100];
    float peso;
    float altura;
};
typedef struct pessoa Pessoa;

float imc(float peso, float altura);
void showIMC (float resultado);
void showP(Pessoa z);

const int MAXFN = 50;

int main()
{   
    Pessoa z;           //pessoa 
    char fn[MAXFN];     //nome do arquivo 
    float r = 0.0;      //resultado do IMC
    FILE *f = NULL;

    printf("Digite o nome do arquivo: ");
    scanf("%s", fn);
    printf("\n");

    f = fopen(fn, "r");

    if (f == NULL)
    {
        fprintf(stderr, "Arquivo nao pode ser aberto!!!\n");
        return 5;
    }

    while (fscanf(f, "%[^0-9] %f %f", z.nome, &z.peso, &z.altura) != EOF)
    {
        r = imc(z.peso, z.altura);
        showP(z);
        showIMC(r);
        printf("\n");
    }

    fclose(f);
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
    showIMC
    -------
    Apresenta o IMC e sua interpretação.
    Recebe o valor do IMC.
    Tem como base a tabela utilizada em exercícios anteriores.
*/
void
showIMC (float resultado)
{
    printf("IMC = %.2f\n", resultado);

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

/*
    showP
    -----
    Apresenta os dados de uma pessoa, que foram capturados do arquivo.
    Recebe uma Pessoa z.
*/
void
showP (Pessoa z)
{
    printf("Nome: %s\n", z.nome);
    printf("Peso: %.2f\n", z.peso);
    printf("Altura: %.2f\n", z.altura);
}