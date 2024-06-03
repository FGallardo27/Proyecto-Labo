#ifndef ARCHIVOADM_H_INCLUDED
#define ARCHIVOADM_H_INCLUDED
#include "Administrados.h"
class archivoAdm{
private:
    char _nombre[30];
public:
    archivoAdm(){

    }
    bool grabarRegistro(Administrador reg);
    Administrador listarRegistro(int index);

};



#endif // ARCHIVOADM_H_INCLUDED
