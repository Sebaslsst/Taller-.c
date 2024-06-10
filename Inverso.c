#include <stdio.h>

int invertirNumero(int num) {
    int inverso = 0;
    for (; num != 0; num /= 10) {
        inverso = inverso * 10 + num % 10;
    }
    return inverso;
}

int main() {
    int numero;
    printf("Por favor ingrese un número: ");
    scanf("%d", &numero);
    printf("El inverso del número %d es: %d\n", numero, invertirNumero(numero));
    return 0;
}
