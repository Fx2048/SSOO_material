#include <stdio.h>
#include <string.h>

//definimos las constantes a utilizar en el problema
#define MAX_ESTUDIANTES 5
#define MAX_NOMBRE 30 //longitud de los nombres
    
//defino una estructura para el ingreso de los datos del problema
typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
}Estudiante;
    
//Función para el registro de los estudiantes
void registrarEstudiantes(Estudiante estudiantes[], int *registrados){
    //Verficiamos si ya se registraron el # máximo de estudiantes
    if(*registrados>=MAX_ESTUDIANTES){
        printf("Ya se registro los %d estudiantes.\n", MAX_ESTUDIANTES);
        return;
    }
//}
    
    //Inicializamos el bucle desde el número actual de los estudiantes registrados hasta el máximo
    for(int i = *registrados; i < MAX_ESTUDIANTES; i++){
        printf("\nEstudiante N° %d\n", i+1);
        
        //Pedimos el nombre del estudiantes
        printf("Nombre: ");
        getchar(); //Limpiar el buffer
        fgets(estudiantes[i].nombre, MAX_NOMBRE, stdin);
        
        //Validamos que la edad sea postiva
        do{
          printf("Edad: "); 
          scanf("%d", &estudiantes[i].edad);
          if(estudiantes[i].edad<=0){
            printf("Edad inválida. Ingrese nuevamente.\n");
          }
        }while(estudiantes[i].edad<=0);
        
        //Validamos que el promedio este en el rango de 0 a 20
        do{
          printf("Promedio (0 a 20): "); 
          scanf("%f", &estudiantes[i].promedio);
          if(estudiantes[i].promedio<0.0 || estudiantes[i].promedio>20.0){
            printf("Promedio inválido. Ingrese nuevamente.\n");
          }
        }while(estudiantes[i].promedio<0.0 || estudiantes[i].promedio>20.0);
        
        //Aumentamos el contador de estudiantes registrados
        (*registrados)++;
        printf("Estudiante registrado con éxito.\n");
    }
}
    
//Función para mostrar la lista de estudiantes registrados
void mostrarEstudiantes(Estudiante estudiantes[], int registrados){
    //Verficiamos si hay estudiantes registrados
    if(registrados == 0){
        printf("No hay estudiantes ingresados.\n");
        return;
    }
        
    //Mostrando los datos del estudiante registrados
    printf("\nListado de Estudiantes:\n");
    for(int i=0; i<registrados; i++){
        printf("\nEstudiante N° %d\n", i+1);
        printf("\nNombre: %s\n", estudiantes[i].nombre);
        printf("\nEdad: %d\n", estudiantes[i].edad);
        printf("\nPromedio: %.2f\n", estudiantes[i].promedio);
    }
}
   
int main() {
    
    //Arreglo para almacenar los Estudiantes
    Estudiante estudiante[MAX_ESTUDIANTES];
    
    //Variable para llevar la cuenta de los estudiantes registrados
    int registrados = 0;
    
    //Variable para mostrar la opción del menú
    int opcion;
    
    //Realizamos el menú principal del programa
    do{
        printf("\n--Registro de Estudiantes--\n");
        printf("1. Registrar estudiantes\n");
        printf("2. Mostrar estudiantes\n");
        printf("3. Salir\n");
        
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        
        //Procesamos las opciones elegidas por el usuario
        switch(opcion){
            case 1: 
                registrarEstudiantes(estudiante, &registrados);
                break;
            case 2:
                mostrarEstudiantes(estudiante, registrados);
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción Inválida. Intente nuevamente.\n");
        }
        
    }while (opcion != 3);
    
    return 0; //fin del programa
}
