#include"persona.cpp"
#include<iostream>
using namespace std;
class Cliente : Persona{
	// atributo
	private : string nit;
	public : 
	// constructor
	 Cliente(string nom,string ape,int tel,string n):Persona(nom,ape,tel){
	 	nit = n;
	 }
	 //met get y sset
	 //modificaratrib(set)
	//modificar atributos(set)
	 void setNit(string n){nit=n;}
	 void setNombres(string nom){nombres=nom;}
	 void setApellidos(string ape){apellidos=ape;}
	 void setTelefono(int tel){telefono=tel;}
	 //modificar mostrar(get)
	 string getNit(){return nit;}
	 string getNombres(){return nombres;}
	 string getApellidos(){return apellidos;}
	 int getTelefono(){return telefono;}

	 // metodo
	 void mostrar(){
	 	cout<<endl;
	 	cout<<nit<<","<<nombres<<","<<apellidos<<","<<telefono<<endl;
	 }
};
