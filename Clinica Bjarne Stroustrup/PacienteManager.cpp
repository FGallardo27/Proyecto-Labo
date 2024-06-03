#include <iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
#include "funcionesAux.h"
#include "ManagerUsuario.h"
#include "Pacientes.h"
#include "ArchivoPacientes.h"
#include "PacientesManager.h"

void PacientesManager::cargarPaciente(){

    cout<<"INGRESE LA COBERTURA MEDICA: "<<endl;
    cargarCadena(_coberturaMedica,30);
    cout<<"INGRESE SU PLAN ACTUAL: "<<endl;
    cargarCadena(_plan,30);

}

void PacientesManager::mostrarPaciente(){

    cout<<"COBERTURA MEDICA:"<<_coberturaMedica<<endl;
    cout<<"PLAN ACTUAL:"<<_plan<<endl;
}

void PacientesManager::menuPaciente(){
    int opcion;
    system("cls");
    do
    {
        system("cls");

        cout << "------ MENU PACIENTES ------- " << endl;
        cout << "1- AGREGAR PACIENTES " << endl;
        cout << "2- LISTAR TODOS LOS PACIENTES" << endl;
         switch(opcion)
        {
        case 1:
            //agregarPaciente();
            system("pause");
            break;

        case 2:
            //listarPacientes();
            system("pause");
            break;
        }
    }
    while(opcion != 0);
}


