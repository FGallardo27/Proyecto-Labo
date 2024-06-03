#include <iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
#include "Administrados.h"
#include "ArchivoAdm.h"

bool archivoAdm::grabarRegistro(Administrador reg){
    FILE *pFile;
    bool result;
    pFile= fopen("administrador.dat","ab");

    if(pFile == nullptr){
        return false;
    }
    result = fwrite(&reg, sizeof (Administrador),1,pFile);
    fclose(pFile);

    return result;
}
/*Administrador archivoAdm::listarRegistro(int index){
    Administrador reg;
    FILE *pFile;

    pFile = fopen("administrador.dat","rb");

    if(pFile == nullptr){
        return reg;
    }
    fseek(pFile, index * sizeof(Administrador), SEEK_SET);

    fread(&reg,sizeof(Administrador),1,pFile);

    return reg;
}
**/
