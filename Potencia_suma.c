#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;
    for(int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base = 8;
    int exponente = 3;
    int resultado = potencia(base, exponente);
    printf("%d ^ %d = %d\n", base, exponente, resultado);
    return 0;
}
