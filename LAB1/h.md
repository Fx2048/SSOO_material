# Escriba un programa que permita imprimir la tabla de multiplicar de un número 
determinado. Como requerimiento “El usuario debe de poder ingresar el número el 
cual desea la tabla” y “La tabla debe de imprimirse fila por fila ejem. 5 x 3 = 15”.

````
#include <stdio.h>

// Función para imprimir la tabla de multiplicar de un número
void imprimir_tabla(int numero) {
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int numero;

    // Solicitar el número al usuario
    printf("Ingrese el número para generar su tabla de multiplicar: ");
    if (scanf("%d", &numero) != 1) {
        fprintf(stderr, "Error: Entrada no válida.\n");
        return 1;
    }

    // Llamar a la función para imprimir la tabla
    imprimir_tabla(numero);

    return 0;
}

````
![image](https://github.com/user-attachments/assets/1521e25e-c85d-4287-8ee8-1bdae0ef9258)

![image](https://github.com/user-attachments/assets/6a1ce502-f093-4bc3-aacc-54ffe7542ef2)


![image](https://github.com/user-attachments/assets/0c883fab-a504-4898-bfb3-b96957bd6148)
