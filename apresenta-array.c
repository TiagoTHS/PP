/*
    O programa apresenta os valores de um vetor

    Os valores do vetor são implementados pela função loadA()
    A partir da função showA() os valores do vetor são apresentados

    por Tiago Souza, 2020
*/

#include<stdio.h>

const int MAX = 10;

void loadA (int t, int a[], int v);
void showA (int t, int a[]);

int
main ()
{
    int a1[MAX];    // vetor A
    
    loadA (MAX, a1, 0);
    showA (MAX, a1);

    return 0;
}

/*
    loadA
    -----
    Carrega as t posições do array a com valor v.
*/
void
loadA (int t, int a[], int v)
{
    int i;
    for (i = 0; i < t; i++)
    {
        a[i] = v;
    }
}

/*
    showA
    -----
    Apresenta as t posições do array a.
*/
void
showA (int t, int a[])
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("%d ", a[i]);
    }
}