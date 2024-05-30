#ifndef PACIENTESMANAGER_H_INCLUDED
#define PACIENTESMANAGER_H_INCLUDED
#include "Pacientes.h"
#include "ArchivoPacientes.h"
class PacientesManager{
private:
    void menuPaciente();
public:
    void agregarPaciente();
    Pacientes cargarPaciente();
};



#endif // PACIENTESMANAGER_H_INCLUDED
