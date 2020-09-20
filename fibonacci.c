#include <stdlib.h>
#include <stdio.h>

int main() {
    int x1=1, x2=-1, x, n;
    
    scanf("%d", &n);

    while (n > 0)
    {
        x = x2 + x1;
        printf("%d", x);
        x1 = x2;
        x2 = x;
        n = n - 1;
    }
    
    return 0;
}