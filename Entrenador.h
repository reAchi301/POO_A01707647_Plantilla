#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;

class Entrenador : public Persona {
private:
  double Victorias;
  double Derrotas;
  double Empates;
  //Se buscara tener el numero de victorias y el numero de derrotas para poder calcular el promedio de victorias
public:
  Entrenador();
  Entrenador(string NP, int E, float S, int T,int Vc, int Dr, int Em);

  double CalculaPromedio();

  void setVictory(double);
  double getVictory();
  void setDerrota(double);
  double getDerrota();
  void setEmpate(double);
  double getEmpate();
};
#endif