````
#include <stdio.h>
#include <stdlib.h>

// Funciones para operaciones
float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return b != 0 ? a / b : 0; // Prevención de división por cero
}

int main() {
    int opcion;
    float num1, num2, resultado;
    char continuar;

    do {
        printf("=== Calculadora ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("Seleccione una opción (1-4): ");

        while (scanf("%d", &opcion) != 1 || opcion < 1 || opcion > 4) {
            printf("Opción inválida. Intente de nuevo (1-4): ");
            while (getchar() != '\n'); // Limpiar buffer
        }

        printf("Ingrese el primer número: ");
        while (scanf("%f", &num1) != 1) {
            printf("Entrada inválida. Ingrese un número válido: ");
            while (getchar() != '\n');
        }

        printf("Ingrese el segundo número: ");
        while (scanf("%f", &num2) != 1) {
            printf("Entrada inválida. Ingrese un número válido: ");
            while (getchar() != '\n');
        }

        // Ejecutar la operación seleccionada
        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = restar(num1, num2);
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: No se puede dividir entre cero.\n");
                } else {
                    resultado = dividir(num1, num2);
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                }
                break;
        }

        printf("\n¿Desea realizar otra operación? (s para sí, cualquier otra tecla para salir): ");
        getchar(); // Consumir salto de línea pendiente
        continuar = getchar();

        printf("\n");

    } while (continuar == 's' || continuar == 'S');

    printf("Programa finalizado.\n");
    return 0;
}
````
