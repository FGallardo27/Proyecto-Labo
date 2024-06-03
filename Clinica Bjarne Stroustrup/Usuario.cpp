#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "Usuario.h"


Usuario::Usuario(std::string nombreU="S/D",std::string contraU="S/D"){
	strcpy(_nombreU,nombreU.c_str());
	strcpy(_contraU,contraU.c_str());
}
void Usuario::setNombreU(std::string nombreU){
	if(nUsuario.size() <=30){
		strcpy(_nombreU,nombreU.c_str());
	}
}
void Usuario::setContraU(std::string contraU){
	if(contraUsuario.size() <=9){
		strcpy(_contraU,contraU.c_str());
	}
}


std::string Usuario::getNusuario(){
	return _nombreU;
}
std::string Usuario::getContraUsuario(){
	return _contraU;
}

