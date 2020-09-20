#include <stdio.h> 
#define MAX 5 
int 
main () 
{ 

    int i = 0; 
    unsigned char c = 0, d; 
    for (i = 0; i < MAX; i++) 
    { 
        printf ("digite um caractere do teclado:"); 
        scanf ("%c", &c); 
        while (getchar() != '\n');
        printf ("%c =%d\n", c, c); 
    } 

    return 0; 

} 