#ifndef PERSONA_H
#define PERSONA_H

#include "Jugador.h"
#include "Entrenador.h"
#include "Persona.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const int MAX = 18; 

class Equipo{
private:
string nombre;
string division;
string titulos;
float presupuesto_total;
Jugador jugador;
Entrenador entrenador;

Jugador * plantilla[MAX];
int jugadores;

public:
Equipo();
Equipo (string N, string D, string T, Jugador J, Entrenador E);


void ImprimeEquipo();
void CreaEquipo();
float calculaPresupuestoTotal();

void setNombre(string nom);
string getNombre();
void setDivision(string div);
string getDivision();
void setTitulos(string tit);
string getTitulos();
void setJugador(Jugador jug);
Jugador getJugador();
void setEntrenador(Entrenador ent);                         
Entrenador getEntrenador();
};

#endif