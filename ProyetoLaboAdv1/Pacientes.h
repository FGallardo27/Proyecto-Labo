#ifndef PACIENTES_H_INCLUDED
#define PACIENTES_H_INCLUDED
#include <cstring>
#include "Persona.h"

class Pacientes: public Persona{
private:
    char _nPaciente[30];
    char _contraPaciente[30];
    char _coberturaMedica[30];
    char _plan[30];
    char _telefono[30];
    char _email[30];
public:

    Pacientes();
    Pacientes(std::string nPaciente,std::string contraPaciente,std::string coberturaMedica,std::string plan, std::string telefono,std::string email);

    void setNpacientes(std::string nPaciente);
    void setCpacientes(std::string contraPaciente);
    void setCmedica(std::string coberturaMedica);
    void setPlan(std::string plan);
    void setElefono(std::string telefono);
    void setEmail(std::string email);

    std::string getNpacientes();
    std::string getCpacientes();
    std::string getCmedica();
    std::string getPlan();
    std::string getElefono();
    std::string getEmail();

    void cargarPaciente();

};


#endif // PACIENTES_H_INCLUDED
