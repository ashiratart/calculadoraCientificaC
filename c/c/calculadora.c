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

        // operaciones adicionales
        case 'raiz':
            printf("Digite o número para calcular a raiz >\n");
            scanf("%f", &raiz);
            if (raiz >= 0) {
                printf("Resultado: %.2f\n", raiz(raiz));
            } else {
                printf("Erro: Raiz de número negativo!\n");
            }
            break;
        case 'tan':
            printf("Digite o ângulo em radianos para calcular a tangente >\n");
            scanf("%f", &mb1);
            printf("Resultado: %.4f\n", tan(mb1));
            break;
        case 'sin':
            printf("Digite o ângulo em radianos para calcular o seno >\n");
            scanf("%f", &mb1);
            printf("Resultado: %.4f\n", sin(mb1));
            break;
        case 'cos':
            printf("Digite o ângulo em radianos para calcular o cosseno >\n");
            scanf("%f", &mb1);
            printf("Resultado: %.4f\n", cos(mb1));
            break;
        case 'h': // Hiperbólicas
            printf("Digite o ângulo em radianos para calcular a função hiperbólica >\n");
            scanf("%f", &mb1);
            printf("Resultado: %.4f\n", sinh(mb1));
            printf("Resultado: %.4f\n", cosh(mb1));
            printf("Resultado: %.4f\n", tanh(mb1));
            printf("Resultado: %.4f\n", sech(mb1));
            printf("Resultado: %.4f\n", cosech(mb1));
            printf("Resultado: %.4f\n", coth(mb1));
            break;
        case 'log':
            printf("Digite o número e a base para calcular o logaritmo >\n");
            scanf("%f %f", &mb1, &mb2);
            if (mb1 > 0 && mb2 > 0 && mb2 != 1) {
                printf("Resultado: %.4f\n", log(mb1, mb2));
            } else {
                printf("Erro: Logaritmo inválido!\n");
            }
            break;
        case 'exp':
            printf("Digite o número para calcular a exponencial >\n");
            scanf("%f", &mb1);
            printf("Resultado: %.4f\n", exp(mb1));
            break;
        case 'ln':
            printf("Digite o número para calcular o logaritmo natural >\n");
            scanf("%f", &mb1);
            if (mb1 > 0) {
                printf("Resultado: %.4f\n", ln(mb1));
            } else {
                printf("Erro: Logaritmo natural de número não positivo!\n");
            }
            break;
        case 'eq':
            printf("Digite os coeficientes a, b, c da equação de 2° grau (precione enter) > \n");
            for (int i = 0; i < 3; i++){
                scanf("%f", &equacao[i]);
            }
            float a = equacao[0];
            float b = equacao[1];
            float c = equacao[2];
            eq(a, b, c);
            printf("Raízes: r1 = %.4f, r2 = %.4f\n, %s", r1, r2, i);
            break;
        case 'mt':
            printf("Digite os elementos da matriz (precione enter) > \n");
            mt(matriz);
            printf("Resultado da matriz: \n");
        default:
            printf("Operação desconhecida!\n");
    }

int main() {
    char operacao;
    float mb1, mb2, raiz, equacao[], matriz;
    equacao = [0.0,0.0,0.0];
    matriz = [0.0][0.0];

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

