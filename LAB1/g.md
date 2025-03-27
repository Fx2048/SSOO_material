# Escriba un programa que determine si un número es primo 

````
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool es_primo(int numero) {
    if (numero < 2) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;

    int limite = sqrt(numero);
    for (int i = 3; i <= limite; i += 2) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    int numero;

    // Solicitar el número al usuario
    printf("Ingrese un número entero no negativo: ");
    if (scanf("%d", &numero) != 1 || numero < 0) {
        fprintf(stderr, "Error: Entrada no válida.\n");
        return 1;
    }

    // Mostrar el resultado
    printf("%d %s un número primo.\n", 
           numero, es_primo(numero) ? "es" : "no es");

    return 0;

}

````

![image](https://github.com/user-attachments/assets/9a7f03f8-1840-4fef-9fe1-4f1e0ee9d8ef)

![image](https://github.com/user-attachments/assets/bc421424-2f9a-4ca9-bf47-46c78905b0d3)


