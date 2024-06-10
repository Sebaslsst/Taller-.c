#include <stdio.h>

void mostrarFibonacci(int cantidad) {
    int a = 0, b = 1, temporal;
    printf("Los primeros %d números de la serie de Fibonacci son: ", cantidad);
    for(int i = 0; i < cantidad; i++) {
        printf("%d ", a);
        temporal = a;
        a = b;
        b = temporal + b;
    }
    printf("\n");
}

int main() {
    int cantidad;
    printf("¿Cuántos números de la serie de Fibonacci deseas ver? ");
    scanf("%d", &cantidad);
    mostrarFibonacci(cantidad);
return 0;
}
