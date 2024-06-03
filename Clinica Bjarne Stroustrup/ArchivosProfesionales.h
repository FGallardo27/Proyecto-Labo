#ifndef ARCHIVOSPROFESIONALES_H_INCLUDED
#define ARCHIVOSPROFESIONALES_H_INCLUDED
#include "Profesional.h"
class ArchivoProfesionales{
private:
    char _nombre[30];
public:
    ArchivoProfesionales(std::string nombre = "Profesional.dat");
    bool grabarRegistro(Professional reg);
    Professional listarRegistro(int index);

};


#endif // ARCHIVOSPROFESIONALES_H_INCLUDED
