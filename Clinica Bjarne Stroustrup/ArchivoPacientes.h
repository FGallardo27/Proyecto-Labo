#ifndef ARCHIVOPACIENTES_H_INCLUDED
#define ARCHIVOPACIENTES_H_INCLUDED
#include "Pacientes.h"
#include <string>
class ArchivoPacientes{
private:
    char _nombre[30];

public:
    ArchivoPacientes(std::string nombre = "paciente.dat");
    bool grabarRegistro(Pacientes reg);
    Pacientes listarRegistro(int index);
    int CantRegistros();
};



#endif // ARCHIVOPACIENTES_H_INCLUDED
