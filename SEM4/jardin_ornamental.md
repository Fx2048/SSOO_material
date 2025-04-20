# Un gran jardín ornamental se abre al público para que todos puedan apreciar sus fantásticas rosas, arbustos y plantas acuáticas. Por supuesto, se cobra una módica suma de dinero a la entrada, para lo cual se colocan dos torniquetes, uno en cada una de sus dos entradas. Se desea conocer cuánta gente ha ingresado al jardín, así que se instala una computadora conectada a ambos torniquetes: cada torniquete envía una señal cuando una persona ingresa al jardín.
Se realiza un modelo simplificado de la situación, así que no se estudiarán los detalles del hardware utilizado. Aquí es importante notar que los dos torniquetes son objetos que existen y se comportan en paralelo e independientemente: los eventos que generan no tienen un orden predecible.


Es decir, que cuando se escriba el software no se sabe en qué momento llegará cada visitante ni qué torniquete utilizará. Se simulará un experimento en el que 20 visitantes ingresan por cada torniquete. Al final de la simulación deberá haber 40 visitantes contados. Una implementación tentativa podría ser la siguiente




# Resolución:




---

### ✅ Implementación completa en C:

```c
#include <stdio.h>
#include <pthread.h>

#define VISITAS_POR_TORNIQUETE 20

int contador = 0;                  // Contador global
pthread_mutex_t mutex;            // Mutex para proteger el contador

// Función que simula un torniquete
void* torniquete(void* arg) {
    char* nombre = (char*)arg;

    for (int i = 0; i < VISITAS_POR_TORNIQUETE; i++) {
        pthread_mutex_lock(&mutex);   // Bloquear acceso al contador
        contador++;
        printf("%s: Persona ingresó. Total actual: %d\n", nombre, contador);
        pthread_mutex_unlock(&mutex); // Desbloquear
    }

    return NULL;
}

int main() {
    pthread_t hilo1, hilo2;

    // Inicializar el mutex
    pthread_mutex_init(&mutex, NULL);

    // Crear los hilos que simulan los dos torniquetes
    pthread_create(&hilo1, NULL, torniquete, "Torniquete A");
    pthread_create(&hilo2, NULL, torniquete, "Torniquete B");

    // Esperar a que ambos hilos terminen
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    // Imprimir resultado final
    printf("\nTotal de visitantes que ingresaron al jardín: %d\n", contador);

    // Destruir el mutex
    pthread_mutex_destroy(&mutex);

    return 0;
}
```

---

### 🔧 Cómo compilar y ejecutar (en Linux/macOS)

1. Guarda el código en un archivo, por ejemplo: `jardin.c`
2. Compílalo usando:

```bash
gcc -o jardin jardin.c -lpthread
```

3. Ejecútalo con:

```bash
./jardin
```

---

![image](https://github.com/user-attachments/assets/48f44f3e-3962-4889-9329-f7b3156e68b4)


### 🧠 ¿Qué hace este programa?

- **Simula los dos torniquetes** como hilos separados.
- Cada uno deja pasar 20 personas.
- Cada ingreso incrementa un contador global protegido con `mutex` para evitar errores por acceso concurrente.
- Muestra mensajes por consola con el torniquete y el número total acumulado.
- Al final, imprime el total esperado: `40`.

---
