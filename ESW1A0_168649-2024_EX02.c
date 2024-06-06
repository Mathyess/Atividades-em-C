/* Aluno: Matheus Alende Pires
Data: 30/05/2024
Objetivo: Escreva um algoritmo que leia um vetor de 10 números reais e imprima na tela a soma dos valores que são maiores que a média do vetor.
*/
#include <stdio.h>
int main() {
    float vetor[10], soma = 0, media;
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / 10;
    for (i = 0; i < 10; i++) {
        if (vetor[i] > media) {
            printf("%.2f\n", vetor[i]);
        }
    }
   
    return 0;
}