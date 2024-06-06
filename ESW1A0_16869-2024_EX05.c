/* Aluno: Matheus Alende Pires
Data: 12/05/2024
Objetivo: Elaborar um programa que efetue a leitura de 15 valores numéricos inteiros e no final apresente o total do somatório da fatorial de cada valor lido.
*/
#include <stdio.h>
int main () {
    int i, n, fatorial = 1;
    for (i = 1; i <= 15; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        for (fatorial = 1; fatorial <= n; fatorial++) {
            fatorial = fatorial * fatorial;
        }
        printf("O fatorial de %d eh: %d\n", n, fatorial);
    }
    return 0;
}