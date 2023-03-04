#include "Punto.h"
#include "Segmento.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "creando p1 con constructor por defecto\n";
    Punto p1;
    cout << "p1 = " << p1;
    cout << "creando punto con x = 1.0 e y = 2.0\n";

    Punto p2(1.0, 2.0);
    cout << "p2 = " << p2;

    cout << "modificando p1 a (3.0, 4.0)\n";
    p1.setX(3.0);
    p1.setY(4.0);
    cout << "p1 = " << p1 << "\n";

    cout << "creando s1 con constructor por defecto\n";
    Segmento s1;
    cout << "el segmento s1 esta formado por los puntos: \n";
    cout << s1.getInicio() << s1.getFin()<<"\n";

    cout << "creando segmento con puntos p1 y p2\n";
    Segmento s2(p1, p2);
    cout << "el segmento 21 esta formado por los puntos: \n";
    cout << s1.getInicio() << s1.getFin()<<"\n";
    cout << "el largo de s2 es: ";
    cout << s2.distancia();


    cin.get();   


    return 0;
}
