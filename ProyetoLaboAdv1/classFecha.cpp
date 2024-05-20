#include <iostream>
using namespace std;
#include<cstdlib>
#include<cstring>
#include "classFecha.h"


fecha::fecha(){
    _dia = 28;
    _mes =04;
    _anio =2024;

}
fecha::fecha(int dia,int mes, int anio){
    _dia = dia;
    _mes = mes;
    _anio = anio;
}
void fecha::setdia(int dia){
    _dia = dia;
}
void fecha::setmes(int mes){
    _mes =mes;
}
void fecha::setanio(int anio){
    _anio= anio;
}
int fecha::getdia(){
    return _dia;
}
int fecha::getmes(){
    return _mes;
}
int fecha::getanio(){
    return _anio;
}
void fecha::cargar(){
    bool fechaValida = false;
    while(!fechaValida){
    cout<<"INGRESE SU DIA: "<<endl;
    cin>>_dia;
    cout<<"INGRESE SU MES: "<<endl;
    cin>>_mes;
    cout<<"INGRESE SU ANIO: "<<endl;
    cin>>_anio;

    //validar el dia, mes y año
    if(_dia >= 1 && _dia <= 31 && _mes >= 1 && _mes <= 12 && _anio >= 0){
        bool diaValido = false;
        switch (_mes){
        case 2: //febrero
            diaValido = (_dia >= 1 && _dia <= 29);
            break;
        case 4: case 6: case 9: case 11: //Abril, Junio, Septiembre, Noviembre
            diaValido = (_dia>=1 && _dia <=30);
            break;
        default:
            diaValido = (_dia >= 1 && _dia <=31);
            break;

        }
         if (diaValido) {
                fechaValida = true;
            } else {
                cout << "Error: El día ingresado no es válido para el mes especificado." << endl;
            }
        } else {
            cout << "Error: La fecha ingresada no es válida." << endl;
        }
    }

}
void fecha::mostrar(){
    cout<<"SU DIA ES: "<<_dia<<endl;
    cout<<"SU MES ES: "<<_mes<<endl;
    cout<<"SU ANIO ES: "<<_anio<<endl;
}

