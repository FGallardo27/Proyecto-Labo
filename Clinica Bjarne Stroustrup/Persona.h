#ifndef CLASSPERSONA_H_INCLUDED
#define CLASSPERSONA_H_INCLUDED
#include "Fecha.h"
#include "direccion.h"
class Persona{

protected:

    char _nombre[30];
    char _apellido[30];
    int _dni;
    fecha _fechaNacimiento;
    direccion _domicilio;

public:

    Persona(std::string nombre,std::string apellido,fecha fechaNacimiento,direccion domicilio,std::string nacionalidad);

    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    void setDNI(int dni);
    void setFechaNacimiento (fecha fechaNacimiento);
    void setDomicilio(direccion domicilio);


    std::string getNombre();
    std::string getApellido();
    int getDNI();
    fecha getFechaNacimiento();
    direccion getDomocilio();

    void cargarPersona();
    void mostrarPersona();

};



#endif // CLASSPERSONA_H_INCLUDED
