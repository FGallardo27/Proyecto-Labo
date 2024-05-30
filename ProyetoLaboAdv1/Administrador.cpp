#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "Persona.h"
#include "Administrados.h"
Administrador::Administrador(std::string nAdministrador,std::string cAdministrador){
    setNadimistrador(nAdministrador);
    setCadministrador(cAdministrador);
}
void Administrador::setNadimistrador(std::string nAdimistrador){
    strcpy(_nAdministrador,nAdimistrador.c_str());
}
void Administrador::setCadministrador(std::string cAdministrador){
    strcpy(_cAdministrador,cAdministrador.c_str());
}

