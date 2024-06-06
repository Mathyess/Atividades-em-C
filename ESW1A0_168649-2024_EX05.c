/* Aluno: Matheus Alende Pires
Data: 30/05/2024
Objetivo: Ler 15 elementos de um vetor A.
Construir um vetor B de mesmo tipo, observando a seguinte lei de formação: "Todo elemento de B deverá ser o quadrado do elemento de A correspondente".
Apresentar os vetores A e B no final
*/
#include <stdio.h>
int main() {
    int vetorA[15], vetorB[15], i;
    for (i = 0; i < 15; i++) {
        printf("Digite o valor do vetor A[%d]: ", i);
        scanf("%d", &vetorA[i]);
        vetorB[i] = vetorA[i] * vetorA[i];
    }
    for (i = 0; i < 15; i++) {
        printf("Vetor A[%d] = %d\n", i, vetorA[i]);
        printf("Vetor B[%d] = %d\n", i, vetorB[i]);
    }
    return 0;
}