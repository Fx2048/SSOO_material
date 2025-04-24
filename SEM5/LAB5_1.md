````

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PEDIDOS 100
#define MAX_NOMBRE 50
#define MAX_PRODUCTO 50

typedef struct {
    char nombreCliente[MAX_NOMBRE];
    char producto[MAX_PRODUCTO];
    int cantidad;
} Pedido;

Pedido pedidos[MAX_PEDIDOS];
int totalPedidos = 0;

// Función para agregar un nuevo pedido
void agregarPedido() {
    if (totalPedidos >= MAX_PEDIDOS) {
        printf("¡No se pueden agregar más pedidos!\n");
        return;
    }

    printf("\n--- Nuevo Pedido ---\n");
    printf("Nombre del cliente: ");
    getchar(); // Limpiar buffer
    fgets(pedidos[totalPedidos].nombreCliente, MAX_NOMBRE, stdin);
    strtok(pedidos[totalPedidos].nombreCliente, "\n"); // Eliminar salto de línea

    printf("Producto: ");
    fgets(pedidos[totalPedidos].producto, MAX_PRODUCTO, stdin);
    strtok(pedidos[totalPedidos].producto, "\n");

    printf("Cantidad: ");
    scanf("%d", &pedidos[totalPedidos].cantidad);

    totalPedidos++;
    printf("✅ Pedido agregado con éxito.\n");
}

// Función para mostrar todos los pedidos
void mostrarPedidos() {
    printf("\n--- Lista de Pedidos ---\n");

    if (totalPedidos == 0) {
        printf("No hay pedidos registrados.\n");
        return;
    }

    for (int i = 0; i < totalPedidos; i++) {
        printf("Pedido #%d:\n", i + 1);
        printf("Cliente: %s\n", pedidos[i].nombreCliente);
        printf("Producto: %s\n", pedidos[i].producto);
        printf("Cantidad: %d\n\n", pedidos[i].cantidad);
    }
}

// Menú principal
int main() {
    int opcion;

    do {
        printf("\n=== Sistema de Pedidos ===\n");
        printf("1. Agregar Pedido\n");
        printf("2. Mostrar Pedidos\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                agregarPedido();
                break;
            case 2:
                mostrarPedidos();
                break;
            case 3:
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("❌ Opción inválida. Intente de nuevo.\n");
        }

    } while (opcion != 3);

    return 0;
}

````

![image](https://github.com/user-attachments/assets/eb07085c-33a4-4383-8465-929e904fd5b8)

