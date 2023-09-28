#include <iostream>
#include <iomanip>
#include <cmath>
/*a. Se desea calcular el valor de π usando la serie de Liebniz, 
sin usar ninguna optimización.
b. Debe iterar hasta que el valor de π se correcto en sus 6 primeros 
decimales (3,141592)*/
using namespace std;

int main() 
{
    long double pi = 0;
    long double precision = 1;
    int i = 0;

    do {
        if (i % 2 == 0) 
        {
            pi += 4 / precision;
        } else {
            pi -= 4 / precision;
        }
        precision += 2;
        i++;
    } while (abs(M_PI - pi) >= 1e-6); 

    cout << "El valor de pi: " << fixed << setprecision(6) << pi << endl;
    return 0;
}
