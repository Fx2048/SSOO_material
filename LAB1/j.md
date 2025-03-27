### Dado los vectores X e Y que contienen las coordenadas (Xi,Yi) de N puntos en el plano cartesiano, determinar: 
i.El radio del menor círculo, con centro en el origen de coordenadas, que 
encierre a todos los puntos. 
ii.El punto que se encuentra más alejado del eje de las ordenadas (Y) 
iii.La distancia mayor entre los puntos y mostrar los puntos que cumplieron la 
condición. 
iv.Determinar la distancia del origen de coordenadas a la recta que pasa por los 
puntos que tuvieron la mayor distancia.

````
#include <stdio.h>
#include <math.h>

// Función para calcular la distancia entre dos puntos
double distancia(double x1, double y1, double x2, double y2) {
    return hypot(x2 - x1, y2 - y1);
}

// Función para calcular la distancia del origen a una recta
double distancia_origen_recta(double x1, double y1, double x2, double y2) {
    double numerador = fabs((y2 - y1) * 0 - (x2 - x1) * 0 + (x2 * y1 - y2 * x1));
    double denominador = distancia(x1, y1, x2, y2);
    return numerador / denominador;
}

int main() {
    int N;
    printf("Ingrese el número de puntos: ");
    if (scanf("%d", &N) != 1 || N <= 1) {
        fprintf(stderr, "Error: Entrada no válida.\n");
        return 1;
    }

    double X[N], Y[N];
    printf("Ingrese las coordenadas (x, y) de %d puntos:\n", N);
    for (int i = 0; i < N; ++i) {
        if (scanf("%lf %lf", &X[i], &Y[i]) != 2) {
            fprintf(stderr, "Error: Entrada no válida.\n");
            return 1;
        }
    }

    // Variables para resultados
    double radio_max = 0.0;
    double max_dist_x = 0.0;
    int idx_max_x = 0;
    double max_distancia = 0.0;
    int idx1 = 0, idx2 = 1;

    // Cálculos principales
    for (int i = 0; i < N; ++i) {
        // 1. Radio del menor círculo con centro en el origen
        double distancia_origen = distancia(0, 0, X[i], Y[i]);
        if (distancia_origen > radio_max) {
            radio_max = distancia_origen;
        }

        // 2. Punto más alejado del eje Y (ordenadas)
        if (fabs(X[i]) > max_dist_x) {
            max_dist_x = fabs(X[i]);
            idx_max_x = i;
        }

        // 3. Mayor distancia entre dos puntos
        for (int j = i + 1; j < N; ++j) {
            double dist_ij = distancia(X[i], Y[i], X[j], Y[j]);
            if (dist_ij > max_distancia) {
                max_distancia = dist_ij;
                idx1 = i;
                idx2 = j;
            }
        }
    }

    // 4. Distancia del origen a la recta que pasa por los puntos más alejados
    double distancia_recta = distancia_origen_recta(X[idx1], Y[idx1], X[idx2], Y[idx2]);

    // Resultados finales
    printf("\nResultados:\n");
    printf("1. Radio del menor círculo: %.6f\n", radio_max);
    printf("2. Punto más alejado del eje Y: (%.6f, %.6f)\n", X[idx_max_x], Y[idx_max_x]);
    printf("3. Mayor distancia entre dos puntos: %.6f\n", max_distancia);
    printf("   Puntos: (%.6f, %.6f) y (%.6f, %.6f)\n", X[idx1], Y[idx1], X[idx2], Y[idx2]);
    printf("4. Distancia del origen a la recta que pasa por estos puntos: %.6f\n", distancia_recta);

    return 0;
}
````


![image](https://github.com/user-attachments/assets/af34fb58-abb7-4e8a-a303-96e36cb956ed)

![image](https://github.com/user-attachments/assets/eebf0906-2791-44e8-957a-03ad62e39d18)





