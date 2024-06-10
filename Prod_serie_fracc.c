#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;
    int i = 1; // Inicializar el contador en 1

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Asegurar si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular la suma de la serie utilizando un bucle do-while
    do {
        suma += 1.0 / i;
        i++; // Incrementar el contador en 1
    } while (i <= n);

    // Imprimir el resultado
    printf("La suma de la serie 1 + 1/2 + 1/3 + ... + 1/%d es: %f\n", n, suma);
    printf("Muchas gracias\n");

    return 0;
}
