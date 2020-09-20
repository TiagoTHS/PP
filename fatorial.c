#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, i, fatorial;

    printf("Digite o numero a ser fatorado: ");
    scanf("%d", &n);

    /* Outra forma:

    for (fatorial = 1; n > 1; n--){
        fatorial = fatorial * n;
    }
    
    */

    if (n == 0){
        fatorial = 1;
        return 0;
    }

    fatorial = n;

    for (i=n-1; i>0; i--){
        fatorial = fatorial * i; 
    }

    printf("Fatorial de %d = %d\n", n, fatorial);

    return 0;
}