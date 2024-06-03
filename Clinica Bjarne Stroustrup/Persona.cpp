#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "funcionesAux.h"
#include "Fecha.h"
#include "direccion.h"
#include "Persona.h"
/*Actualice los constructores de persona para que puedan recibir a traves de metodos de carga y no harcodear con set**/

Persona::Persona(std::string nombre="S/N",std::string apellido="S/N",int dni=0,fecha fechaNacimiento(0,0,0),direccion domicilio("N/S",0,0,"N/S","N/S","N/S")){
    strcpy(_nombre,nombre.c_str());
    strcpy(_apellido,apellido.c_str());
    _dni=dni;
    _fechaNacimiento=fechaNacimiento;
    _domicilio=domicilio;
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
void setDNI(int dni){
    _dni=dni;
}
void Persona::setFechaNacimiento(fecha fechaNacimiento){
    _fechaNacimiento = fechaNacimiento;
}
void Persona::setDomicilio(direccion domicilio){
   _domicilio=domicilio;
}

std::string Persona::getNombre(){
    return _nombre;
}
std::string Persona::getApellido(){
    return _apellido;
}
int getDNI(){
    return _dni;
}
fecha Persona::getFechaNacimiento(){
    return _fechaNacimiento;
}
direccion Persona::getDomocilio(){
    return _domicilio;
}

void Persona::cargarPersona(){
    cout<<"INGRESE SU NOMBRE: "<<endl;
    cargarCadena(_nombre,31);
    cout<<"INGRESE SU APELLIDO: "<<endl;
    cargarCadena(_apellido,31);
    cout<<"INGRESE SU DNI"<<endl;
    cin>>_dni;
    cout<<"INGRESE SU DOMICILIO: "<<endl;
    direccion::cargar();
    cout<<"INGRESE SU FECHA DE NACIMIENTO: "<<endl;
    fecha::cargar();
}
void Persona::mostrarPersona(){
    cout<<"SU NOMBRE ES: "<<_nombre<<endl;
    cout<<"SU APELLIDO ES: "<<_apellido<<endl;
    direccion::mostrar();
    cout<<endl;
    fecha::mostrar();

}
