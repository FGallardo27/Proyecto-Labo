#ifndef PACIENTESMANAGER_H_INCLUDED
#define PACIENTESMANAGER_H_INCLUDED
#include "Usuario.h"
#include "Pacientes.h"
#include "ArchivoPacientes.h"
class PacientesManager:public Persona,Usuario{
private:
    void menuPaciente();
    ArchivoPacientes _archivoPacientes;
public:
    void cargarPaciente();
    void mostrarPaciente();
    void eliminarPaciente();


};



#endif // PACIENTESMANAGER_H_INCLUDED
