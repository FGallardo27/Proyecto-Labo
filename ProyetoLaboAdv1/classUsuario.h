#ifndef CLASSUSUARIO_H_INCLUDED
#define CLASSUSUARIO_H_INCLUDED
#include <cstring>
#include "classPersona.h"
class Usuario: public Persona{
private:
    char _nUsuario[30];
    char _contraUsuario[30];
    char _coberturaMedica[30];
    char _plan[30];
    char _telefono[30];
    char _email[30]
public:
    Usuario();
    Usuario(std::string nUsuario,std::string contraUsuario,std::string coberturaMedica, std::string plan, std::string telefono, std::string email);

    void set

};



};



#endif // CLASSUSUARIO_H_INCLUDED
