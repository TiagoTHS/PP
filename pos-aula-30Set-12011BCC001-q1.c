/*
    Apresenta o Índice de Massa Corporal (IMC),
    correspondente ao peso e altura das pessoas contidas em um arquivo.

    O usuário informa o nome do arquivo que contém as informações.

    É apresentado o IMC, a interpretação do IMC e as informações das pessoas do arquivo.
    Apresenta as informações da pessoa com o menor IMC.

    por Tiago Souza, 2020.
*/
#include <stdio.h>
#define MAX 100

const int MAXFN = 50;

struct pessoa
{
    char nome[MAX];
    float peso;
    float altura;
};
typedef struct pessoa Pessoa;

float imc(float peso, float altura);
void showIMC (float resultado);
void showP(Pessoa z);
Pessoa mIMC(Pessoa p1, Pessoa p2);
Pessoa getP(FILE *f);

int main()
{   
    Pessoa z;           //pessoa 
    Pessoa m;           //pessoa com menor IMC 
    FILE *f = NULL;
    char fn[MAXFN];     //nome do arquivo 

    printf("Digite o nome do arquivo: ");
    scanf("%s", fn);
    printf("\n");

    f = fopen(fn, "r");

    if (f == NULL)
    {
        fprintf(stderr, "Arquivo nao pode ser aberto!!!\n");
        return 5;
    }

    //coloca a primeira pessoa do arquivo como referencia para o menor IMC
    m = getP(f);
    showP(m);
    showIMC(imc(m.peso, m.altura));

    while (!feof(f))
    {
        z = getP(f);
        showP(z);
        showIMC(imc(z.peso, z.altura));
        m = mIMC(m, z);
    }

    printf("\n-----Pessoa do arquivo com o menor IMC-----\n");
    showP(m);
    showIMC(imc(m.peso, m.altura));

    fclose(f);
    return 0;
}

/*
    getP
    ----
    A função retorna uma pessoa que foi lida no arquivo.
    Recebe qual o arquivo que está os dados.
*/
Pessoa
getP(FILE *f)
{
    Pessoa x;

    fscanf(f, "%[^0-9] %f %f", x.nome, &x.peso, &x.altura);

    return x;
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
    mIMC
    ----
    Essa função compara o IMC de p1 contra o de p2 
    e retorna p1 ou p2, dependendo qual dessas variáveis tem o menor IMC.
*/
Pessoa
mIMC(Pessoa p1, Pessoa p2)
{
    float r1 = 0.0;      //resultado do IMC de p1
    float r2 = 0.0;      //resultado do IMC de p2

    r1 = imc(p1.peso, p1.altura);
    r2 = imc(p2.peso, p2.altura);

    if (r1 > r2)
        return p2;
    
    return p1;
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
    printf("%s\n", z.nome);
    printf("Peso: %.2f\n", z.peso);
    printf("Altura: %.2f\n", z.altura);
}