#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.
#include <stdlib.h> // Incluye la biblioteca estándar para operaciones como malloc.
#define CAPACIDAD 3  // Define la capacidad de los marcos de página.

// Estructura para representar un marco de página que contiene la página y un bit de uso.
typedef struct
{
    int pagina;     // Número de página almacenada en el marco.
    int bit_uso;    // Bit que indica si la página ha sido usada recientemente.
} MarcoPagina;

MarcoPagina marcos[CAPACIDAD]; // Array de marcos de página con tamaño definido por CAPACIDAD.
int apuntador = 0;

// Función para inicializar los marcos de página.
void inicializar_marcos()
{
    for (int i = 0; i < CAPACIDAD; i++)
    {
        marcos[i].pagina = -1;  // Inicializa cada marco con una página inválida.
        marcos[i].bit_uso = 0;  // Inicializa el bit de uso a 0 para cada marco.
    }
}

// Función para verificar si una página está en los marcos.
int esta_pagina_en_marcos(int pagina)
{
    for (int i = 0; i < CAPACIDAD; i++)
    {
        if (marcos[i].pagina == pagina)
        {
            // Si la página está en algún marco.
            return 1;
        }
    }
    // Si la página no está en los marcos.
    return 0;
}

// Función para añadir una página a los marcos.
void agregar_pagina_a_marcos(int pagina)
{
    while (marcos[apuntador].bit_uso == 1)  // Mientras el bit de uso del marco actual sea 1.
    {
        marcos[apuntador].bit_uso = 0;  // Reinicia el bit de uso.
        apuntador = (apuntador + 1) % CAPACIDAD;  // Avanza el apuntador circularmente.
    }
    marcos[apuntador].pagina = pagina;  // Asigna la nueva página al marco.
    marcos[apuntador].bit_uso = 1;  // Establece el bit de uso a 1.
    apuntador = (apuntador + 1) % CAPACIDAD;  // Avanza el apuntador circularmente.
}

// Función para acceder a una página.
void acceder_pagina(int pagina)
{
    if (esta_pagina_en_marcos(pagina))  // Si la página ya está en los marcos.
    {
        // Encuentra la página.
        for (int i = 0; i < CAPACIDAD; i++)
        {
            if (marcos[i].pagina == pagina)
            {
                marcos[i].bit_uso = 1;  // Establece el bit de uso a 1.
                break;
            }
        }
    }
    else
    {
        agregar_pagina_a_marcos(pagina);  // Si no está, añade la página a los marcos.
    }
}

// Función para mostrar el estado actual de los marcos y bits de uso.
void mostrar_estado()
{
    printf("Marcos: ");
    for (int i = 0; i < CAPACIDAD; i++)
    {
        if (marcos[i].pagina != -1)
        {
            printf("%d ", marcos[i].pagina);  // Imprime el número de página.
        }
        else
        {
            printf("- ");  // Imprime un guion si no hay página.
        }
    }
    printf("\nBits de Uso: ");
    for (int i = 0; i < CAPACIDAD; i++)
    {
        printf("%d ", marcos[i].bit_uso);  // Imprime el bit de uso.
    }
    printf("\n");
}

// Función principal que ejecuta el programa.
int main() 
{
    inicializar_marcos();  // Inicializa los marcos de página.
    
    // Array de páginas a acceder.
    int paginas_para_acceder[] = {1, 2, 3, 1, 4, 1, 2, 5};
    
    // Calcula el número de páginas.
    int n = sizeof(paginas_para_acceder) / sizeof(paginas_para_acceder[0]);

    // Procesa las páginas.
    for (int i = 0; i < n; i++)
    {
        acceder_pagina(paginas_para_acceder[i]);  // Accede a la página.
        mostrar_estado();  // Muestra el estado de los marcos después de cada acceso.
    }

    return 0;  // Termina el programa.
}


