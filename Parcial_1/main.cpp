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
            float altura1=0, altura2=0, dist=0, vel_ini1=0,ang1=0,tiempo=0, tiempo_lim=0,g=9.81,tiempo1=0,cont=0;
            cout << "Ingrese altura del canion ofensivo: "; cin >> altura1;
            cout << "Ingrese altura del canion defensivo: "; cin >> altura2;
            cout << "Ingrese la distancia entre los caniones: "; cin >> dist;
            tiempo_lim=2.5; //El disparo debe llegar antes de 2.5 s
            float vc=0,vs=0,det=0,det2=0,a=0,b=0,c=0;
            for(vel_ini1=0.01;vel_ini1>0;vel_ini1+=0.01) {
                for (ang1=0;(ang1>-90 && ang1<=90);ang1++) {
                    if (ang1==90) {
                        ang1=-89;
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
                    if (tiempo<tiempo_lim && tiempo1<tiempo_lim) {
                        if(abs(tiempo-tiempo1)<=0.01) {
                            cont++;
                            if (cont<=3) {
                                cout << "#" << cont << " La vel inicial con " << ang1 << " grados es " << vel_ini1 << " m/s" << endl;
                                cout << "Y se demora " << tiempo << " segundos en impactar." << endl;
                                if (cont == 3) {
                                    break;
                                }
                            }
                        }
                    }
                }
                if (cont == 3) {
                    break;
                }
            }
            if (cont==0) {
                cout << "No se pudo encontrar el disparo por decimales. Por favor ingrese numeros menores." << endl;
            }
        }
        break;

        case 2:
        {
            float altura1=0, altura2=0, dist=0, vel_ini2=0,ang2=0,tiempo=0,g=9.81,tiempo1=0,cont=0;
            cout << "Ingrese altura del canion ofensivo: "; cin >> altura1;
            cout << "Ingrese altura del canion defensivo: "; cin >> altura2;
            cout << "Ingrese la distancia entre los caniones: "; cin >> dist;
            float vc=0,vs=0,det=0,det2=0,a=0,b=0,c=0;
            for(vel_ini2=0.01;vel_ini2>0;vel_ini2+=0.01) {
                for (ang2=0;(ang2>=0 && ang2<=90) || (ang2>270 && ang2<360);ang2++) {
                    if (ang2==90) {
                        ang2=271;
                    }
                    vc=cos(ang2*(3.14/180));
                    vs=sin(ang2*(3.14/180));
                    a=g/2;
                    b=(vel_ini2*vs)*-1;
                    c=altura2-altura1;
                    det=((b*b)-(4*a*c));
                    det2=-1*(b)+sqrt(det);
                    tiempo=det2/(2*a);
                    tiempo1=dist/(vc*vel_ini2);
                    if(abs(tiempo-tiempo1)<=0.01) {
                        cont++;
                        if (cont<=3) {
                            cout << "#" << cont << " La vel inicial con " << ang2 << " grados es " << vel_ini2 << " m/s" << endl;
                            cout << "Y se demora " << tiempo << " segundos en impactar." << endl;
                            if (cont == 3) {
                                break;
                            }
                        }
                    }
                }
                if (cont == 3) {
                    break;
                }
            }
            if (cont==0) {
                cout << "No se pudo encontrar el disparo por decimales. Por favor ingrese numero menores." << endl;
            }
        }
        break;

        case 3:
        {

        }
        break;

        default:
        {
            cout << "Ingrese 1, 2, 3 o 4" << endl;
        }
        break;

        }
    }
}
