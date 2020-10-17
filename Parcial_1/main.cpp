#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int elec;
    float altura1=0, altura2=0, dist=0, vel_ini1=0,vel_ini2=0,ang1=0,ang2=0,tiempo=0, tiempo_lim=0;
    while (true) {
        cout << "Ingrese el punto a ejecutar: "; cin >> elec;
        switch (elec) {

        case 1:
        {
            cout << "Ingrese altura del canion ofensivo: "; cin >> altura1;
            cout << "Ingrese altura del canion defensivo: "; cin >> altura2;
            cout << "Ingrese la distancia entre los caniones: "; cin >> dist;
            tiempo_lim=2.5; //El disparo debe llegar antes de 2.5 s


        }
        break;

        case 2:

        break;

        case 3:

        break;

        default:

        break;

        }
    }
}
