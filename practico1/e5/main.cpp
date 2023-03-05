#include "Fecha.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Probando constructor por defecto con f1\n";

    Fecha f1;
    cout << "f1 es : " << f1 << "\n";

    cout << "Probando constructor\n";

    Fecha f2{5,3,2023};

    cout << "f2 es: " << f2 << "\n";

    cout << "probando funcion avanzar\n";
    
    Fecha f3 = f2.avanzar(20);

    cout << "Fecha inicial: " << f2 << "Luego de avanzar 20 dias f3: " << f3 << "La fecha inicial no debe cambiar, f2: " << f2;

    cout << "Probando operadores\n";

    f2 > f1? cout << "f2 > f1\n" : cout << "f2 no es mayor que f1\n";

    f2 < f1? cout << "f2 < f1\n" : cout << "f2 no es menor que f1\n";

    f2 == f1 ? cout << "f2 == f1\n" : cout << "f2 y f1 no son iguales\n";

    f2 != f1 ? cout << "f2 != f1\n" : cout << "f2 es igual a f1\n";

    f2 >= f1 ? cout << "f2 >= f1\n" : cout << "f2 no es mayor o igual a f1\n";

    f2 <= f1 ? cout << "f2 <= f1\n" : cout << "f2 no es menor o igual a f1\n";  

    cout << "Probando decrementar y retroceder\n";

    cout << "f2 es : " << f2 << "f3 es: " << f3 << "La diferencia entre f2 y f3 es: " << f2.diferencia(f3) << "\n";

    Fecha f4 = f3.retroceder(20);

    cout << "Luego de retroceder f3 es : " << f3 << "f4 es: " << f4 << "La diferencia entre f2 y f4 es: " << f2.diferencia(f4) << "\n";

    return 0;
}
