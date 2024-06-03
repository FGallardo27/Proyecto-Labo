#ifndef CLASSUSUARIO_H_INCLUDED
#define CLASSUSUARIO_H_INCLUDED
#include <string>

class Usuario{
//cambio a protected para poder heredar
protected:
    char _nombreU[30];
    char _contraU[9];

public:
    //constructor por omision para no hacer 2, para mi usuario no necesita constructor igual
    Usuario(std::string nombreU,std::string contraU);

    void setNombreU(std::string nombreU);
    void setContraU(std::string contraU);


    std::string getNusuario();
    std::string getContraUsuario();


};

#endif // CLASSUSUARIO_H_INCLUDED
