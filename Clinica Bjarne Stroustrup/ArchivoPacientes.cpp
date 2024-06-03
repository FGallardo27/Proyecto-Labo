#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "Persona.h"
#include "Pacientes.h"
#include "ArchivoPacientes.h"

ArchivoPacientes::ArchivoPacientes(std::string nombre){
    strcpy(_nombre,nombre.c_str());
}
bool ArchivoPacientes::grabarRegistro(Pacientes reg){
    FILE *pFile;
    bool result;
    pFile= fopen("paciente.dat","ab");

    if(pFile == nullptr){
        return false;
    }
    result = fwrite(&reg, sizeof (Pacientes),1,pFile);
    fclose(pFile);

    return result;

}
/*
Pacientes ArchivoPacientes::listarRegistro(int index){
    Pacientes reg;
    FILE *pFile;
//TODO:UTILIZAR ATIBUTO EN VEZ DE CTE
    pFile = fopen("paciente.dat","rb");

    if(pFile == nullptr){
        return reg;
    }
    fseek(pFile, index * sizeof(Pacientes), SEEK_SET);

    fread(&reg,sizeof(Pacientes),1,pFile);

    return reg;

}
int ArchivoPacientes::CantRegistros(){
    FILE *pFile;
    int tam;

    pFile = fopen(_nombre,"rb");

    if(pFile == nullptr){
        return 0;
    }
    fseek(pFile, 0, SEEK_END);

    tam = ftell(pFile) / sizeof(Pacientes);

    fclose(pFile);

    return tam;

}
**/
