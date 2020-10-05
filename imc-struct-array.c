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

int main()
{   
    Pessoa z[MAX];      //pessoa 
    Pessoa m;           //pessoa com menor IMC 
    FILE *f = NULL;
    char fn[MAXFN];     //nome do arquivo 
    int i = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", fn);
    printf("\n");

    f = fopen(fn, "r");

    if (f == NULL)
    {
        fprintf(stderr, "Arquivo nao pode ser aberto!!!\n");
        return 5;
    }

    while (fscanf(f, "%[^0-9] %f %f", z[i].nome, &z[i].peso, &z[i].altura) != EOF)
    {
        i++;
    }

    m = z[0];
    while (i > 0)
    {
        m = mIMC(m, z[i]);
        i--;
    }
    
    printf("Pessoa do arquivo com o menor IMC:\n");
    showP(m);
    showIMC(imc(m.peso, m.altura));

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