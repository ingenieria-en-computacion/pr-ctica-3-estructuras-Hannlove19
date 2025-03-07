#ifndef __COMPLEJOS_H__
#define __COMPLEJOS_H__
#include <stdbool.h>

typedef struct {
    float parteReal;
    float parteImaginaria;
} Complejo;

typedef Complejo* PComplejo;

Complejo CrearComplejo (float, float);
void AsignaReal (Complejo *c, float);
void AsignaImaginaria (Complejo *c, float);
float parteReal (Complejo);
float parteImaginaria(Complejo);
double Modulo(Complejo);
Complejo Suma (Complejo, Complejo);
void ImprimirComplejo (Complejo*);


#endif
