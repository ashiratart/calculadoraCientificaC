#include <stdio.h>

void adicionar(double a, double b) {
    printf("Resultado da adição: %.2f\n", a + b);
}

void subtrair(double a, double b) {
    printf("Resultado da subtração: %.2f\n", a - b);
}

void multiplicar(double a, double b) {
    printf("Resultado da multiplicação: %.2f\n", a * b);
}

void dividir(double a, double b) {
    if (b != 0) {
        printf("Resultado da divisão: %.2f\n", a / b);
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }
}

int main() {
    double num1, num2;
    int opcao;

    printf("Calculadora Científica\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Escolha uma operação (1-4): ");
    scanf("%d", &opcao);

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch (opcao) {
        case 1:
            adicionar(num1, num2);
            break;
        case 2:
            subtrair(num1, num2);
            break;
        case 3:
            multiplicar(num1, num2);
            break;
        case 4:
            dividir(num1, num2);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}