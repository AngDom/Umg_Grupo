#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	// atributos 
	private : string nit;
	
	// constructor 
	public: 
	Cliente (){
	}
	
	Cliente (string nom, strin ape, string dir, int tel, string n): Persona (nom,ape,dir,tel){
    nit=n;
    
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit=n; }
	void setNonbres(string nom){nombres=nom; }
	void setApellidos(string ape){apellidos=ape; }
	void setDireccion(string dir){direccion=dir; }
	void setTelefono(int tel){telefono=tel; }
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDirreccion(){return direccion;}
	int getTelefono(){return telefono;}
	//metodos 
	void mostrar (){
		cout <<"___________";<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<endl;
	}
};

