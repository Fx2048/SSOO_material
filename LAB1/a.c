
#include <stdio.h>

int main()
{ 
    // declaramos variables a utilizar
    int num1, num2, sum, rest;
    
// solicitamos ingresar los numeros
    printf("ingresa primer numero:");
    scanf("%d", &num1);
    
    printf("ingresa el segundo numero:");
    scanf("%d",&num2);
    //realizamos operaciones de ejercicio
    
    sum = num1+num2;
    rest= num1-num2;
    
    // mostramos resultados
    printf( " La suma de  %d y %d es: %d  %d\n", num1, num2, sum );
    printf( " La rest de  %d y %d es: %d  %d\n", num1, num2, rest );
    return 0;
    
}
