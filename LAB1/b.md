# b. Escriba un programa que permita determinar si un número es par o impar 
```

#include <stdio.h>

int main() {
    int numero;

    // Entrada y salida en una sola línea de código
    printf("Ingrese un número entero: ");
    if (scanf("%d", &numero) != 1) {
        // Verificación de errores
        fprintf(stderr, "Entrada no válida.\n");
        return 1; // Código de error
    }

    // Verificación y salida optimizada
    printf("%d es un número %s.\n", numero, (numero % 2 == 0) ? "par" : "impar");

    return 0; // Código de éxito
}

```
![image](https://github.com/user-attachments/assets/e6cb22db-b790-4cc1-810b-aae04c219ef2)

![image](https://github.com/user-attachments/assets/8a32fe6a-1102-4d18-ac07-0315e2370da3)

![image](https://github.com/user-attachments/assets/b0f1c1a7-dfb1-483c-b50b-dcfc8048a7b6)

![image](https://github.com/user-attachments/assets/31d53e03-6df6-41af-8db9-73db6a25c451)
