#include <math.h>
#include <stdio.h>
#include "complejos.h"

//Función para crear un numero complejo
Complejo CrearComplejo (float re, float im){
    Complejo c;
    c.parteReal=re;
    c.parteImaginaria=im;
    return c;
}

//Asignar un valor a la parte real
void AsignaReal (Complejo *c, float r){
    c -> parteReal= r;
}

//Asignar un valor a la parte real
void AsignaImaginaria (Complejo *c, float i){
    c -> parteImaginaria= i;
}

//Obtener la parte real
float parteReal (Complejo c){
    return c.parteReal;
}

//Obtener la parte real
float parteImaginaria(Complejo c){
    return c.parteImaginaria;
}

//Calcular el modulo
double Modulo(Complejo c) {
    return sqrt(c.parteReal *c.parteReal + c.parteImaginaria *c.parteImaginaria) ;
}

//Sumar dos numeros complejos
Complejo Suma (Complejo c1, Complejo c2){
    Complejo s;
    s.parteReal = c1.parteReal + c2.parteReal;
    s.parteImaginaria = c1.parteImaginaria + c2.parteImaginaria;
    return s;
}

//Imprimir un numero complejo 
void ImprimirComplejo (Complejo* c){
    printf("%.2f + %.2fi \n", c->parteReal, c->parteImaginaria);
}

