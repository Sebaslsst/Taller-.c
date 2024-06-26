#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i = 1;

    // Ingrese el número de términos
    printf("Ingrese el número de términos para sumar: ");
    scanf("%d", &n);

    // Asegurar que el número de términos sea positivo
    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1;
    }

    // Calcular la suma de los primeros n términos usando un bucle while
    while (i <= n) {
        sum += i;
        i++;
    }

    // Imprimir el resultado
    printf("La suma de los primeros %d términos es %d\n", n, sum);
    printf("Muchas gracias\n");

    return 0;
}
