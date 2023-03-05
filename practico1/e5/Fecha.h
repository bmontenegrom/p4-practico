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
public:
    Fecha();
    Fecha(unsigned int dia, unsigned int mes, unsigned int anio);
    Fecha avanzar( unsigned int incremento);
    Fecha retroceder(unsigned int decremento);
    unsigned int diferencia(Fecha fecha) const;

    bool operator==(const Fecha& fecha) const;
    bool operator>(const Fecha& fecha) const;
    bool operator>=(const Fecha& fecha) const;
    bool operator<(const Fecha& fecha) const;
    bool operator<=(const Fecha& fecha) const;
    bool const operator!=(const Fecha& fecha) const;
    Fecha& operator++(); //++fecha
    Fecha operator++(int);//fecha++, se necesita el int como dummy

    bool esBisiesto(unsigned int anio) const;
    bool esFinDeMes(unsigned int dia) const;

    friend std::ostream& operator<<(std::ostream& output, const Fecha& fecha);
};




#endif