#ifndef CALCUKADORA_H
#define CALCUKADORA_H
#define PI 3.14159
#define e 2.71828

// Declaración de la clase Calculadora

// Funciones trigonométricas
float tan(float x);
float sin(float x);
float cos(float x);
float arcsin(float x);
float arccos(float x);
float arctan(float x);
float sec(float x);
float cossec(float x);
float cotan(float x);

// funciones hiperbólicas
float sinh(float x);
float cosh(float x);
float tanh(float x);
float sech(float x);
float cosech(float x);
float coth(float x);
float arcsinh(float x);
float arccosh(float x);
float arctanh(float x);

// Funciones logarítmicas
float log(float x, float base);
float ln(float x);
float log10(float x);

// Funciones exponenciales
float exp(float x);

// Ecuaciones de grado
float eq(float x);

// Raíces
float raiz(float x);

// Matrices
float mt(float [x], float [y]);


#endif // CALCUKADORA_H