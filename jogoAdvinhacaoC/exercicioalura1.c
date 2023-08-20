#include <stdio.h>

int main() {

    //Declaração de variáveis
    int x, y, resultado;

    //Entrada do usuário
    printf("Escreva um número inteiro: ");
    scanf("%d", &x);
    printf("Escreva outro número inteiro: ");
    scanf("%d", &y);

    //Operação de multiplicação
    resultado = x * y;

    //Imprimir ao usuário o produto dos dois números
    printf("O produto dos dois número que você digitou é: %d", resultado);
}