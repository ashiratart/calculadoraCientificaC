#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "calcukadora.h"

// operaciones
    switch (operacao) {
        case '+':
            printf("Digite os números a serem somados >\n");
            scanf("%f %f", &mb1, &mb2);
            printf("Resultado: %.2f\n", mb1 + mb2);
            break;
        case '-':
            printf("Digite os números a serem subtraídos >\n");
            scanf("%f %f", &mb1, &mb2);
            printf("Resultado: %.2f\n", mb1 - mb2);
            break;
        case '*':
            printf("Digite os números a serem multiplicados >\n");
            scanf("%f %f", &mb1, &mb2);
            printf("Resultado: %.2f\n", mb1 * mb2);
            break;
        case '/':
            printf("Digite os números a serem divididos >\n");
            scanf("%f %f", &mb1, &mb2);
            if (mb2 != 0) {
                printf("Resultado: %.2f\n", mb1 / mb2);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operação desconhecida!\n");
    }

int main() {
    char operacao;
    float mb1, mb2, raiz;

    printf("Bem vindo à Calculadora!\n");
    printf("Digite a operação a ser realizada >\n");
    printf("Basicas: + - * /\n");
    printf("Raiz: raiz\n");
    printf("Função trigonométrica: tan, sin, cos\n");
    printf("Função hiperbólica: h\n");
    printf("Função logarítmica: log\n");
    printf("Função exponencial: exp\n");
    printf("Função ln: ln\n");
    printf("Equações de grau: eq\n");
    printf("Matrizes: mt\n");
    printf(" > \n");
    scanf(" %c", &operacao);
}

