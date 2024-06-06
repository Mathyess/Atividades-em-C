/* Aluno: Matheus Alende Pires
Data: 30/05/2024
Objetivo: Escreva um algoritmo que leia um vetor de 10 números inteiros e imprima na tela os valores que são primos.
*/
#include <stdio.h>
int main() {
    int vetor[10];
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++) {
        for (j = 2; j < vetor[i]; j++) {
            if (vetor[i] % j == 0) {
                break;
            }
        }
        if (j == vetor[i]) {
            printf("%d\n", vetor[i]);
        }
    }
    return 0;
}