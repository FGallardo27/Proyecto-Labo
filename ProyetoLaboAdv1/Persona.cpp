#include <iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
#include "funcionesAux.h"
#include "Persona.h"


Persona::Persona():_fechaNacimiento(20,5,2004)
{
    strcpy(_nombre,"");
    strcpy(_apellido,"");
    strcpy(_domicilio,"");
    strcpy(_nacionalidad,"");

}
Persona::Persona(std::string nombre,std::string apellido,fecha fechaNacimiento,std::string domicilio,std::string nacionalidad){
    setNombre(nombre);
    setApellido(apellido);
    setFechaNacimiento(fechaNacimiento);
    setDomicilio(domicilio);
    setNacionalidad(nacionalidad);
}
void Persona::setNombre(std::string nombre){
    if(nombre.size() <= 30){
        strcpy(_nombre,nombre.c_str());
    }
}
void Persona::setApellido(std::string apellido){
    if(apellido.size() <=30){
        strcpy(_apellido,apellido.c_str());
    }
}
void Persona::setFechaNacimiento(fecha fechaNacimiento){
    _fechaNacimiento = fechaNacimiento;
}
void Persona::setDomicilio(std::string domicilio){
   if(domicilio.size() <=30){
        strcpy(_domicilio,domicilio.c_str());
    }
}
void Persona::setNacionalidad(std::string nacionalidad){
   if(nacionalidad.size() <=30){
        strcpy(_nacionalidad,nacionalidad.c_str());
    }
}
std::string Persona::getNombre(){
    return _nombre;
}
std::string Persona::getApellido(){
    return _apellido;
}
fecha Persona::getFechaNacimiento(){
    return _fechaNacimiento;
}
std::string Persona::getDomocilio(){
    return _domicilio;
}
std::string Persona::getNacionalidad(){
    return _nacionalidad;
}
void Persona::cargarPersona(){
    cout<<"INGRESE SU NOMBRE: "<<endl;
    cargarCadena(_nombre,31);
    cout<<"INGRESE SU APELLIDO: "<<endl;
    cargarCadena(_apellido,31);
    cout<<"INGRESE SU DOMICILIO: "<<endl;
    cargarCadena(_domicilio,31);
    cout<<"INGRESE SU NACIONALIDAD: "<<endl;
    cargarCadena(_nacionalidad,31);
}
void Persona::mostrarPersona(){
    cout<<"SU NOMBRE ES: "<<_nombre<<endl;
    cout<<"SU APELLIDO ES: "<<_apellido<<endl;
    cout<<"SU DOMICILIO ES: "<<_domicilio<<endl;
    cout<<"SU NACIONALIDAD ES: "<<_nacionalidad<<endl;

}
