#include "Equipo.h"
#include <iostream>
#include <sstream>

using namespace std;

Equipo::Equipo(){
  nombre = "";
  division = "";
  titulos = "";
  jugadores = (0);
  
};

Equipo::Equipo (string N, string D, string T, Jugador J, Entrenador E){
  
};

void Equipo::ImprimeEquipo(){
  cout << "El nombre del equipo es: " << nombre << endl;
  cout << "La division del equipo es: " << division << endl;
  cout << "El equipo tiene: " << titulos << " titulos" << endl;
  cout << "La plantilla inicial es" << *plantilla << endl;
}

void Equipo::CreaEquipo(){
  plantilla[jugadores] = new Jugador("Jorge Warzone", 19,0.0,20,10,4,"defensa central");
  jugadores++;
  plantilla[jugadores] = new Jugador("Leonardo Gómez", 19,12.5,18,2,14,"lateral derecho");
  jugadores++;
  plantilla[jugadores] = new Jugador("Ricardo Calzada", 19,12.5,18,2,14,"portero");
  jugadores++;
  plantilla[jugadores] = new Jugador("Carlos Martinez", 19,12.5,18,2,14,"delantero");
  jugadores++;
  plantilla[jugadores] = new Jugador("Juan Pablo Valdés", 19,12.5,18,2,14,"Mediocentro");
  jugadores++;
  plantilla[jugadores] = new Jugador("Roberto Ortiz", 19,12.5,18,2,14,"Defensa Central");
  jugadores++;
  plantilla[jugadores] = new Jugador("Luis Aguirre", 19,12.5,18,2,14,"Mediocentro");
  jugadores++;
  plantilla[jugadores] = new Jugador("Patricio Rangel", 19,12.5,18,2,14,"Delantero");
  jugadores++;
  plantilla[jugadores] = new Jugador("Vasilis Makris", 19,12.5,18,2,14,"Delantero");
  jugadores++;
  plantilla[jugadores] = new Jugador("Carrillo", 19,12.5,18,2,14,"Mediocentro");
  jugadores++;
  plantilla[jugadores] = new Jugador("Nicolás Cruz", 19,12.5,18,2,14,"Delantero");
  jugadores++;
  
}

float Equipo::calculaPresupuestoTotal(){
  //restarle al presupuesto inicial el salario de los jugadores
}



void Equipo::setNombre(string nom){
  nombre = nom;
}
string Equipo::getNombre(){
  return nombre;
}
  
void Equipo::setDivision(string div){
  division = div;
}
string Equipo::getDivision(){
  return division;
}
void Equipo::setTitulos(string tit){
  titulos = tit;
}
string Equipo::getTitulos(){
  return titulos;
}
void Equipo::setJugador(Jugador jug){
  jugador = jug;
}
Jugador Equipo::getJugador(){
  return jugador;
}
void Equipo::setEntrenador(Entrenador ent){
  entrenador = ent;
}                         
Entrenador Equipo::getEntrenador(){
  return entrenador;
}