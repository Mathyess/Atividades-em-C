/* Aluno: Matheus Alende Pires
Data: 30/05/2024
Objetivo: Ler dois vetores, sendo A com 5 elementos e B com 10 elementos. Construir um outro vetor C, sendo este a junção dos vetores A e B.
 Desta forma, C deverá ter a capacidade de armazenar 15 elementos. Apresentar o vetor C.
*/
#include <stdio.h>
int main() {
    int a[5], b[10], c[15], i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d valor para armazenar no vetor a: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("Digite o %d valor para armazenar no vetor b: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 15; i++) {
        if (i <= 5) {
            c[i] = a[i];
        }
        else {
            c[i] = b[i];
        }
    }

    printf(" Vetor c\n\n");
    for (i = 0; i < 15; i++) {
        printf("Valor %d: %d \n", i + 1, c[i]);
    }

    return 0;
}