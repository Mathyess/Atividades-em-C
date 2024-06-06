/* Aluno: Matheus Alende Pires
Data: 30/05/2024
Objetivo: Escreva um algoritmo que leia um vetor de 10 números inteiros e imprima na tela os valores em ordem inversa.
*/
#include <stdio.h>
int main() {
    int vetor[10], i;
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n");
    printf("Vetor invertido: \n");
    for (i = 9; i >=  0;i--) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}