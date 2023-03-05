#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <array>

class Fecha
{
private:
    unsigned int dia;
    unsigned int mes;
    unsigned int anio;
    static const std::array<unsigned int, 13> diasEnMes;
    void incrementarUnDia();
    void decrementarUnDia();
public:
    Fecha();
    Fecha(unsigned int dia, unsigned int mes, unsigned int anio);
    unsigned int getDia() const;
    unsigned int getMes() const;
    unsigned int getAnio() const;
    bool esBisiesto(unsigned int anio) const;
    bool esFinDeMes(unsigned int dia) const;
    Fecha avanzar( unsigned int incremento) const;
    Fecha retroceder(unsigned int decremento) const;
    unsigned int diferencia(const Fecha& fecha) const;


    bool operator==(const Fecha& fecha) const;
    bool operator>(const Fecha& fecha) const;
    bool operator>=(const Fecha& fecha) const;
    bool operator<(const Fecha& fecha) const;
    bool operator<=(const Fecha& fecha) const;
    bool operator!=(const Fecha& fecha) const;
    Fecha& operator++(); //++fecha
    Fecha operator++(int);//fecha++, se necesita el int como dummy
    Fecha& operator--();
    Fecha operator--(int);

    

    friend std::ostream& operator<<(std::ostream& output, const Fecha& fecha);
};




#endif