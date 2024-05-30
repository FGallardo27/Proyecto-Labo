#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "Persona.h"
#include "Usuario.h"
Usuario::Usuario(){
	strcpy(_nUsuario,"");
	strcpy(_contraUsuario,"");
}
Usuario::Usuario(std::string nUsuario,std::string contraUsuario){
	setNusuario(nUsuario);
	setContraUsuario(contraUsuario);
}
void Usuario::setNusuario(std::string nUsuario){
	if(nUsuario.size() <=30){
		strcpy(_nUsuario,nUsuario.c_str());
	}
}
void Usuario::setContraUsuario(std::string contraUsuario){
	if(contraUsuario.size() <=30){
		strcpy(_contraUsuario,contraUsuario.c_str());
	}
}

std::string Usuario::getNusuario(){
	return _nUsuario;
}
std::string Usuario::getContraUsuario(){
	return _contraUsuario;
}
