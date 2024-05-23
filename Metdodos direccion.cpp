#include <iostream>
#include <cstring>

using namespace std;
#include "funcionesAux.h"
#include "Declaracion direccion.h"


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
void direccion::setCalle(const char *c){
    strcpy(_calle,c);

}
void direccion::setBarrio(const char *b){
    strcpy(_barrio,b);
}
void direccion::setNumero (int n){
    _numero=n;
}
void direccion::setCodigoPostal (int cp){
    _codigoPostal=cp;
}
void direccion::setLocalidad (const char *l){
    strcpy(_localidad,l);
}
void direccion::setProvincia (const char *p){
    strcpy(_provincia,p);
}

char const* direccion::getCalle(){
    return _calle;
}
char const* direccion::getBarrio(){
    return _barrio;
}
int direccion::getNumero (){
    return _numero;
}
int direccion::getCodigoPostal(){
    return _codigoPostal;
}
char const* direccion::getLocalidad(){
    return _localidad;
}
char const* direccion::getProvincia(){
    return _provincia;
}
