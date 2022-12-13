#include<iostream>
using namespace std;
class Persona{
//Atributos
	protected : string nombres,apellidos;
				int telefono;	
//Metodos
	protected:	
	// constructor
	Persona(string nom,string ape,int tel){
		nombres = nom;
		apellidos = ape;
		telefono = tel;
	}
	void agregar();
	void mostrar();
};
