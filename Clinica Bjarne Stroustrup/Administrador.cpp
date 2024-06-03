#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "Administrados.h"



Administrador::Administrador(std::string nAdministrador="N/C",std::string cAdministrador="N/C"){
    strcpy(_nAdministrador,nAdministrador.c_str());
    strcpy(_cAdministrador,cAdministrador.c_str());
}
void Administrador::setNadimistrador(std::string nAdministrador){
    strcpy(_nAdministrador,nAdministrador.c_str());
}
void Administrador::setCadministrador(std::string cAdministrador){
    strcpy(_cAdministrador,cAdministrador.c_str());
}

std::string Administrador::getAdministrador(){return _nAdministrador;}
std::string Administrador::getCadministrador(){return _cAdministrador;}

