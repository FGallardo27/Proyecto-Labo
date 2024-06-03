#ifndef CLASSADMINISTRADOS_H_INCLUDED
#define CLASSADMINISTRADOS_H_INCLUDED
#include "Persona.h"

class Administrador{

private:
    char _nAdministrador[30];
    char _cAdministrador[30];
public:

    Administrador(std::string nAdministrador,std::string cAdministrador);

    void setNadimistrador(std::string nAdministrador);
    void setCadministrador(std::string cAdministrador);

    std::string getAdministrador();
    std::string getCadministrador();
};

#endif // CLASSADMINISTRADOS_H_INCLUDED
