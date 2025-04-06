```
// librerías importadaas
#include <stdio.h>
#include <stdlib.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
    if (num <= 1) return 0; // 0 y 1 no son primos
    if (num == 2) return 1; // 2 es primo
    if (num % 2 == 0) return 0; // pares mayores a 2 no son primos

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Función principal
int main() {
    int numero;
    char opcion;

    do {
        // validar entrada del usuario
        printf("Ingrese un número entero positivo: ");
        //Mientras el usuario no ingrese un número válido o ingrese un número negativo, sigue pidiéndolo
        while (scanf("%d", &numero) != 1 || numero < 0) {
            printf("Entrada inválida. Ingrese un número entero positivo: ");
                // Limpia el buffer de entrada (opcional pero útil para evitar bucles infinitos)

            while (getchar() != '\n'); // limpiar buffer
        }

        if (esPrimo(numero))
            printf("%d es un número primo.\n", numero);
        else
            printf("%d no es un número primo.\n", numero);

        printf("\n¿Desea verificar otro número? (s para sí, cualquier otra tecla para salir): ");
        getchar(); // consumir salto de línea pendiente el enter
        opcion = getchar();

        printf("\n");

    } while (opcion == 's' || opcion == 'S');

    printf("Programa finalizado.\n");
    return 0;
}
```
