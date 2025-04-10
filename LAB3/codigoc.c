/// Escribe un programa que permita ingresar 2 palabras para luego determinar si son iguales o diferentes
#include <stdio.h>
int main(){
    //variables
    string palabra1, string palabra2;
    
    printf("Ingrese la palabra %s: \n" );
    scanf("%s:  \n", &palabra1);
    printf("Ingrese la palabra %s: \n" );
    scanf("%s:  \n", &palabra2);
    
    if (palabra1 == palabra2){
        printf("Son palabras identicas");
    }
    else:
        printf("Son diferentes")
    
    return 0; 
 }
 
