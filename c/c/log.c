#include "calculadora.h"

// Funciones logarítmicas base e
float ln(float x){
    if (x <= 0) return -999;

    float y = x -1;
    float z = 0.0001;
    float alpha;

    do {
        float ey = exp(y);
        alpha = (ey - x) / ey;
        y -= alpha;
    } while (alpha > z || alpha < -z);
    return y;
}

// Función logarítmica
float log10(float x){
    return ln(x)/ln(10.0);
}

float log(float x, float base){
    return ln(x)/ln(base);
}





