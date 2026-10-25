


//  importa la libreria estandar de entra y salida
#include <stdio.h>

void main() {

    char x = 'c' ;  // se define una variable entera
    char *mi_puntero = &x; // se define un apuntador o puntero

    printf("Valor de x: %c\n", x); // se muestr el valor de la variable
    printf("Valor del  puntero (dirección): %p\n", mi_puntero); // se muestra la direccion en memoria
    printf("Valor apuntado por mi_puntero: %c\n", *mi_puntero); // el valor que contiene esa direccion
}

    // & Asigna la direccion de una variable a un puntero
   // * Permite acceder o modificar el valor almacenado en la direccion apuntada 
   
