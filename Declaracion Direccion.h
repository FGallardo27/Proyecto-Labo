#ifndef DECLARACION_DIRECCION_H_INCLUDED
#define DECLARACION_DIRECCION_H_INCLUDED


class direccion{

private: char _calle[30]; int _numero; int _codigoPostal; char _barrio[30];
            char _localidad [30]; char _provincia[30];
public:

    void cargar();
    void mostrar();
    void setCalle(const char *c);
    void setBarrio(const char *b);
    void setNumero (int n);
    void setCodigoPostal (int cp);
    void setLocalidad (const char *l);
    void setProvincia (const char *p);

    char const *getCalle();
    char const *getBarrio();
    int getNumero ();
    int getCodigoPostal();
    char const *getLocalidad();
    char const *getProvincia();
};

#endif // DECLARACION_DIRECCION_H_INCLUDED
