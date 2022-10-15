#include "INE.h"
#include <string>
#include <iostream> 

using namespace std;

INE::INE(string Nombre, string Apellido, string Edad) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Edad = Edad;
}

void INE::Mostrar() {
	cout << "----INE-----\n Nombre: " << Nombre << "\nApellido: " << Apellido << "\nEdad: " << Edad << endl;
}