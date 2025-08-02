#include "calculadora.h"

#define max_x 100
#define max_y 100
// operaciones de matriz
void somaMt(float mt1[max_x][max_y], float mt2[max_x][max_y], float result[max_x][max_y]){
    for (int i = 0; i < max_x; i++) {
        for (int j = 0; j < max_y; j++) {
            result[i][j] = mt1[i][j] + mt2[i][j];
        }
    }
    return result;
}
void subMt(float mt1[max_x][max_y], float mt2[max_x][max_y], float result[max_x][max_y]){
    for (int i = 0; i < max_x; i++) {
        for (int j = 0; j < max_y; j++) {
            result[i][j] = mt1[i][j] - mt2[i][j];
        }
    }
    return result;
}
void multMt(float mt1[max_x][max_y], float mt2[max_x][max_y], float result[max_x][max_y]){
    for (int i = 0; i < max_x; i++) {
        for (int j = 0; j < max_y; j++) {
            result[i][j] = 0;
            for (int k = 0; k < max_y; k++) {
                result[i][j] += mt1[i][k] * mt2[k][j];
            }
        }
    }
    return result;
}
void divMt(float mt1[max_x][max_y], float mt2[max_x][max_y], float result[max_x][max_y]){
    for (int i = 0; i < max_x; i++) {
        for (int j = 0; j < max_y; j++) {
            if (mt2[i][j] != 0) {
                result[i][j] = mt1[i][j] / mt2[i][j];
            } else {
                printf("Erro: Divisão por zero na posição [%d][%d]!\n", i, j);
                return;
            }
        }
    }
    return result;
}
