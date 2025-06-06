# Escriba un programa que permita calcular el área de un triángulo 
````

#include <stdio.h>

// Función para calcular el área de un triángulo
double calcular_area(double base, double altura) {
    return (base * altura) / 2.0;
}

int main() {
    double base, altura;

    // Solicitar base y altura al usuario
    printf("Ingrese la base y la altura del triángulo separados por un espacio: ");
    if (scanf("%lf %lf", &base, &altura) != 2 || base <= 0 || altura <= 0) {
        fprintf(stderr, "Error: Entrada no válida. Base y altura deben ser números positivos.\n");
        return 1;
    }

    // Mostrar el resultado directamente
    printf("El área del triángulo es: %.2f\n", calcular_area(base, altura));

    return 0;
}


````

![image](https://github.com/user-attachments/assets/b9adf447-554b-4757-90df-790dcab719ca)


![image](https://github.com/user-attachments/assets/5f192af4-f881-4241-98b5-aefebfa85d89)



1. ¿Para qué sirve double?
double: Es un tipo de dato en C que representa números de punto flotante de doble precisión. Esto significa que puede almacenar números con decimales (como 3.14, 0.001) y tiene un rango y precisión mayores que un float.
Rango: Aproximadamente ±1.7×10308\pm 1.7 \times 10^{308}\pm 1.7 \times 10^{308}
 (muy grande).

Precisión: Alrededor de 15-17 dígitos significativos.

Uso en el código:
En double base, altura;: Declara las variables base y altura como double para permitir entradas decimales (por ejemplo, 5.5 o 3.14).

En double calcular_area(double base, double altura): La función toma parámetros base y altura como double y retorna el área como double.



