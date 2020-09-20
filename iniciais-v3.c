//O programa apresenta as iniciais das palavras que compõem uma string 
//O usuário informa essa sequência de caracteres 
//É apresentado as letras iniciais de cada palavra da sequência 
//por Tiago Souza, 2020 
 
#include <stdio.h> 
const int MAXN = 100; 
 
int  
main() 
{ 
    char n[MAXN]; // sequência digitada 
    int e = 1; // indica se ocorreu espaço 
    int i; // indexador de n
    printf ("digite uma string [com um máximo de 99 caracteres]\n");
    i = -1;
    do
    {
        i++;
        scanf("%c", &n[i]);

        if (e)
        {
            e = 0;
            printf("%c", n[i]);
        }
        if (n[i] == ' ')
        {
            e = 1;
        }
    
    } while ((i < MAXN) && (n[i] != '\n'));
 
    return 0; 
}