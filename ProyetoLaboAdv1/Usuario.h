#ifndef CLASSUSUARIO_H_INCLUDED
#define CLASSUSUARIO_H_INCLUDED
#include <cstring>
#include "Persona.h"
class Usuario: public Persona{
private:
    char _nUsuario[30];
    char _contraUsuario[30];

public:
    Usuario();
    Usuario(std::string nUsuario,std::string contraUsuario);

    void setNusuario(std::string nUsuario);
    void setContraUsuario(std::string contraUsuario);

    std::string getNusuario();
    std::string getContraUsuario();

};

#endif // CLASSUSUARIO_H_INCLUDED
