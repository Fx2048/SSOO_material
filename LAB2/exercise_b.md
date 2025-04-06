````
#include <stdio.h>
#include <stdlib.h>

// Función para calcular el factorial
unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    char opcion;

    do {
        printf("Ingrese un número entero entre 1 y 20: ");
        while (scanf("%d", &numero) != 1 || numero < 1 || numero > 20) {
            printf("Entrada inválida. Ingrese un número entre 1 y 20: ");
            while (getchar() != '\n'); // Limpiar buffer
        }

        unsigned long long resultado = factorial(numero);
        printf("El factorial de %d es: %llu\n", numero, resultado);

        printf("\n¿Desea calcular otro factorial? (s para sí, cualquier otra tecla para salir): ");
        getchar(); // Consumir salto de línea pendiente
        opcion = getchar();

        printf("\n");

    } while (opcion == 's' || opcion == 'S');

    printf("Programa finalizado.\n");
    return 0;
}
````
