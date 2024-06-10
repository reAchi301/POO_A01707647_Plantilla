#include <iostream>
#include "Equipo.h"
#include "Persona.h"
using namespace std;


int main() {
  Equipo Equipo1;

  
  Equipo1.setNombre("REAL MADRID");
  Equipo1.setDivision("Primera División");
  Equipo1.setTitulos("8");
  
  Equipo1.CreaEquipo();
  Equipo1.ImprimeEquipo();
  Equipo1.muestraJugadores();
  
  
  //EN LA CLAS PERSONA PONGO LA FUNCION TO STRING, TIENE QUE CONVERITR LOS ATRIBUTOS A UN STRING, Y HACER UNA DE IMPRIMIR JUGADOR PR JUGDADOR DENTRO DE EQUIPO.
  //EQUIPO.IMPRIMIREQUIPO();
}
