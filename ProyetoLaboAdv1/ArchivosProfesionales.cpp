#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include "Persona.h"
#include "Profesional.h"
#include "ArchivosProfesionales.h"
ArchivoProfesionales::ArchivoProfesionales(std::string *nombre = "ARCHIVO_PACIENTE.DAT"){
    strcpy(_nombre,nombre.c_str());
}
bool ArchivoProfesionales::grabarRegistro(Professional reg){
    FILE *pFile;
    bool result;
    pFile= fopen("Profesional.dat","ab");

    if(pFile == nullptr){
        return false;
    }
    result = fwrite(&reg, sizeof (Professional),1,pFile);
    fclose(pFile);

    return result;
}
Professional ArchivoProfesionales::listarRegistro(int index){
    Professional reg,
    FILE *pFile;
    pFile = fopen("PACIENTE.DAT","rb");
    if(pFile == nullptr){
        return reg;
    }
    fseek(pFile, index * sizeof(Professional), SEEK_SET);

    fread(&reg,sizeof(prof),1,pFile);

    return reg;
}
