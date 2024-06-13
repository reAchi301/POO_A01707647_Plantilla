#include <iostream>
#include "Equipo.h"
#include "Persona.h"
using namespace std;


int main() {
  Equipo Equipo1;
  string nombre;
  string division;
  string titulos;
  
  cout << "Inserta nombre del equipo (SIN ESPACIOS): " << endl;
  cin >> nombre;
  Equipo1.setNombre(nombre);

  cout << "Inserta la division del equipo: "<< endl;
  cin >> division;
  Equipo1.setDivision(division);

  cout << "Inserta los titulos del equipo: ";
  cin >> titulos;
  Equipo1.setTitulos(titulos);
 
  Equipo1.CreaEquipo();
  Equipo1.ImprimeEquipo();
  Equipo1.muestraEmpleados();
  
  
  //EN LA CLAS PERSONA PONGO LA FUNCION TO STRING, TIENE QUE CONVERITR LOS ATRIBUTOS A UN STRING, Y HACER UNA DE IMPRIMIR JUGADOR PR JUGDADOR DENTRO DE EQUIPO.
  //EQUIPO.IMPRIMIREQUIPO();
}
