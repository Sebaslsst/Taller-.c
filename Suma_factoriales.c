#include <stdio.h>

// Calcular el factorial de un número
int factorial(int num) {
    int fact = 1;
    int i = 1;
    while (i <= num) {
        fact *= i;
        i++;
    }
    return fact;
}

int main() {
    int n;

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Asegurar si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular la suma de los factoriales de los primeros n números
    int sumaFactoriales = 0;
    int i = 1;
    while (i <= n) {
        sumaFactoriales += factorial(i);
        i++;
    }

    // Imprimir el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, sumaFactoriales);
    printf("Muchas gracias\n");

    return 0;
}
