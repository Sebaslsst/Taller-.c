#include <stdio.h>

int main() {
    int num1, num2;
    
    // Solicitar al usuario que ingrese los dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    int mcd = 1; // Inicializar el MCD con el valor mínimo posible
    int divisor = 1; // Inicializar el divisor
    
    // Calcular el MCD utilizando un bucle do-while
    do {
        if (num1 % divisor == 0 && num2 % divisor == 0) {
            mcd = divisor; // Actualizar el MCD si encontramos un divisor común
        }
        divisor++;
    } while (divisor <= num1 && divisor <= num2);
    
    // Imprimir el resultado
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);
    printf("Muchas gracias\n");

    return 0;
}
