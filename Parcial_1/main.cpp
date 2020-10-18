#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int elec;
    double altura1=0, altura2=0, dist=0, vel_ini1=0,vel_ini2=0,ang1=0,ang2=0,tiempo=0, tiempo_lim=0,g=9.81,tiempo1=0;
    while (true) {
        cout << "Ingrese el punto a ejecutar: "; cin >> elec;
        switch (elec) {

        case 1:
        {
            cout << "Ingrese altura del canion ofensivo: "; cin >> altura1;
            cout << "Ingrese altura del canion defensivo: "; cin >> altura2;
            cout << "Ingrese la distancia entre los caniones: "; cin >> dist;
            tiempo_lim=2.5; //El disparo debe llegar antes de 2.5 s
            ang1=45;
            if (altura1>altura2 || altura1<altura2) { //cuando altura del ofensivo es mayor a la altura del defensivo
                double cos,det,det2;
                cos=sqrt(2)/2;
                for(vel_ini1=0.001;tiempo<2.5;vel_ini1=vel_ini1+0.001) {
                    det=((vel_ini1*cos)*(vel_ini1*cos))-(4*(g/2)*(altura2-altura1));
                    det2=vel_ini1*cos+sqrt(det);
                    tiempo=det2/g;
                    tiempo1=dist/(cos*vel_ini1);
                    if(abs(tiempo-tiempo1)<=0.001) {
                        cout<<"La vel inicial con 45 grados es: "<<vel_ini1<<endl;
                    }
                }
//                cos=0.642787;
//                for(vel_ini1=0.001;tiempo<2.5;vel_ini1=vel_ini1+0.001) {
//                    det=((vel_ini1*cos)*(vel_ini1*cos))-(4*(g/2)*(altura2-altura1));
//                    det2=vel_ini1*cos+sqrt(det);
//                    tiempo=det2/g;
//                    tiempo1=dist/(cos*vel_ini1);
//                    if(abs(tiempo-tiempo1)<=0.001) {
//                        cout<<"La vel inicial con 50 grados es: "<<vel_ini1<<endl;
//                    }
//                }
//                cos=0.7660;
//                for(vel_ini1=0.001;tiempo<2.5;vel_ini1=vel_ini1+0.001) {
//                    det=((vel_ini1*cos)*(vel_ini1*cos))-(4*(g/2)*(altura2-altura1));
//                    det2=vel_ini1*cos+sqrt(det);
//                    tiempo=det2/g;
//                    tiempo1=dist/(cos*vel_ini1);
//                    if(abs(tiempo-tiempo1)<=0.001) {
//                        cout<<"La vel inicial con 40 grados es: "<<vel_ini1<<endl;
//                    }
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
