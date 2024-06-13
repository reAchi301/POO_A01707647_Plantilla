/*
*Autor: Ricardo Calzada Hernández
*Dentro de esta clase es donde ocurre el principal funcionamiento del programa en conjunto, 
*dentro de la misma encontramos funciones que permiten la impresión de los jugadores del equipo,
*muestran sus estadísticas, así como ofrecer una interfaz con interacción al usuario.
*/

#ifndef EQUIPO_H  
#define EQUIPO_H
#include <iostream>
#include <string>

#include "Persona.h" //Biblioteca con los objetos a usar
#include <iostream>
#include <string>
#include <sstream> //biblioteca para poder usar stringstream

using namespace std;

const int MAX = 18; //Constante que marca el tamaño máximo del arreglo

class Equipo{
private: //Declaración de atributos privados
string nombre;
string division;
string titulos;
float presupuesto_total;

Persona *plantilla[MAX]; // Arreglo de tipo persona con apuntador para implementar polimorfismo
int empleados; //indice

public: //Declaramos de manera publica los constructores y métodos de la clase

Equipo(string n, string d, string t, float p);
Equipo();


void ImprimeEquipo();
void CreaEquipo();
void muestraEmpleados();

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

Equipo::Equipo(string n, string d, string t, float p){ //Constructor de la clase Equipo
  nombre = n;
  division = d;
  titulos = t;
  presupuesto_total = p;
}

//Constructot pot omisión que inicializa la variable que va a ser usada como indice del arreglo
//plantilla[]

Equipo::Equipo(){  
  empleados = 0;
};

/**
 * ImprimeEquipo imprime la información del equipo y da una breve descripción mismo.
 *
 * @param
 * @return
 */

void Equipo::ImprimeEquipo(){
  cout << "--------------------------------"<<endl;
  cout << "INFORMACIÓN DEL EQUIPO" << endl;
   cout << "--------------------------------"<<endl;
  cout << "El nombre del equipo es: " << nombre << endl;
  cout << "La division del equipo es: " << division << endl;
  cout << "El equipo tiene: " << titulos << " titulos" << endl;
  cout << "--------------------------------"<<endl;
   cout << "--------------------------------"<<endl;
  cout << "MIEMBROS DEL EQUIPO"<<endl;
   cout << "--------------------------------"<<endl;
   cout << "--------------------------------"<<endl;
}

/**
 * creaEquipo genera objetos en plantilla[]
 *
 *En este caso la funcion crea objetos de tipo Jugador y Entrenador, mismas que pertenecen
 *la clase padre Persona. Estos objetos los guarda en la variable plantilla misma que será utilizada
 *para poder utilizar los valores en las funciones.
 *
 * @param
 * @return
 */

void Equipo::CreaEquipo(){
  plantilla[empleados] = new Jugador(" Jorge Warzone ", 19,0.0,20,10,4,"defensa central");
  empleados++;
  plantilla[empleados] = new Jugador(" Leonardo Gómez ", 19,12.5,18,2,14,"lateral derecho");
  empleados++;
  plantilla[empleados] = new Jugador(" Ricardo Calzada ", 19,12.5,18,2,14,"portero");
  empleados++;
  plantilla[empleados] = new Jugador(" Carlos Martinez ", 19,12.5,18,2,14,"delantero");
  empleados++;
  plantilla[empleados] = new Jugador(" Juan Pablo Valdés ", 19,12.5,18,2,14,"Mediocentro");
  empleados++;
  plantilla[empleados] = new Jugador(" Roberto Ortiz ", 19,12.5,18,2,14,"Defensa Central");
  empleados++;
  plantilla[empleados] = new Jugador(" Luis Aguirre ", 19,12.5,18,2,14,"Mediocentro");
  empleados++;
  plantilla[empleados] = new Jugador(" Patricio Rangel ", 19,12.5,18,2,14,"Delantero");
  empleados++;
  plantilla[empleados] = new Jugador(" Vasilis Makris ", 19,12.5,18,2,14,"Delantero");
  empleados++;
  plantilla[empleados] = new Jugador(" Alfredo Carrillo ", 19,12.5,18,2,14,"Mediocentro");
  empleados++;
  plantilla[empleados] = new Jugador(" Nicolás Cruz ", 19,12.5,18,2,14,"Delantero");
  empleados++;

  plantilla[empleados] = new Entrenador(" Eduardo Pacheco ", 45,0.0,20,10,4,3);
  empleados++;                  
  plantilla[empleados] = new Entrenador(" Enrique Guzman ", 37,0.0,2,10,4,3);
  empleados++;
  
}

/**
 * muestraEmpleados imprime la informacion de los objetos creados dentro del arreglo plantilla[]
 *
 *Esta funcion itera el arreglo plantilla[] y llama a la funcion to_string() de cada objeto. 
 *Imprimiendo la información, dentro de esta mismsa función se utiliza polmorfismo
 *
 * @param
 * @return
 */

void Equipo::muestraEmpleados() {
  for (int i = 0; i < empleados; i++) //ciclo que itera por el arreglo empleados 
    cout << plantilla[i] -> to_string(); //imprime los elementos del arreglo mediante la función to_string sobreescrita en las clases hijas de la clase Persona
}


//Setters y getters de los atributos de la clase Equipo
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
