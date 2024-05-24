#include "Persona.h"
#include "Entrenador.h"
#include <iostream>
#include <string>

using namespace std;

Entrenador::Entrenador(){
  Victorias = 0;
  Derrotas = 0;
  Empates = 0;
}

Entrenador::Entrenador(string NP, int E, float S, int T,int Vc, int Dr, int Em):Persona(NP,E, S, T){
  Victorias = Vc;
  Derrotas = Dr;
  Empates = Em;
}

double Entrenador::CalculaPromedio(){
  double promedio = Victorias/(Victorias+Derrotas+Empates);
  return promedio;
}

void Entrenador::setVictory(double Vic){
  Victorias = Vic;
}

double Entrenador :: getVictory(){
  return Victorias;
}

void Entrenador::setDerrota(double Der){
  Derrotas  = Der;
}

double Entrenador::getDerrota(){
  return Derrotas;
}

void Entrenador::setEmpate(double Emp){
  Empates = Emp;
}

double Entrenador::getEmpate(){
  return Empates;
}