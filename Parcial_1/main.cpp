#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int elec;
    while (true) {
        cout << "Ingrese el punto a ejecutar: "; cin >> elec;
        switch (elec) {

        case 1:
        {
            float altura1=0, altura2=0, dist=0, vel_ini1=0,ang1=5,tiempo=0, tiempo_lim=0,g=9.81,tiempo1=0,cont=0;
            cout << "Ingrese altura del canion ofensivo: "; cin >> altura1;
            cout << "Ingrese altura del canion defensivo: "; cin >> altura2;
            cout << "Ingrese la distancia entre los caniones: "; cin >> dist;
            tiempo_lim=2.5; //El disparo debe llegar antes de 2.5 s
            float vc=0,vs=0,det=0,det2=0,a=0,b=0,c=0;
            for(vel_ini1=0.01;vel_ini1<=10000;vel_ini1+=0.01) {
                for (ang1=5;(ang1>0 && ang1<=90) || (ang1>270 && ang1<360);ang1+=5) {
                    if (ang1==90) {
                        ang1=275;
                    }
                    vc=cos(ang1*(3.14/180));
                    vs=sin(ang1*(3.14/180));
                    a=g/2;
                    b=(vel_ini1*vs)*-1;
                    c=altura2-altura1;
                    det=((b*b)-(4*a*c));
                    det2=-1*(b)+sqrt(det);
                    tiempo=det2/(2*a);
                    tiempo1=dist/(vc*vel_ini1);
                    if (tiempo<2.5 && tiempo1<2.5) {
                        if(abs(tiempo-tiempo1)<=0.001) {
                            cont++;
                            if (cont<=3) {
                                cout << "#" << cont << " La vel inicial con " << ang1 << " grados es: " << vel_ini1 << endl;
                                cout << "Y se demora " << tiempo << " segundos en impactar." << endl;
                            }
                        }
                    }
                }
            }
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
