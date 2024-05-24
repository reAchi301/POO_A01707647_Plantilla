#ifndef PERSONA_H
#define PERSONA_H

#include "Equipo.h"
#include <iostream>
#include <string>

using namespace std;

class Persona{

protected:
string nombrePersona;
int edad;
float salario;
int titulos;

public:
Persona();
Persona(string NP, int E, float S, int T);

void ImprimeInfo();

void setNomP(string);
string getNomP()const;
void setEdad(int);
int getEdad()const;  
void setSalP(float);
float getSalP()const;
void setTitP(int);
int getTitP()const;
};

#endif