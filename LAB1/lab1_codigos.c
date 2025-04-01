//a Desarrolla un programa que permita ingresar 2 números y luego realiza la suma y la rest
#include <stdio.h>
int main() {
// Declaramos las variables para almacenar los números ingresados por el usuario
  int num1, num2, suma, resta;
// Solicitamos al usuario que ingrese dos números
  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);
// Realizamos las operaciones de suma y resta
  suma = num1 + num2;
  resta = num1 - num2;
// Mostramos los resultados en la pantalla
  printf("La suma de %d y %d es: %d\n", num1, num2, suma);
  printf("La resta de %d y %d es: %d\n", num1, num2, resta);
  return 0; // Indicamos que el programa finalizó correctamente
}
//b Escriba un programa que permita determinar si un número es par o impa

#include <stdio.h>
int main() {
// Declaramos la variable para almacenar el número ingresado por el usuario
  int num;
// Solicitamos al usuario que ingrese un número
  printf("Ingrese un número: ");
  scanf("%d", &num);

// Determinamos si el número es par o impar usando el operador módulo
  if (num % 2 == 0) {
    printf("El número %d es par.\n", num);
  } else {
    printf("El número %d es impar.\n", num);
  }
  return 0; // Indicamos que el programa finalizó correctamente
}
// c Escriba un programa que permita calcular el factorial de un número

#include <stdio.h>
int main() {
// Declaramos las variables necesarias
  int num, i;
  unsigned long long factorial = 1; // Usamos unsigned long long para valores grandes
// Solicitamos al usuario que ingrese un número entero positivo
  printf("Ingrese un número entero positivo: ");
  scanf("%d", &num);
// Verificamos que el número sea no negativo
  if (num < 0) {
    printf("El factorial no está definido para números negativos.\n");
  } else {
// Calculamos el factorial usando un bucle for
    for (i = 1; i <= num; i++) {
      factorial *= i; // Multiplicamos iterativamente
    }
// Mostramos el resultado
    printf("El factorial de %d es: %llu\n", num, factorial);
  }
  return 0; // Indicamos que el programa finalizó correctamente
}
// d Escriba un programa que permita leer un número y calcular la suma de los primeros N números naturales
#include <stdio.h>
int main() {
// Declaramos las variables necesarias
  int num, i, suma = 0;
// Solicitamos al usuario que ingrese un número entero positivo
  printf("Ingrese un número entero positivo: ");
  scanf("%d", &num);
// Verificamos que el número sea positivo
  if (num < 0) {
  printf("Por favor, ingrese un número positivo.\n");
  } else {
// Calculamos la suma de los primeros N números naturales
    for (i = 1; i <= num; i++) {
      suma += i; // Acumulamos la suma
    }
// Mostramos el resultado
    printf("La suma de los primeros %d números naturales es: %d\n", num, suma);
  }
  return 0; // Indicamos que el programa finalizó correctamente
}
// e Escriba un programa que permita calcular el área de un triángulo
#include <stdio.h>
int main() {
// Declaramos las variables para la base, la altura y el área
  float base, altura, area;
// Solicitamos al usuario que ingrese la base y la altura del triángulo
  printf("Ingrese la base del triángulo: ");
  scanf("%f", &base);
  printf("Ingrese la altura del triángulo: ");
  scanf("%f", &altura);
// Calculamos el área usando la fórmula: área = (base * altura) / 2
  area = (base * altura) / 2;
// Mostramos el resultado
  printf("El área del triángulo es: %.2f\n", area);
  return 0; // Indicamos que el programa finalizó correctamente
}
// f Escriba un programa que encuentre el máximo y el mínimo de 3 números
#include <stdio.h>
int main() {
// Declaramos las variables para almacenar los tres números
  int num1, num2, num3;
  int max, min;
// Solicitamos al usuario que ingrese tres números
  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);
  printf("Ingrese el tercer número: ");
  scanf("%d", &num3);
// Inicializamos max y min con el primer número
  max = num1;
  min = num1;
// Comparamos con el segundo número
  if (num2 > max) {
    max = num2;
  }
  if (num2 < min) {
    min = num2;
  }
// Comparamos con el tercer número
  if (num3 > max) {
    max = num3;
  }
  if (num3 < min) {
    min = num3;
  }
// Mostramos los resultados
  printf("El número máximo es: %d\n", max);
  printf("El número mínimo es: %d\n", min);
  return 0; // Indicamos que el programa finalizó correctamente
}
// g Escriba un programa que determine si un número es primo
#include <stdio.h>
int main() {
// Declaramos las variables necesarias
  int num, i, esPrimo = 1; // esPrimo se inicializa en 1 (asumimos que es primo)
// Solicitamos al usuario que ingrese un número entero positivo
  printf("Ingrese un número entero positivo: ");
  scanf("%d", &num);
// Verificamos que el número sea mayor que 1 (el 1 no es primo)
  if (num <= 1) {
    esPrimo = 0;
  } else {
// Comprobamos si el número tiene divisores distintos de 1 y él mismo
    for (i = 2; i * i <= num; i++) {
      if (num % i == 0) {
        esPrimo = 0; // Si tiene un divisor, no es primo
        break; // Terminamos el bucle porque ya sabemos que no es primo

      }
    }
  }
// Mostramos el resultado
  if (esPrimo) {
    printf("El número %d es primo.\n", num);
  } else {
    printf("El número %d no es primo.\n", num);
  }
  return 0; // Indicamos que el programa finalizó correctamente
}
// h Escriba un programa que permita imprimir la tabla de multiplicar de un número determinado. Como requerimiento “El usuario debe de poder ingresar el número el cual desea la tabla” y “La tabla debe de imprimirse fila por fila ejem. 5 x 3 = 15”
#include <stdio.h>
int main() {
  int numero;
// Solicitar al usuario el número para la tabla de multiplicar
  printf("Ingrese un número para ver su tabla de multiplicar: ");
  scanf("%d", &numero);
// Imprimir la tabla de multiplicar del 1 al 12
  printf("Tabla de multiplicar del %d:\n", numero);
  for (int i = 1; i <= 12; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }
  return 0;
}
// i Una simulación Monte Carlo usa números aleatorios y probabilidad para resolver problemas. Tiene muchas aplicaciones en matemática computacional, física, química, y finanzas. Vamos a usar la simulación Monte Carlo para estimar el valor de 𝝅. La siguiente figura muestra un círculo inscrito en un cuadrado. Asumamos que el radio del círculo es 1. Por lo tanto, el área del círculo 𝝅. Y el área del cuadrado es 4. Si se genera aleatoriamente un punto dentro del cuadrado, la probabilidad que el punto caiga en el círculo es areaCirculo/areaCuadrado=𝝅/4. Escriba un programa que determine el valor aproximado de 𝝅, para lo cual, considere que un punto está dado por sus coordenadas x, y. Genere aleatoriamente 1000000 puntos dentro del cuadrado, sea la variable nAciertos que denota la cantidad de puntos que caen en el círculo. Se puede determinar qué nAciertos es aproximadamente 1000000*(𝝅/4), por lo tanto, 𝝅 se puede aproximar como 4*nAciertos/1000000. Use la función random.random() para generar números decimales aleatorios positivos y negativos en el intervalo (-1 , 1)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int i, nAciertos = 0, totalPuntos = 1000000;
  double x, y, piAprox;
// Inicializa la semilla para la generación de números aleatorios
  srand(time(NULL));
// Genera 1000000 de puntos dentro del cuadrado (-1,1) x (-1,1)
  for (i = 0; i < totalPuntos; i++) {
// Genera un número aleatorio entre -1 y 1 para x y y
    x = (double)rand() / RAND_MAX * 2.0 - 1.0;
    y = (double)rand() / RAND_MAX * 2.0 - 1.0;
// Comprueba si el punto está dentro del círculo de radio 1
    if (x * x + y * y <= 1) {
      nAciertos++;
    }
  }
// Calcula la aproximación de pi usando la relación pi ˜ 4 * (nAciertos / totalPuntos)
  piAprox = 4.0 * nAciertos / totalPuntos;
// Muestra el valor aproximado de pi
  printf("Estimación de pi usando el método Monte Carlo: %f\n", piAprox);
  return 0;
}
//j Dado los vectores X e Y que contienen las coordenadas (Xi,Yi) de N puntos en el plano cartesiano, determinar: i. El radio del menor círculo, con centro en el origen de coordenadas, que encierre a todos los puntos. ii. El punto que se encuentra más alejado del eje de las ordenadas (Y) iii. La distancia mayor entre los puntos y mostrar los puntos que cumplieron la condición. iv. Determinar la distancia del origen de coordenadas a la recta que pasa por los puntos que tuvieron la mayor distancia

#include <stdio.h>
#include <math.h>
// Función para calcular la distancia euclidiana entre dos puntos
double distancia(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main() {
  int N;
  printf("Ingrese el número de puntos: ");
  scanf("%d", &N);
  double X[N], Y[N];
  printf("Ingrese las coordenadas (X, Y) de los %d puntos:\n", N);
  for (int i = 0; i < N; i++) {
    printf("Punto %d: ", i + 1);
    scanf("%lf %lf", &X[i], &Y[i]);
  }
// i. Radio del menor círculo centrado en el origen que encierra todos los puntos
  double max_radio = 0;
  for (int i = 0; i < N; i++) {
    double r = sqrt(X[i] * X[i] + Y[i] * Y[i]);
    if (r > max_radio) {
      max_radio = r;
    }
  }
  printf("\n(i) El radio del menor círculo centrado en el origen es: %.2lf\n", max_radio);
// ii. Punto más alejado del eje Y (mayor valor absoluto de X)
  double max_dist_x = 0;
  int idx_max_x = 0;
  for (int i = 0; i < N; i++) {
    if (fabs(X[i]) > max_dist_x) {
      max_dist_x = fabs(X[i]);
      idx_max_x = i;
    }
  }
  printf("(ii) El punto más alejado del eje Y es: (%.2lf, %.2lf)\n", X[idx_max_x], Y[idx_max_x]);
// iii. Determinar la mayor distancia entre los puntos y mostrar esos puntos
  double max_dist = 0;
  int p1 = 0, p2 = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      double d = distancia(X[i], Y[i], X[j], Y[j]);
      if (d > max_dist) {
        max_dist = d;
        p1 = i;
        p2 = j;
      }
    }
  }
  printf("(iii) La mayor distancia entre los puntos es: %.2lf\n", max_dist);
  printf(" Puntos: (%.2lf, %.2lf) y (%.2lf, %.2lf)\n", X[p1], Y[p1], X[p2], Y[p2]);
// iv. Distancia del origen a la recta que pasa por los puntos más distantes
  double A = Y[p2] - Y[p1];
  double B = X[p1] - X[p2];
  double C = X[p2] * Y[p1] - X[p1] * Y[p2];
  double distancia_origen_recta = fabs(C) / sqrt(A * A + B * B);
  printf("(iv) La distancia del origen a la recta que pasa por los puntos más distantes es:
%.2lf\n", distancia_origen_recta);
  return 0;
}
