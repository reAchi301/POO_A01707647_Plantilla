/*
Autor: Ricardo Calzada Hernández

*/

#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <string>

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

Jugador *plantilla[MAX];
int jugadores; //indice

public:

Equipo(string n, string d, string t, float p);
Equipo();


void ImprimeEquipo();
void CreaEquipo();
void muestraJugadores();
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

Equipo::Equipo(string n, string d, string t, float p){
  nombre = n;
  division = d;
  titulos = t;
  presupuesto_total = p;
}

Equipo::Equipo(){
  jugadores = 0;
};

void Equipo::ImprimeEquipo(){
  cout << "El nombre del equipo es: " << nombre << endl;
  cout << "La division del equipo es: " << division << endl;
  cout << "El equipo tiene: " << titulos << " titulos" << endl;
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
  plantilla[jugadores] = new Jugador("Alfredo Carrillo", 19,12.5,18,2,14,"Mediocentro");
  jugadores++;
  plantilla[jugadores] = new Jugador("Nicolás Cruz", 19,12.5,18,2,14,"Delantero");
  jugadores++;

}

void Equipo::muestraJugadores() {
  for (int i = 0; i < jugadores; i++)
    cout << plantilla[i] -> to_string();
}

float Equipo::calculaPresupuestoTotal(){
  return 0;//restarle al presupuesto inicial el salario de los jugadores
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



#endif
