![image](https://github.com/user-attachments/assets/bec3c6e7-645f-421a-9724-4605ff1baf99)


````

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Función para generar un número aleatorio entre -1 y 1
double numero_aleatorio() {
    return (double)rand() / RAND_MAX * 2.0 - 1.0;
}

// Función para aproximar el valor de π usando Monte Carlo
double aproximar_pi(int total_puntos) {
    int aciertos = 0;
    
    for (int i = 0; i < total_puntos; ++i) {
        double x = numero_aleatorio();
        double y = numero_aleatorio();
        
        // Verificar si el punto cae dentro del círculo
        if (x * x + y * y <= 1.0) {
            ++aciertos;
        }
    }
    
    // Fórmula para aproximar π
    return 4.0 * aciertos / total_puntos;
}

int main() {
    const int total_puntos = 1000000;
    
    // Inicializar la semilla para números aleatorios
    srand(time(NULL));
    
    // Calcular y mostrar la aproximación de π
    double pi_aproximado = aproximar_pi(total_puntos);
    printf("Aproximación de π con %d puntos: %.6f\n", total_puntos, pi_aproximado);
    
    return 0;
}


````

![image](https://github.com/user-attachments/assets/91e4929b-6e46-4afc-9416-6c95bf2850c4)

