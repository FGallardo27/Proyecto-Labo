#ifndef ARCHIVOPACIENTES_H_INCLUDED
#define ARCHIVOPACIENTES_H_INCLUDED
#include "Pacientes.h"
class ArchivoPacientes{
private:
    char _nombre[30];
public:
    ArchivoPacientes(std::string *nombre = "ARCHIVO_PACIENTE.DAT");
    bool grabarRegistro(Pacientes reg);
    Pacientes listarRegistro(int index);
    int CantRegistros();


};



#endif // ARCHIVOPACIENTES_H_INCLUDED
