#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

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

void Persona::ImprimeInfo(){
  cout  << "La info del jugador es:" << endl;
  cout << "Nombre: " << nombrePersona << endl;
  cout << "Edad: " << edad << endl;
  cout << "Salario: " << salario << endl;
  cout << "Titulos: " << titulos << endl;
}

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