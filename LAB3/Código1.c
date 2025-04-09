# Escriba un programa que permita ingresar 5 números en un array, luego muestra
la suma de todos ello

````
#include <stdio.h>

int main()
{
    int numero[5], suma =0;
    for (int i=0 ; i<5; i++){
        printf("ingrese el numero %d : \n ",i+1);
        scanf(" %d", &numero[i]);
        
        suma +=numero[i];
    }
    printf("La suma es %d", suma);

    return 0;
}

````
