#ifndef DIRECCION_H_INCLUDED
#define DIRECCION_H_INCLUDED
class direccion{

private: char _calle[30]; int _numero; int _codigoPostal; char _barrio[30];
            char _localidad [30]; char _provincia[30];
public:

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
