#include "Fecha.h"
#include <iostream>
#include <iomanip>

using namespace std;

const array<unsigned int, 13> Fecha::diasEnMes{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


Fecha::Fecha(): dia{1}, mes{1}, anio{1900}{};

Fecha::Fecha(unsigned int dd, unsigned int mm, unsigned int aa)
{
    aa > 0 ? anio = aa : throw invalid_argument{"El año tiene que ser mayor que 0"};
    
    (mm >= 1 && mm <=12) ? mes = mm : throw invalid_argument{"El mes debe estar entre 1 y 12"};

    if ((mes == 2 && esBisiesto(anio) && dd >=1 && dd <= 29) || (dd >=1 && dd <= diasEnMes[mes]))
        dia = dd;
    else
        throw invalid_argument{"El día está fuera de rango para el mes actual"};    
  
}

unsigned int Fecha::getAnio() const {return anio;}

unsigned int Fecha::getMes() const {return mes;}

unsigned int Fecha::getDia() const {return dia;}

bool Fecha::esBisiesto( unsigned int anio) const 
{
    return (anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0));
}

bool Fecha::esFinDeMes(unsigned int dd) const
{
    if (mes == 2 && esBisiesto(anio))
        return dd == 29;
    else
        return dd == diasEnMes[mes];
}

void Fecha::incrementarUnDia()
{
    if (!esFinDeMes(dia))
        ++dia;
    else
    {
        if ( mes < 12)
        {
            ++mes;
            dia = 1;
        }
        else
        {
            ++anio;
            mes = 1;
            dia = 1;
        }     
    }    
}



Fecha& Fecha::operator++()
{
    incrementarUnDia();
    return *this;
}

Fecha Fecha::operator++(int)
{
    Fecha auxiliar{*this};
    incrementarUnDia();
    return auxiliar;
}

Fecha Fecha::avanzar(unsigned int incremento) const 
{
    Fecha resultado{*this};
    for (size_t i = 1; i <= incremento; i++)
        resultado.incrementarUnDia();
    return resultado;
}


void Fecha::decrementarUnDia()
{
    if (dia > 1)
        --dia;
    else if (mes > 1)
    {
        --mes;
        if (mes==2 && esBisiesto(anio))
            dia = 29;
        else
            dia = diasEnMes[mes];
    }
    else
    {
        --anio;
        mes = 12;
        dia = 31;
    }   
}

Fecha& Fecha::operator--()
{
    decrementarUnDia();
    return *this;
}

Fecha Fecha::operator--(int)
{
    Fecha auxiliar{*this};
    decrementarUnDia();
    return auxiliar;
}

Fecha Fecha::retroceder(unsigned int decremento) const
{
    Fecha resultado{*this};
    for (size_t i = 1; i <= decremento; i++)
        resultado.decrementarUnDia();
    return resultado;    
}

bool Fecha::operator==(const Fecha& fecha) const
{
    return (this->anio == fecha.getAnio()) && (this->mes == fecha.getMes()) && (this->dia == fecha.getDia());
}

bool Fecha::operator!=(const Fecha& fecha) const{return !(*this == fecha);}

bool Fecha::operator<(const Fecha& fecha) const
{
    return (this->anio < fecha.getAnio()) || ((this->anio == fecha.getAnio()) && this->mes < fecha.getMes())
    || ((this->anio == fecha.getAnio()) && (this->mes == fecha.getMes()) && (this->dia < fecha.getDia())); 
}

bool Fecha::operator<=(const Fecha& fecha) const{return (*this < fecha) || (*this == fecha);}

bool Fecha::operator>(const Fecha& fecha) const{return !(*this <= fecha);}

bool Fecha::operator>=(const Fecha& fecha) const{return !(*this < fecha);}

bool Fecha::operator!=(const Fecha& fecha) const{return !(*this == fecha);}

ostream& operator<<(ostream& salida, const Fecha& fecha)
{
    cout << setw(4) << setfill(0) << fecha.getAnio() << "/"<< setw(2) << setfill(0) << fecha.getMes() << "/"
    << setw(2) << setfill(0) << fecha.getDia() << "\n";
}

unsigned int Fecha::diferencia(const Fecha& fecha) const
{
    Fecha inicio;
    Fecha fin;
    if (*this <= fecha)
    {
        inicio{*this};
        fin{fecha};
    }
    else
    {
        inicio{fecha};
        fin{*this};
    }
    unsigned int resultado{0};
    while (inicio < fin )
    {
       ++resultado;
    }
    
    return resultado;    
}