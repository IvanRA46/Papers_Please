#include "Pasaporte.h"
#include <string>
#include <iostream> 

using namespace std;

Pasaporte::Pasaporte(string Nombre, string Apellido, string Edad) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Edad = Edad;
}

void Pasaporte::Mostrar() {
	cout << "\n\n----PASAPORTE-----\n Nombre: " << Nombre << "\nApellido: " << Apellido << "\nEdad: " << Edad << endl;
}