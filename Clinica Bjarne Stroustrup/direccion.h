#ifndef DIRECCION_H_INCLUDED
#define DIRECCION_H_INCLUDED

/*Le agregue un constructor para poder usarla con composicion en la clase persona. Podria tener un manager pero no me
parece lo mejor ahora visualmente tener tantos cpp y h. Pero cuando terminemos la parte logica de los archivos y manager de
usuario y demas podriamos hacerlos.
**/

class direccion{

private: char _calle[30], _barrio[30],_localidad [30], _provincia[30];
         int _numero, _codigoPostal;
public:

    direccion(std::string calle,int numero,int codigoPostal,std::string barrio,std::string localidad,std::string provincia);
    void cargar();
    void mostrar();
    void setCalle(std::string calle);
    void setBarrio(std::string barrio);
    void setNumero (int n);
    void setCodigoPostal (int cp);
    void setLocalidad (std::string localidad);
    void setProvincia (std::string provincia);

    std::string getCalle();
    std::string getBarrio();
    int getNumero ();
    int getCodigoPostal();
    std::string getLocalidad();
    std::string getProvincia();
};



#endif // DIRECCION_H_INCLUDED
