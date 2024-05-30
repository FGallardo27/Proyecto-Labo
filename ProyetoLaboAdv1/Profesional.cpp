#include <iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
#include "Persona.h"
#include "Profesional.h"

Professional::Professional(){
    strcpy(_nProfesional,"");
    strcpy(_cProfesional,"");
    strcpy(_profesion,"");
    strcpy(_especialidad,"");
    strcpy(_mNacional,"");
    strcpy(_titulo,"");

}
Professional::Professional(std::string nProfesional, std::string cProfesional, std::string profesion, std::string especialidad,std::string mNacional,std::string titulo){
    setNprofesional(nProfesional);
    setcProfesional(cProfesional);
    setProfesion(profesion);
    setEspecialidad(especialidad);
    setMnacional(mNacional);
    setTitulo(titulo);
}
void Professional::setNprofesional(std::string nProfesionales){
    if(nProfesionales.size() <=30){
        strcpy(_nProfesional,nProfesionales.c_str());
    }
}
void Professional::setcProfesional(std::string cProfesional){
    if(cProfesional.size() <=30){
        strcpy(_cProfesional,cProfesional.c_str());
    }
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
std::string Professional::getNprofesional(){
    return _nProfesional;
}
std::string Professional::getcProfesional(){
    return _cProfesional;
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
