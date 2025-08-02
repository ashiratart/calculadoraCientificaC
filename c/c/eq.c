#include "calculadora.h"

// Equaciones de 2° grado
float delta = (b * b) - (4 * a * c);
float potencia(float b){
    float result = 1.0;
    int n;
    for (n = 0; n < b; n++){
        result *= b;
    }
    return result;
}

void raiz(float delta){
    float result;
    int pri = 2;
    if (delta < 0) {
        result = delta * -1;
    }
    while (result > 1){
        if (result > 1){
            result /= pri;
        }else{
            pri++;
        }      
    }
    return result;
}

float eq(float a, float b, float c){
    bool i;
    float r1, r2;
    r1 = (-b + raiz(delta)) / (2 * a);
    r2 = (-b - raiz(delta)) / (2 * a);
    if (delta < 0) {
        i = true;
        printf("esta raíz es imaginaria, pois Δ é %.4f\n", delta);
    }
    return r1, r2, i;
}