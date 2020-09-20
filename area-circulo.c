#include <stdlib.h>
#include <stdio.h>

int main() {
    int r;
    float a;

    scanf("%d", &r);

    while (r != 0){
        a = 3.14 * r * r;
        printf("Area = %.2f\n", a);
        scanf("%d", &r);
    }
    
    return 0;
}