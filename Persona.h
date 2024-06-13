#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Persona{

protected:
string nombrePersona;
int edad;
float salario;
int titulos;

public:
Persona();
Persona(string NP, int E, float S, int T);

virtual string to_string() = 0;

void setNomP(string);
string getNomP()const;
void setEdad(int);
int getEdad()const;  
void setSalP(float);
float getSalP()const;
void setTitP(int);
int getTitP()const;
};

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

string to_string();
};

class Entrenador : public Persona {
private:
  double Victorias;
  double Derrotas;
  double Empates;
  
public:
  Entrenador();
  Entrenador(string NP, int E, float S, int T,int Vc, int Dr, int Em);

  void setVictory(double);
  double getVictory();
  void setDerrota(double);
  double getDerrota();
  void setEmpate(double);
  double getEmpate();

  string to_string();
};


// .CPP DE PERSONA

Persona ::Persona(){
  nombrePersona = "";
  edad = 0;
  salario = 0.0;
  titulos = 0;
};

Persona::Persona(string NP, int E, float S, int T){
nombrePersona=NP;
edad=E;
salario=S;
titulos=T;
};


void Persona::setNomP(string Np){
nombrePersona=Np;
}
string Persona:: getNomP()const{
return nombrePersona;
}

void Persona::setEdad(int Ep){
edad=Ep;
}
int Persona::getEdad()const{
return edad;
} 

void Persona::setSalP(float Sp){
salario = Sp;
}
float Persona::getSalP()const{
return salario;
}
void Persona::setTitP(int Tp){
titulos = Tp;
}
int Persona::getTitP()const{
return titulos;
}



// .CPP DE JUGADOR

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


string Jugador::to_string(){  
  stringstream aux; 
  aux << "Nombre:" << nombrePersona <<  endl << "Edad: " << edad << endl << "Salario:" << salario << endl <<  "Titulos:" << titulos <<  endl << "Los goles del jugador son:" << goles << endl<< "Las asistencias del jugador son:" << asistencias << endl<< "La posición del jugador es:" << posicion << endl << "--------------------------------"<<endl;
  return aux.str();
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
string Jugador::getPosicion(){
  return posicion;
} 

// .CPP DE ENTRENADOR

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

string Entrenador::to_string(){  
  stringstream aux; 
   aux << "Nombre:" << nombrePersona << endl << "Edad:" << edad << endl << "Salario: " << salario << endl <<  "Titulos: " << titulos << endl << "Las victorias del entrenador son: " << Victorias << endl <<   "Los empates del entrenador son: " << Empates << endl<< "Las derrotas del entrenador son: " << Derrotas << endl << "--------------------------------"<<endl;
  return aux.str();
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

#endif
