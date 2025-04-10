#include <stdio.h>
#include <string.h>

#define MAX_EMPLEADOS 3
#define MAX_NOMBRE 50

// Definir la estructura
typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    float sueldo;
} Empleado;

// Función para limpiar el búfer de entrada
void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Función para leer datos de empleados
void leerEmpleados(Empleado empleados[]) {
    for (int i = 0; i < MAX_EMPLEADOS; i++) {
        printf("\n📋 Ingresar datos del empleado %d:\n", i + 1);

        printf("Nombre: ");
        fgets(empleados[i].nombre, MAX_NOMBRE, stdin);
        empleados[i].nombre[strcspn(empleados[i].nombre, "\n")] = '\0';  // Eliminar el salto de línea

        printf("Edad: ");
        while (scanf("%d", &empleados[i].edad) != 1 || empleados[i].edad <= 0) {
            printf("❌ Edad inválida. Intente nuevamente: ");
            limpiarBuffer();
        }

        printf("Sueldo: ");
        while (scanf("%f", &empleados[i].sueldo) != 1 || empleados[i].sueldo < 0) {
            printf("❌ Sueldo inválido. Intente nuevamente: ");
            limpiarBuffer();
        }

        limpiarBuffer(); // Limpiar cualquier carácter extra
    }
}

// Función para calcular sueldo promedio
float calcularPromedio(Empleado empleados[]) {
    float suma = 0.0;
    for (int i = 0; i < MAX_EMPLEADOS; i++) {
        suma += empleados[i].sueldo;
    }
    return suma / MAX_EMPLEADOS;
}

// Función para mostrar empleados con sueldo mayor al promedio
void mostrarSuperioresAlPromedio(Empleado empleados[], float promedio) {
    printf("\n💰 Empleados con sueldo mayor al promedio (%.2f):\n", promedio);
    int encontrados = 0;
    for (int i = 0; i < MAX_EMPLEADOS; i++) {
        if (empleados[i].sueldo > promedio) {
            printf("- %s (%.2f)\n", empleados[i].nombre, empleados[i].sueldo);
            encontrados++;
        }
    }

    if (!encontrados) {
        printf("Ningún empleado supera el sueldo promedio.\n");
    }
}

int main() {
    Empleado empleados[MAX_EMPLEADOS];

    leerEmpleados(empleados);
    float promedio = calcularPromedio(empleados);
    mostrarSuperioresAlPromedio(empleados, promedio);

    return 0;
}
