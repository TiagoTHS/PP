//O programa apresenta as iniciais das palavras que compõem uma string 
//O usuário informa essa sequência de caracteres 
//É apresentado as letras iniciais de cada palavra da sequência 
//por Tiago Souza, 2020 
 
#include <stdio.h> 
#include <string.h> 
const int MAXN = 100; 
 
int  
main() 
{ 
    char n[MAXN]; // sequência digitada 
    int j= -1; // variável para ajudar a armazenar a sequência 
    unsigned int i=0; // variável para o laço 
  
    printf ("digite uma string [com um máximo de 99 caracteres]\n");
    do
    { 
        j++; 
        scanf("%c", &n[j]);
    } while (n[j] != '\n');
    
 
    //coloca-se um '\0' na última posição da string 
    n[j] = '\0'; 
    printf("%c", n[0]); // apresenta a primeira inicial

    do
    {
        if (n[i] == 32) // 32 é (space) na tabela ASCII 
        { 
            printf("%c", n[i+1]); 
        } 
        i++; 
    } while (i < strlen(n));
 
    printf("\n"); 
 
    return 0; 
}