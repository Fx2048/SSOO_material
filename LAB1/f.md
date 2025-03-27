# Escriba un programa que encuentre el máximo y el mínimo de 3 números 

````
#include <stdio.h>

// Función para encontrar el máximo de tres números
int maximo(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}

// Función para encontrar el mínimo de tres números
int minimo(int a, int b, int c) {
    return (a < b && a < c) ? a : (b < c ? b : c);
}

int main() {
    int a, b, c;

    // Solicitar los tres números en una sola entrada
    printf("Ingrese tres números enteros separados por espacios: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        fprintf(stderr, "Error: Entrada no válida.\n");
        return 1;
    }

    // Mostrar el resultado directamente
    printf("Máximo: %d\nMínimo: %d\n", maximo(a, b, c), minimo(a, b, c));

    return 0;
}

````
![image](https://github.com/user-attachments/assets/0834b81e-6560-4701-b462-db29ed534dc9)



