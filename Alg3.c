#include <stdlib.h>
#include <stdio.h>

int main() {
    int numA, numB, A;
    char letra;

    scanf("%c", &letra);

    if (letra == 'Q'){
        scanf("%d", &numA);
        A = numA*numA;
        printf("Area do quadrado = %d", A);
    }else if (letra == 'R'){
        scanf("%d" "%d", &numA, &numB);
        A = numA*numB;
        printf("Area do retangulo = %d", A);
    }else if (letra == 'T'){
        scanf("%d" "%d", &numA, &numB);
        A = numA*numB/2;
        printf("Area do triangulo = %d", A);
    }
    
    return 0;
}