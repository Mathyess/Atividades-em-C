/* Aluno: Matheus Alende Pires
Data: 12/05/2024
Objetivo: Apresentar todos os números divisíveis por 4 que sejam menores que 200.
 Para verificar se o número é divisível, sendo, mostre-o, não sendo, passe para o próximo passo. A variável que controlará o contador deverá ser iniciada com valor 1
 */
#include <stdio.h>
int main () {
    int contador = 1;
    while (contador < 200) {
        if (contador % 4 == 0) {
            printf("%d\n", contador);
        }
        contador++;
    }
    return 0;
}