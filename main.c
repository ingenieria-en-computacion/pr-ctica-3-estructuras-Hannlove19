#include <stdio.h>
#include "complejos.h"

//Ejercicio de prueba

int main() {
    // Crear dos números complejos
    Complejo c1 = CrearComplejo(3.0, 4.0);
    Complejo c2 = CrearComplejo(1.5, -2.5);
   

    // Imprimir los números complejos
    printf ("\n");
    printf("Numero complejo 1= ");
    ImprimirComplejo(&c1);
    printf("Numero complejo 2= ");
    ImprimirComplejo(&c2);
    printf ("\n");


    // Suma de complejos
    Complejo suma = Suma(c1, c2);
    printf("Suma de c1 + c2 = ");
    ImprimirComplejo(&suma);
    printf ("\n");

    // Módulos de los números complejos
    printf("Modulo de c1= %.2f\n", Modulo(c1));
    printf("Modulo de c2= %.2f\n", Modulo(c2));
    printf ("\n");

    return 0;
}
