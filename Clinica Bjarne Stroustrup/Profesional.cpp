#include <iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
#include "Usuario.h"
#include "Persona.h"
#include "Profesional.h"


Professional::Professional(std::string profesion="", std::string especialidad="",std::string mNacional="",std::string titulo=""){
    strcpy(_profesion,profesion.c_str());
    strcpy(_especialidad,especialidad.c_str());
    strcpy(_mNacional,mNacional.c_str());
    strcpy(_titulo,titulo.c_str();
}

void Professional::setProfesion(std::string profesion){
    if(profesion.size()<=30){
        strcpy(_profesion,profesion.c_str());
    }
}
void Professional::setEspecialidad(std::string especialidad){
    if(especialidad.size()<=30){
        strcpy(_especialidad,especialidad.c_str());
    }
}
void Professional::setMnacional(std::string mNacional){
    if(mNacional.size()<=30){
        strcpy(_mNacional,mNacional.c_str());
    }
}
void Professional::setTitulo(std::string titulo){
    if(titulo.size()<=30){
        strcpy(_titulo,titulo.c_str());
    }
}

std::string Professional::getProfesion(){
    return _profesion;
}
std::string Professional::getEspecialidad(){
    return _especialidad;
}
std::string Professional::getMnacional(){
    return _mNacional;
}
std::string Professional::getTitulo(){
    return _titulo;
}
