
#include <iostream>
#include <cstring>
#include<cstdlib>
using namespace std;
#include "funcionesAux.h"
#include "Direccion.h"
direccion::direccion(std::string calle="S/N",int numero=0,int codigoPostal=0,std::string barrio="S/N",std::string localidad="S/N",std::string provincia="S/N"){
    strcpy(_calle,calle.c_str());
    _numero=numero;
    _codigoPostal=codigoPostal;
    strcpy(_barrio,barrio.c_str());
    strcpy(_localidad,localidad.c_str());
    strcpy(_provincia,provincia.c_str());
}
void direccion::cargar(){
    cout<<"INGRESE CALLE:"<<endl;
    cargarCadena(_calle,30);
    cout<<"INGRESE BARRIO:"<<endl;
    cargarCadena(_barrio,30);
    cout<<"INGRESE NUMERO"<<endl;
    cin>>_numero;
    cout<<"INGRESE CODIGO POSTAL"<<endl;
    cin>>_codigoPostal;
    cout<<"INGRESE LOCALIDAD"<<endl;
    cargarCadena(_localidad,30);
    cout<<"INGRESE PROVINCIA"<<endl;
    cargarCadena(_provincia,30);
}
void direccion::mostrar(){
    cout<<"CALLE:"<<_calle<<endl;
    cout<<"BARRIO:"<<_barrio<<endl;
    cout<<"NUMERO:"<<_numero<<endl;
    cout<<"CODIGO POSTAL:"<<_codigoPostal<<endl;
    cout<<"LOCALIDAD:"<<_localidad<<endl;
    cout<<"PROVINCIA"<<_provincia<<endl;
}
void direccion::setCalle(std::string calle){
    if(calle.size()<=30){
        strcpy(_calle,calle.c_str());
    }

}
void direccion::setBarrio(std::string barrio){
    if(barrio.size()<=30){
        strcpy(_barrio,barrio.c_str());
    }
}
void direccion::setNumero (int n){
    _numero=n;
}
void direccion::setCodigoPostal (int cp){
    _codigoPostal=cp;
}
void direccion::setLocalidad(std::string localidad){
    if(localidad.size()<=30){
        strcpy(_localidad,localidad.c_str());
    }
}
void direccion::setProvincia(std::string provincia){
    if(provincia.size()<=30){
        strcpy(_provincia,provincia.c_str());
    }
}

std::string direccion::getCalle(){
    return _calle;
}
std::string direccion::getBarrio(){
    return _barrio;
}
int direccion::getNumero (){
    return _numero;
}
int direccion::getCodigoPostal(){
    return _codigoPostal;
}
std::string direccion::getLocalidad(){
    return _localidad;
}
std::string direccion::getProvincia(){
    return _provincia;
}
