#include "funcao.h"

// Definicion de funciones trigonométricas
float sin(float x){
    switch (x){
        case 0: return 0.0;
        case 30: return 0.5;
        case 45: return 0.7071;
        case 60: return 0.8660;
        case 90: return 1.0;
        default: return -999.0; // Error for unsupported angles
    }
}
float cos(float x) {
    switch (x) {
        case 0: return 1.0;
        case 30: return 0.8660;
        case 45: return 0.7071;
        case 60: return 0.5;
        case 90: return 0.0;
        default: return -999.0; // Error for unsupported angles
    }
}
float tan(float x) {
    switch (x) {
        case 0: return 0.0;
        case 30: return 0.5774;
        case 45: return 1.0;
        case 60: return 1.7321;
        case 90: return -1; 
        default: return -999.0; // Error for unsupported angles
    }
}
float sec(float x){
    switch (x) {
        case 0: return 1.0;
        case 30: return 1.1547;
        case 45: return 1.4142;
        case 60: return 2.0;
        case 90: return -1; 
        default: return -999.0; // Error for unsupported angles
    }
}
float cossec(float x) {
    switch (x) {
        case 0: return -1; 
        case 30: return 1.1547;
        case 45: return 1.4142;
        case 60: return 2.0;
        case 90: return 1.0;
        default: return -999.0; // Error for unsupported angles
    }
}
float cotan(float x) {
    switch (x) {
        case 0: return -1; 
        case 30: return 1.7321;
        case 45: return 1.0;
        case 60: return 0.5774;
        case 90: return 0.0;
        default: return -999.0; // Error for unsupported angles
    }
}