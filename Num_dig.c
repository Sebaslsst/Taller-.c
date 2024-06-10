#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Verificar si el número es negativo y convertirlo a positivo
    if (numero < 0) {
        numero = -numero;
    }

    // Contar el número de dígitos utilizando un bucle do-while
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);

    // Imprimir el resultado
    printf("El número tiene %d dígito(s).\n", contador);
    printf("Muchas gracias\n");


    return 0;
}
