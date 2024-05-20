#ifndef CLASSPERSONA_H_INCLUDED
#define CLASSPERSONA_H_INCLUDED
#include <cstring>
#include "funcionesAux.h"
#include "classFecha.h"

class Persona{
    protected:
    char _nombre[30];
    char _apellido[30];
    fecha _fechaNacimiento;
    char _domicilio[30];
    char _nacionalidad[30];
    public:
    Persona();
    Persona(std::string nombre,std::string apellido,fecha fechaNacimiento,std::string domicilio,std::string nacionalidad);

    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    void setFechaNacimiento (fecha fechaNacimiento);
    void setDomicilio(std::string domicilio);
    void setNacionalidad(std::string nacionalidad);

    std::string getNombre();
    std::string getApellido();
    fecha getFechaNacimiento();
    std::string getDomocilio();
    std::string getNacionalidad();

    void cargarPersona();
    void mostrarPersona();

};



#endif // CLASSPERSONA_H_INCLUDED
