#include <stdio.h>

float raizCuadrada(int n) {
    float raiz = 0.0;

    for (int i = 0; i * i <= n; i++) {
        raiz = i;
    }

    float precision = 0.001;
    for (int i = 0; i < 10; i++) {
        raiz += precision;
        if (raiz * raiz > n) {
            raiz -= precision;
        }
    }

    return raiz;
}

int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
    printf("La raíz cuadrada de %d es: %.3f\n", num, raizCuadrada(num));
    return 0;
}
