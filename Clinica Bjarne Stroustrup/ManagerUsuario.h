#ifndef MANAGERUSUARIO_H_INCLUDED
#define MANAGERUSUARIO_H_INCLUDED
#include "funcionesAux.h"
#include "Persona.h"
#include "Usuario.h"
class ManagerUsuario{

protected:


public:
    void menuUsuario();
    bool RegistrarUsuario();
    void MostrarUsuario();
    bool EliminarUsuario();
    };

#endif // MANAGERUSUARIO_H_INCLUDED
