#ifndef CLASSFECHA_H_INCLUDED
#define CLASSFECHA_H_INCLUDED

class fecha{
    private:
    int _dia;
    int _mes;
    int _anio;

    public:
    fecha();
    fecha(int dia,int mes, int anio);

    void setdia(int dia);
    void setmes(int mes);
    void setanio(int anio);

    int getdia();
    int getmes();
    int getanio();

    void cargar();
    void mostrar();
};

#endif // CLASSFECHA_H_INCLUDED
