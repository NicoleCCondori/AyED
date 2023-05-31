#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h> //potencia

/*a. Se desea calcular el valor de π usando la serie de Liebniz, sin usar ninguna optimización.
b. Debe iterar hasta que el valor de π se correcto en sus 6 primeros decimales (3,141592)*/

using namespace std;
int main()
{
    int i;
    float pi = 0;
    for(i=0; i<=1000000 ; i++)
        pi += (pow(-1,i))/(2*i+1);
    cout << "El valor de pi: " << fixed << setprecision(6) << pi*4 << endl;
    return 0;
}
