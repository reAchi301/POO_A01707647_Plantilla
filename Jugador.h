#ifndef JUGADOR.H
#define JUGADOR.H

#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

class Jugador : public Persona{
private:

int goles;
int asistencias;
string posicion;

public:
Jugador();
Jugador(string NP, int E, float S, int T, int G, int A, string P);
void setGoles(int);
int getGoles();
void setAsistencias(int);
int getAsistencias();
void setPosicion(string);
string getPosicion();    
};


#endif