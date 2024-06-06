/* Aluno: Matheus Alende Pires
Data: 12/05/2024
Objetivo:  Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação. */
#include <stdio.h>
int main () {
    int a, b, c, d, e, negativos = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a < 0) {
        negativos++;
    }
    if (b < 0) {
        negativos++;
    }
    if (c < 0) {
        negativos++;
    }
    if (d < 0) {
        negativos++;
    }
    if (e < 0) {
        negativos++;
    }
    printf("%d valores negativos\n", negativos);
    return 0;
}