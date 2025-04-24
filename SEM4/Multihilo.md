# Desarrollar un concepto para una aplicación multihilo utilizando uno de los modelos de ejecución discutidos (Jefe/Trabajador, Equipo de Trabajo, Línea de Ensamblado)



# 1. **Selección del Modelo:**

# Concepto: Sistema de búsqueda de patrones en grandes conjuntos de datos
El objetivo es crear una aplicación multihilo en C que realice búsquedas paralelas de patrones específicos dentro de enormes conjuntos de datos. 
El "jefe" (hilo principal) distribuye bloques de datos entre varios "trabajadores" (hilos secundarios) para realizar operaciones, como calcular el promedio de bloques numéricos.

Elegiré el modelo **Jefe/Trabajador**, ya que este se adapta muy bien a sistemas en los que una tarea principal se divide en subtareas, como lo haría un jefe delegando trabajo a varios trabajadores.

### **Concepto:**

### 2. **Descripción del Concepto:**
   Propuse una aplicación que busca patrones específicos en grandes conjuntos de datos. El "jefe" coordina la división de tareas y delega el procesamiento a los "trabajadores," mientras estos procesan sus partes de forma paralela.

### **Arquitectura:**
1. El **jefe** asigna tareas a los trabajadores (por ejemplo, dividir datos en partes).
2. Cada **trabajador** procesa su parte de forma independiente.
3. El **jefe** recopila los resultados y genera el resultado final.

![image](https://github.com/user-attachments/assets/e8bed946-f742-48d9-beb3-7da2095c7b64)


### **Código en C usando Pthreads**

```c
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_TRABAJADORES 4  // Número de trabajadores
#define TAM_BLOQUE 5        // Tamaño de cada bloque de datos

// Estructura para pasar datos a los trabajadores
typedef struct {
    int* datos;
    int inicio;
    int fin;
    double resultado;
} Tarea;

// Función que realiza el cálculo en cada trabajador
void* trabajador(void* arg) {
    Tarea* tarea = (Tarea*)arg;
    double suma = 0;

    for (int i = tarea->inicio; i < tarea->fin; i++) {
        suma += tarea->datos[i];
    }
    tarea->resultado = suma / (tarea->fin - tarea->inicio);  // Promedio
    pthread_exit(NULL);
}

int main() {
    int datos[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    pthread_t hilos[NUM_TRABAJADORES];
    Tarea tareas[NUM_TRABAJADORES];
    int tam_total = sizeof(datos) / sizeof(datos[0]);
    double resultado_final = 0;

    // Dividir tareas entre los trabajadores
    for (int i = 0; i < NUM_TRABAJADORES; i++) {
        tareas[i].datos = datos;
        tareas[i].inicio = i * TAM_BLOQUE;
        tareas[i].fin = (i + 1) * TAM_BLOQUE;
        pthread_create(&hilos[i], NULL, trabajador, &tareas[i]);
    }

    // Recopilar resultados
    for (int i = 0; i < NUM_TRABAJADORES; i++) {
        pthread_join(hilos[i], NULL);
        resultado_final += tareas[i].resultado;
    }

    resultado_final /= NUM_TRABAJADORES;  // Promedio final
    printf("Promedio final: %.2f\n", resultado_final);

    return 0;
}
```


![image](https://github.com/user-attachments/assets/303d5e68-af5c-4d33-9d50-990ef5ef01c8)


### **Explicación del código:**
1. **División de datos:** El jefe divide los datos en bloques, asignando a cada trabajador su rango de índices.
2. **Procesamiento:** Cada trabajador calcula el promedio de su bloque y almacena el resultado.
3. **Recopilación:** El jefe espera que los trabajadores terminen (`pthread_join`) y luego promedia los resultados para generar el promedio final.

Este enfoque es ideal para tareas que se pueden dividir en subtareas independientes.


### 3. **Interacción de Hilos:**
   Detallé cómo el hilo principal (jefe) distribuye bloques de datos y recopila los resultados de los hilos secundarios (trabajadores), y cómo cada trabajador realiza su búsqueda independientemente antes de regresar su resultado. En el código, se observa esta interacción a través de `pthread_create` y `pthread_join`.

### 4. **Beneficios y Ventajas:**
   - **Escalabilidad:** Es sencillo añadir más hilos para procesar mayores cantidades de datos.
   - **Simplicidad:** La estructura jefe/trabajador facilita la implementación y el manejo de tareas.
   - **Eficiencia:** El paralelismo reduce el tiempo necesario para completar las tareas, aprovechando al máximo los recursos disponibles.

### 5. **Creatividad y Originalidad:**
   Incorporé la idea de buscar patrones en cadenas de texto, lo que no solo tiene aplicaciones prácticas en análisis de datos, sino que también demuestra flexibilidad en el uso del modelo. Además, el concepto permite adaptarse a diferentes escenarios, como búsquedas en bases de datos genómicas, análisis de textos o inspección de logs de software.


