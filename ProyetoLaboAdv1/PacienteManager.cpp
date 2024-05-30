#include <iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
#include "Pacientes.h"
#include "ArchivoPacientes.h"
#include "PacientesManager.h"
Pacientes PacientesManager::cargarPaciente(){

}
void PacientesManager::agregarPaciente(){
    if(ArchivoPacientes.grabarRegistro(cargarPaciente()))
    {
        cout<<"EL PRODUCTO FUE GUARDADO CON EXITO" <<endl;
    }
    else{
        cout<<"NO SE PUDO GUARDAAR EL PRODUCTO" <<endl;
    }

}
void PacientesManager::menuPaciente(){
    int option;
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
            //agregarProducto();
            system("pause");
            break;

        case 2:
            //listarProductos();
            system("pause");
            break;
        }
    }
    while(opcion != 0);
}
Pacientes PacientesManager::cargarPaciente(){

}
