````

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define TAMAÑO_BUFFER 5
#define NUM_ITEMS 10

int buffer[TAMAÑO_BUFFER];
int contador = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *productor(void *arg) {
    int i, item;

    for (i = 0; i < NUM_ITEMS; i++) {
        item = rand() % 100; // Genera un número aleatorio para el item
        pthread_mutex_lock(&mutex);
        while (contador == TAMAÑO_BUFFER) {
            pthread_mutex_unlock(&mutex);
            pthread_mutex_lock(&mutex);
        }
        buffer[contador++] = item;
        printf("Productor produce el item: %d\n", item);
        pthread_mutex_unlock(&mutex);
    }

    pthread_exit(NULL);
}

void *consumidor(void *arg) {
    int i, item;

    for (i = 0; i < NUM_ITEMS; i++) {
        pthread_mutex_lock(&mutex);
        while (contador == 0) {
            pthread_mutex_unlock(&mutex);
            pthread_mutex_lock(&mutex);
        }
        item = buffer[--contador];
        printf("Consumidor consume el item: %d\n", item);
        pthread_mutex_unlock(&mutex);
    }

    pthread_exit(NULL);
}

int main() {
    pthread_t th_productor, th_consumidor;

    // Crear threads para el productor y el consumidor
    pthread_create(&th_productor, NULL, productor, NULL);
    pthread_create(&th_consumidor, NULL, consumidor, NULL);

    // Esperar a que los threads terminen
    pthread_join(th_productor, NULL);
    pthread_join(th_consumidor, NULL);

    // Destruir el mutex
    pthread_mutex_destroy(&mutex);

    return 0;
}

````

![image](https://github.com/user-attachments/assets/f38608d5-b620-458f-a058-c6f5d1091fa2)

