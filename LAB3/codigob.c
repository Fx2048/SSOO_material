#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ESTUDIANTES 5
#define MAX_NOMBRE 50

// Estructura para un estudiante
typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
} Estudiante;

// Array para almacenar los estudiantes
Estudiante estudiantes[MAX_ESTUDIANTES];
int cantidadEstudiantes = 0;

// Función para limpiar el búfer de entrada
void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Validación para edad
int leerEdad() {
    int edad;
    while (1) {
        printf("Edad: ");
        if (scanf("%d", &edad) != 1 || edad <= 0) {
            printf("❌ Edad inválida. Intente de nuevo.\n");
            limpiarBuffer();
        } else {
            limpiarBuffer();
            return edad;
        }
    }
}

// Validación para promedio
float leerPromedio() {
    float promedio;
    while (1) {
        printf("Promedio (0 - 20): ");
        if (scanf("%f", &promedio) != 1 || promedio < 0 || promedio > 20) {
            printf("❌ Promedio inválido. Intente de nuevo.\n");
            limpiarBuffer();
        } else {
            limpiarBuffer();
            return promedio;
        }
    }
}

// Función para registrar estudiante
void registrarEstudiante() {
    if (cantidadEstudiantes >= MAX_ESTUDIANTES) {
        printf("🚫 Ya se registraron los %d estudiantes.\n", MAX_ESTUDIANTES);
        return;
    }

    Estudiante nuevo;
    printf("Nombre: ");
    fgets(nuevo.nombre, MAX_NOMBRE, stdin);
    nuevo.nombre[strcspn(nuevo.nombre, "\n")] = '\0'; // Eliminar salto de línea
    nuevo.edad = leerEdad();
    nuevo.promedio = leerPromedio();

    estudiantes[cantidadEstudiantes++] = nuevo;
    printf("✅ Estudiante registrado correctamente.\n\n");
}

// Función para mostrar todos los estudiantes
void mostrarEstudiantes() {
    if (cantidadEstudiantes == 0) {
        printf("⚠️ No hay estudiantes registrados.\n\n");
        return;
    }

    printf("\n📋 Lista de Estudiantes:\n");
    for (int i = 0; i < cantidadEstudiantes; i++) {
        printf("%d. Nombre: %s | Edad: %d | Promedio: %.2f\n",
               i + 1, estudiantes[i].nombre, estudiantes[i].edad, estudiantes[i].promedio);
    }
    printf("\n");
}

// Menú principal
void menu() {
    int opcion;
    while (1) {
        printf("====== MENÚ ======\n");
        printf("1. Registrar estudiante\n");
        printf("2. Mostrar estudiantes\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");

        if (scanf("%d", &opcion) != 1) {
            printf("❌ Entrada inválida. Intente de nuevo.\n\n");
            limpiarBuffer();
            continue;
        }

        limpiarBuffer();

        switch (opcion) {
            case 1:
                registrarEstudiante();
                break;
            case 2:
                mostrarEstudiantes();
                break;
            case 3:
                printf("👋 ¡Hasta luego!\n");
                return;
            default:
                printf("❌ Opción no válida. Intente de nuevo.\n\n");
        }
    }
}

int main() {
    menu();
    return 0;
}
