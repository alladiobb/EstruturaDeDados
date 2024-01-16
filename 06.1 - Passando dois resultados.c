#include <stdio.h>

int funcaoQuadradoCubo(int x, int* y){
    *y = x*x*x;
    return x*x;
}

int main(){
    int a = 30;
    int cubo;
    int quadrado = funcaoQuadradoCubo(a, &cubo);
    printf("a: %i; a*a: %i; a*a*a: %i\n" a, quadrado, cubo);
}