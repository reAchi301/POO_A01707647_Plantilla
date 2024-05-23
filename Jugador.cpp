#include "Persona.h"
#include "Jugador.h"
#include <iostream>
#include <string>

Jugador::Jugador(){
  goles = 0;
  asistencias = 0;
  posicion = "";
}

Jugador::Jugador(string NP, int E, float S, int T, int G, int A, string P):Persona(NP,E, S, T){
  goles = G;
  asistencias = A;
  posicion = P;
}


void Jugador::setGoles(int Gs){
  goles = Gs;
}

int Jugador::getGoles() { 
  return goles;
}

void Jugador::setAsistencias(int As){
asistencias=As;
}
int Jugador::getAsistencias(){
  return asistencias;
}

void Jugador::setPosicion(string Pos){
  posicion=Pos;
}
string Jugador::getPosicion()const{
  return posicion;
} 