#include <stdio.h>

// Función para verificar si un número es primo
int es_primo(int num) {
    if (num < 2) return 0; // Números menores a 2 no son primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // No es primo
        }
    }
    return 1; // Es primo
}

// Función para obtener entrada numérica válida
int obtener_entero(const char *mensaje) {
    int num;
    int valido;
    do {
        printf("%s", mensaje);
        valido = scanf("%d", &num);
        while (getchar() != '\n'); // Limpiar el buffer de entrada
        if (!valido) {
            printf("Entrada no válida. Por favor, ingrese un número entero.\n");
        }
    } while (!valido);
    return num;
}

int main() {
    int numero, opcion;
    do {
        // Obtener número del usuario
        numero = obtener_entero("Ingrese un número entero positivo: ");
        
        if (numero < 0) {
            printf("El número debe ser positivo. Intente de nuevo.\n");
            continue;
        }
        
        // Verificar si es primo
        if (es_primo(numero)) {
            printf("%d es un número primo.\n", numero);
        } else {
            printf("%d no es un número primo.\n", numero);
        }
        
        // Preguntar si desea continuar
        printf("\n¿Desea verificar otro número?\n");
        printf("1. Sí\n");
        printf("2. No (Salir)\n");
        printf("Seleccione una opción: ");
        
        if (scanf("%d", &opcion) != 1) {
            opcion = 2; // En caso de entrada inválida, salir
        }
        
    } while (opcion == 1);
    
    printf("Saliendo del programa. ¡Hasta luego!\n");
    return 0;
}
