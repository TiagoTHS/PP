#include <stdlib.h>
#include <stdio.h>

int main() {
    char n[100];
    float m, a, imc;

    scanf("%s", n);
    scanf("%f", &m);

    while (m != 0){
        scanf("%f", &a);
        imc = m / (a * a);

        printf("Nome: %s\n", n);
        printf("Massa: %.2f\n", m);
        printf("Altura: %.2f\n", a);
        printf("IMC = %.2f\n", imc);

        if (imc < 18.5){
            printf("Abaixo do peso\n");
        }else if (imc < 25){
            printf("Peso normal\n");
        }else if (imc < 30){
            printf("Sobrepeso\n");
        }else if (imc < 35){
            printf("Obesidade grau 1\n");
        }else if (imc < 40){
            printf("Obesidade grau 2\n");
        }else {
            printf("Obesidade grau 3\n");
        }

        scanf("%s", n);
        scanf("%f", &m);
    }
  
    return 0;
}