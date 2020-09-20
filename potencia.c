#include <stdio.h>

int main()
{
   int r = 1, i, exp, base;
   printf("Digite a base e o expoente:\n");
   scanf("%d %d", &base, &exp);

   for (i=1; i<= exp; i++)
   {
        r = r * base;
   }
   
   printf("\n");
   printf("Valor : %d\n", r);
   return 0;
}