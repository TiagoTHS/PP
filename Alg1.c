#include <stdlib.h>
#include <stdio.h>

void apresentar (char nome[100], float massa, float altura, float indice){
    printf("Nome: %s\n", nome);
    printf("Massa: %.2f\n", massa);
    printf("Altura: %.2f\n", altura);
    printf("IMC = %.2f\n", indice);
}

int main() {
    char n[100];
    float m, a, imc;

    scanf("%s", &n);
    scanf("%f" "%f", &m, &a);

    imc = m / (a * a);

    if (imc < 18.5){
        apresentar(n, m, a, imc);
        printf("Abaixo do peso\n");
    }else if (imc <= 24.9){
        apresentar(n, m, a, imc);
        printf("Peso normal\n");
    }else if (imc <= 29.9){
        apresentar(n, m, a, imc);
        printf("Sobrepeso\n");
    }else if (imc <= 34.9){
        apresentar(n, m, a, imc);
        printf("Obesidade grau 1\n");
    }else if (imc <= 39.9){
        apresentar(n, m, a, imc);
        printf("Obesidade grau 2\n");
    }else {
        apresentar(n, m, a, imc);
        printf("Obesidade grau 3\n");
    }
  
    return 0;
}