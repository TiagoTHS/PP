#include <stdio.h>

int main()
{
   int r = 1, i, exp, base;
   printf("Digite a base e o expoente:\n");
   scanf("%d %d", &base, &exp);

   while (exp > 0)
   {
        r = r * base;
        exp--;
   }
   
   printf("\n");
   printf("Valor : %d\n", r);
   return 0;
}