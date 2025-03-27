# Escriba un programa que permita leer un número y calcular la suma de los primeros 
N números naturales 
````
#include <stdio.h>

// Función para calcular la suma de los primeros N números naturales
unsigned long long suma_naturales(int n) {
    return (unsigned long long)n * (n + 1) / 2;
}

int main() {
    int numero;

    // Solicitar el número al usuario y validar la entrada
    printf("Ingrese un número entero no negativo: ");
    if (scanf("%d", &numero) != 1 || numero < 0) {
        fprintf(stderr, "Error: Entrada no válida.\n");
        return 1;
    }

    // Mostrar el resultado directamente
    printf("La suma de los primeros %d números naturales es: %llu\n", 
           numero, suma_naturales(numero));

    return 0;
}
````
![image](https://github.com/user-attachments/assets/7da63fdb-216e-450a-88d5-65ce3820df92)


![image](https://github.com/user-attachments/assets/08ace11e-75f4-4dd6-8a17-45158a6319ba)


![image](https://github.com/user-attachments/assets/47cc451e-8d9f-4f53-a2be-ede725444683)




