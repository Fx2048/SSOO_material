# 🎯Desarrolla un conversor de unidades que permita convertir °C a °F, Meros a Pies y Kg a Libras. El programa debe contar con un menú de opciones, y con sus  respectivas validaciones. 
## ✅ [Archivo de código 📱🌐](https://drive.google.com/file/d/1QDd_MgQBB17Oc9Zamn_MC3djq1OnGhbA/view?usp=sharing)
## ✅Código: 🔽 
````
# include <stdio.h>

// Funciones de conversión
double celsius_a_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double metros_a_pies(double metros) {
    return metros * 3.28084;
}

double kg_a_libras(double kg) {
    return kg * 2.20462;
}

// Función para obtener entrada numérica válida
double get_double_input(const char *prompt) {
    double value;
    int valid;
    do {
        printf("%s", prompt);
        valid = scanf("%lf", &value);
        while (getchar() != '\n'); // Limpiar el buffer de entrada
        if (!valid) {
            printf("Entrada no valida. Por favor, ingrese un numero valido.\n");
        }
    } while (!valid);
    return value;
}

int main() {
    int opcion;
    do {
        // Mostrar el menú
        printf("\nConversor de Unidades\n");
        printf("1. Celsius a Fahrenheit\n");
        printf("2. Metros a Pies\n");
        printf("3. Kilogramos a Libras\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        
        if (scanf("%d", &opcion) != 1) {
            printf("Entrada no valida. Debe ingresar un numero.\n");
            while (getchar() != '\n'); // Limpiar buffer de entrada
            continue;
        }

        switch (opcion) {
            case 1:
                {
                    double celsius = get_double_input("Ingrese la temperatura en Celsius: ");
                    printf("%.2f°C equivalen a %.2f Fahrenheit\n", celsius, celsius_a_fahrenheit(celsius));
                }
                break;
            case 2:
                {
                    double metros = get_double_input("Ingrese la distancia en metros: ");
                    printf("%.2f metros equivalen a %.2f pies\n", metros, metros_a_pies(metros));
                }
                break;
            case 3:
                {
                    double kg = get_double_input("Ingrese el peso en kilogramos: ");
                    printf("%.2f kg equivalen a %.2f libras\n", kg, kg_a_libras(kg));
                }
                break;
            case 4:
                printf("Saliendo del programa. Hasta luego\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 4);
    
    return 0;
}

````
## ✅Resultados:
![image](https://github.com/user-attachments/assets/abdc1b48-4a19-441c-afa2-d850c4f16b2f)

![image](https://github.com/user-attachments/assets/0a520510-230a-4856-8e40-6a870b6682ad)


##  ✅Validaciones:
![image](https://github.com/user-attachments/assets/11153fc8-0a1b-4bf8-bda4-3d44745a61d3)
