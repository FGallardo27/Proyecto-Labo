#ifndef PACIENTES_H_INCLUDED
#define PACIENTES_H_INCLUDED
#include <cstring>
#include "Usuario.h"
#include "Persona.h"
//HERENCIA DOBLE DE PERSONA Y USUARIO (ES SOLO PONER LA COMA)
class Pacientes: public Persona,Usuario{
private:
//Saque nomPte y contra porque lo hereda de usuario y telefono y demas de persona
    char _coberturaMedica[30];
    char _plan[30];
public:

    Pacientes(std::string coberturaMedica,std::string plan);

    void setCmedica(std::string coberturaMedica);
    void setPlan(std::string plan);

    std::string getCmedica();
    std::string getPlan();
};
#endif // PACIENTES_H_INCLUDED
