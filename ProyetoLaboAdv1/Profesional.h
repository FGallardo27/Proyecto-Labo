#ifndef CLASSPROFESIONAL_H_INCLUDED
#define CLASSPROFESIONAL_H_INCLUDED

#include <iostream>
#include "Persona.h"
class Professional: public Persona{
private:
	char _nProfesional[30];
	char _cProfesional[30];
	char _profesion[30];
	char _especialidad[30];
	char _mNacional[30];
	char _titulo[30];
public:
	Professional();
	Professional(std::string nProfesional, std::string cProfesional, std::string profesion, std::string especialidad,std::string mNacional,std::string titulo);

void setNprofesional(std::string nProfesional);
void setcProfesional(std::string cProfesional);
void setProfesion(std::string profesion);
void setEspecialidad(std::string especialidad);
void setMnacional (std::string mNacional);
void setTitulo (std::string titulo);

std::string getNprofesional();
std::string getcProfesional();
std::string getProfesion();
std::string getEspecialidad();
std::string getMnacional();
std::string getTitulo();
};

#endif // CLASSPROFESIONAL_H_INCLUDED
