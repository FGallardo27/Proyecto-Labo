#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "Persona.h"
#include "Pacientes.h"
Pacientes::Pacientes(){
    strcpy(_nPaciente,"");
}
Pacientes::Pacientes(std::string nPaciente,std::string contraPaciente,std::string coberturaMedica,std::string plan, std::string telefono,std::string email){
    setNpacientes(nPaciente);
}
void Pacientes::setNpacientes(std::string nPaciente){
    if(nPaciente.size() <= 30){
        strcpy(_nPaciente,nPaciente.c_str());
    }
}
void Pacientes::setCpacientes(std::string contraPaciente){
    if(contraPaciente.size() <= 30){
        strcpy(_contraPaciente,contraPaciente.c_str());
    }
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
void Pacientes::setElefono(std::string telefono){
    if(telefono.size() <= 30){
        strcpy(_telefono,telefono.c_str());
    }
}
void Pacientes::setEmail(std::string email){
    if(email.size() <= 30){
        strcpy(_email,email.c_str());
    }
}
void Pacientes::cargarPaciente(){
    cout<<"INGRESE EL NOMBRE DEL PACIENTE: "<<endl;
    setNombre(_nPaciente);
    cout<<"INGRESE LA CONTRASEÑA DEL PACIENTE: "<<endl;
    setCpacientes(_contraPaciente);
    cout<<"INGRESE LA COBERTURA MEDICA: "<<endl;
    setCmedica(_coberturaMedica);
    cout<<"INGRESE SU PLAN ACTUAL: "<<endl;
    setPlan(_plan);
    cout<<"INGRESE SU TELEFONO: "<<endl;
    setElefono(_telefono);
    cout<<"INGRESE SU EMAIL: "<<endl;
    setEmail(_email);

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
