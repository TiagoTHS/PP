#include <stdlib.h>
#include <stdio.h>

int main() {
    int numA, numB;
    char letra;

    scanf("%c", &letra);

    while (letra == 'Q' || letra == 'R' || letra == 'T')
    {
        if (letra == 'Q'){
            scanf("%d", &numA);
            printf("Area do quadrado = %d", numA*numA);
        }else if (letra == 'R'){
            scanf("%d" "%d", &numA, &numB);
            printf("Area do retangulo = %d", numA*numB);
        }else if (letra == 'T'){
            scanf("%d" "%d", &numA, &numB);
            printf("Area do triangulo = %d", (numA*numB)/2);
        }
        scanf("%c", &letra);

    }
    
    return 0;
}