#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "funcionesAux.h"
#include "Persona.h"
#include "ManagerUsuario.h"
#include "Usuario.h"

/*MENU PRINCIPAL, 01**/

void ManagerUsuario::menuUsuario(){
int opc;
    cout<<"BIENVENIDO A LA CLINICA BJARNE STROUSTRUP"<<endl;
    cout<<"AQUI PROGRAMAMOS SU SALUD DE LA MEJOR MANERA"<<endl;
    cout<<"----------------MENU USUARIO-----------------"<<endl;
    cout<<"------------------1.PACIENTES------------------"<<endl;
    cout<<"------------------2.PROFESIONALES------------------"<<endl;
    cout<<"------------------3.ADMINISTRADOR------------------"<<endl;
    cout<<"------------------4.SALIR------------------"<<endl;
    cin>>opc;
do{
    switch(opc){
    case 1: //menuPacientes();
        break;
    case 2://menuProfesionales();
        break;
    case 3://menuAdministrador();
        break;
    case 4: cout<<"GRACIAS POR ELEGIRNOS"<<endl;

        break;
    default: cout<<"OPCION NO ENCONTRADA"<<endl;
             cout<<"REINGRESE UNA OPCION VALIDA (1 AL 4)"<<endl;
        break;
    }
        cin>>opc;
}while(opc);

}

void ManagerUsuario::cargarUsuario(){
    cout<<"Ingrese un nombre de Usuario"<<endl;
    cargarCadena(_nombreU,30);
    cout<<"Ingrese una contraseña no mayor a 8 caracteres"<<endl;
    cargarCadena(_contraU,9);
}


bool ManagerUsuario::RegistrarUsuario(){
    bool encontro,quepaso=false;

    Persona::cargarPersona();
    //conseguir el dni para validar si existe Persona::getDni();??
    encontro=buscarUsuario(int &dni);//tipo bool. Si devuelve true el usuario esta registrado. Si devuelve false no lo encuentra y registra
    if(!encontro){
        guardarUsuario();//funcion de la clase archivoUsuario
        cout<<"USUARIO REGISTRADO"<<endl;
        quepaso=true;
    }
    else{

         int dniSeg,recupero;
         char mail[30];
         cout<<"USTED YA TIENE UN USUARIO REGISTRADO"<<endl;
         cout<<"SI NO RECUERDA LA CONTRASEÑA RESPONDA LA PREGUNTA DE SEGURIDAD"<<endl;
         cout<<"ESCRIBA SU MAIL Y DNI A CONTINUACION"<<endl;
         cout<<"DNI"<<endl;
         cin>>dniSeg;
         cout<<endl;
         cout<<"MAIL"<<endl;
         cargarCadena(mail,30);
         recupero=buscarUsuario(dniSeg,mail);
         if(!recupero==-1){
                cout<<"SU CONTRASEÑA ES:"<<endl;
                cout<<recupero<<endl;
                quepaso=true;
         }
         else{
            cout<<"NO COINCIDEN LOS DATOS PROPORCIONADOS"<<endl;
            cout<<"COMUNIQUESE AL 0800-0303-456 OPCION 2"<<endl;
            cout<<
            quepaso=false;
         }

    }

    return quepaso;
}


