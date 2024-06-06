/* Aluno: Matheus Alende Pires
Data: 12/05/2024
Objetivo: Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma: 

1 x n = n 
2 x n = 2n 
3 x n = 3n 
....... 
n x n = n2 */
#include <stdio.h>

int main()
{
    int n, i;
    
    for(i=1; i<=20; i++)
    {
        scanf("%d", &n);
        printf("%d x %d = %d\n", i, n, i*n);
    }
    
    return 0;
}