#include <stdio.h>

int main()
{
   float a = 1.84;   // altura
   float p = 69.0;   // peso
   float r = 0.0;   // IMC

   r = p / (a * a);
   printf ("IMC = %.2f\n", r);
   
   return 0;
}