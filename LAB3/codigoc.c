//Crea una estructura “Empleado” con nombre (vector de char), edad y sueldo.
//Luego lee los datos de 3 empleados, calcula el sueldo promedio y muestra los
//nombres de los que ganan más que el promedio.

#include <stdio.h>
#include <string.h>

int main(){
    char pal1[20],pal2[20];
    printf("Ingrese ambas palabras");
    scanf("%s, %s", pal1,pal2);
    if (strcmp(pal1, pal2)==0){
        printf("Son iguales");
    } else {
        printf("son diferentes");

  
    }
    return 0;
}
