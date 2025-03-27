# Escriba un programa que permita calcular el factorial de un número.

````

#include <stdio.h>

// Función para calcular el factorial de un número
unsigned long long factorial(int numero) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;

    // Solicitar el número al usuario y verificar entrada
    printf("Ingrese un número entero no negativo: ");
    if (scanf("%d", &numero) != 1 || numero < 0) {
        fprintf(stderr, "Error: Entrada no válida.\n");
        return 1;
    }

    // Mostrar el resultado directamente
    printf("Factorial de %d: %llu\n", numero, factorial(numero));

    return 0;
}




````

![image](https://github.com/user-attachments/assets/b370e3fb-2f35-443d-9890-a5a800064596)

![image](https://github.com/user-attachments/assets/c7a16001-9682-4b29-99b5-24268d8c9def)


![image](https://github.com/user-attachments/assets/61aef3c4-4130-4c51-b23c-04a7e19286e2)


![image](https://github.com/user-attachments/assets/06a48efb-0f2d-4f20-8d04-62c4613ff2f4)


