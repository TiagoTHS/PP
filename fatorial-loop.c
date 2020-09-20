#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, i, fatorial;

    printf("Digite o numero a ser fatorado: [2 ou menos para parar]");
    scanf("%d", &n);

    if (n == 0 || n == 1){
        fatorial = 1;
        return 0;
    }

    while (n > 2){
        fatorial = n;
        for (i=n-1; i>0; i--){
            fatorial = fatorial * i; 
        }
        printf("Fatorial de %d = %d\n", n, fatorial);
        printf("Digite o numero a ser fatorado: [2 ou menos para parar]");
        scanf("%d", &n);
    }

    return 0;
}