Definir constante MAX_PEDIDOS ← 100
Definir constante MAX_NOMBRE ← 50
Definir constante MAX_PRODUCTO ← 50

Definir estructura Pedido:
    nombreCliente : cadena de caracteres
    producto : cadena de caracteres
    cantidad : entero

Crear arreglo pedidos[MAX_PEDIDOS] de tipo Pedido
Inicializar totalPedidos ← 0

Función agregarPedido:
    Si totalPedidos ≥ MAX_PEDIDOS entonces
        Mostrar "¡No se pueden agregar más pedidos!"
        Salir de la función
    FinSi

    Mostrar "--- Nuevo Pedido ---"
    Pedir al usuario "Nombre del cliente: " y guardar en pedidos[totalPedidos].nombreCliente
    Pedir al usuario "Producto: " y guardar en pedidos[totalPedidos].producto
    Pedir al usuario "Cantidad: " y guardar en pedidos[totalPedidos].cantidad

    Incrementar totalPedidos en 1
    Mostrar "✅ Pedido agregado con éxito."

FinFunción

Función mostrarPedidos:
    Mostrar "--- Lista de Pedidos ---"

    Si totalPedidos = 0 entonces
        Mostrar "No hay pedidos registrados."
        Salir de la función
    FinSi

    Para i desde 0 hasta totalPedidos - 1 hacer
        Mostrar "Pedido #(i+1):"
        Mostrar "Cliente: ", pedidos[i].nombreCliente
        Mostrar "Producto: ", pedidos[i].producto
        Mostrar "Cantidad: ", pedidos[i].cantidad
    FinPara

FinFunción

Función principal:
    Definir opcion como entero

    Repetir
        Mostrar menú:
            "=== Sistema de Pedidos ==="
            "1. Agregar Pedido"
            "2. Mostrar Pedidos"
            "3. Salir"
            "Seleccione una opción: "
        Leer opcion

        Segun opcion hacer
            Caso 1:
                Llamar a agregarPedido()
            Caso 2:
                Llamar a mostrarPedidos()
            Caso 3:
                Mostrar "Saliendo del sistema..."
            Otro caso:
                Mostrar "❌ Opción inválida. Intente de nuevo."
        FinSegun

    Hasta que opcion = 3

FinFunción
