````
#include <stdio.h>
#include <stdlib.h>

// Función para calcular IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

// Función para interpretar el IMC
void interpretarIMC(float imc) {
    printf("Su IMC es: %.2f\n", imc);

    if (imc < 18.5)
        printf("Clasificación: Bajo peso\n");
    else if (imc >= 18.5 && imc < 24.9)
        printf("Clasificación: Peso normal\n");
    else if (imc >= 25 && imc < 29.9)
        printf("Clasificación: Sobrepeso\n");
    else
        printf("Clasificación: Obesidad\n");
}

int main() {
    int opcion;
    float peso, altura, imc;
    char continuar;

    do {
        printf("=== Calculadora de Índice de Masa Corporal (IMC) ===\n");
        printf("1. Calcular IMC\n");
        printf("2. Salir\n");
        printf("Seleccione una opción (1-2): ");

        while (scanf("%d", &opcion) != 1 || (opcion != 1 && opcion != 2)) {
            printf("Opción inválida. Intente de nuevo (1 o 2): ");
            while (getchar() != '\n');
        }

        if (opcion == 1) {
            // Solicitar peso
            printf("Ingrese su peso en kilogramos (kg): ");
            while (scanf("%f", &peso) != 1 || peso <= 0) {
                printf("Entrada inválida. Ingrese un peso válido: ");
                while (getchar() != '\n');
            }

            // Solicitar altura
            printf("Ingrese su altura en metros (m): ");
            while (scanf("%f", &altura) != 1 || altura <= 0) {
                printf("Entrada inválida. Ingrese una altura válida: ");
                while (getchar() != '\n');
            }

            imc = calcularIMC(peso, altura);
            interpretarIMC(imc);

            printf("\n¿Desea realizar otro cálculo? (s para sí, cualquier otra tecla para salir): ");
            getchar(); // limpiar buffer
            continuar = getchar();
            printf("\n");

            if (continuar != 's' && continuar != 'S') {
                opcion = 2;
            }

        } else {
            printf("Programa finalizado.\n");
        }

    } while (opcion != 2);

    return 0;
}

````
