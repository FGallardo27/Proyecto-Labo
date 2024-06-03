#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "Usuario.h"
#include "Persona.h"
#include "Pacientes.h"

Pacientes::Pacientes(std::string coberturaMedica="S/D",std::string plan="S/D"){

    strcpy(_coberturaMedica,coberturaMedica.c_str());
    strcpy(_plan,plan.c_str());
}

void Pacientes::setCmedica(std::string coberturaMedica){
    if(coberturaMedica.size() <= 30){
        strcpy(_coberturaMedica,coberturaMedica.c_str());
    }
}
void Pacientes::setPlan(std::string plan){
    if(plan.size() <= 30){
        strcpy(_plan,plan.c_str());
    }
}



}
std::string Pacientes::getNpacientes(){
    return _nPaciente;
}
std::string Pacientes::getCpacientes(){
    return _contraPaciente;
}
std::string Pacientes::getCmedica(){
    return _coberturaMedica;
}
std::string Pacientes::getPlan(){
    return _plan;
}
std::string Pacientes::getElefono(){
    return _telefono;
}
std::string Pacientes::getEmail(){
    return _email;
}
