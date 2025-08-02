#include "calculadora.h"

float exp(float x) {
    float result = 1.0;
    float term = 1.0;
    int n = 1;
    for (n=1; n < 20; n++){
        term *= x / n;
        result += term;
    }
    return result;
}

float sinh(float x) {
    return (exp(x) - exp(-x)) / 2;
}
float cosh(float x) {
    return (exp(x) + exp(-x)) / 2;
}
float tanh(float x) {
    return (exp(x) - exp(-x)) / (exp(x) + exp(-x));
}
float sech(float x) {
    return (1 / cosh(x));
}
float cosech(float x) {
    return (1 / sinh(x));
}
float coth(float x) {
    return (cosh(x) / sinh(x));
}
float arcsinh(float x) {
    return ln(x + (x^2 + 1)^(0.5));
}
float arccosh(float x) {
    return ln(x + (x^2 - 1)^(0.5));
}
float arctanh(float x) {
    return (1/2) * ln((1 + x) / (1 - x));
}

