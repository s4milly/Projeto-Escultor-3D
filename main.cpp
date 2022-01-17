#include <iostream>
#include "Sculptor.h"

using namespace std;

int main(void)
{
     Sculptor coelho(100, 100, 100);

     //cabeça
     coelho.setColor(0.502, 0.502, 0.502, 1.0);
     coelho.putSphere(49, 45, 41, 20);

     //bochecha
     coelho.setColor(0.9, 1.0 , 1.0, 0.7);
     coelho.putEllipsoid(49, 33, 49, 26, 15, 10);

     //boca
     coelho.setColor(0.850, 0.0, 0.0, 0.650);
     coelho.putEllipsoid(50, 20, 49, 8, 2, 5);

     //lingua
     coelho.setColor(0.9, 0.6, 0.7, 0.6);
     coelho.putBox(48, 53, 19, 20, 52, 53);
     coelho.putBox(47, 54, 19, 20, 53, 54);

     //dente
     coelho.setColor(0.9, 1.0 , 1.0, 0.7);
     coelho.putBox(48, 53, 18, 19, 45, 50);

     //orelhas
     coelho.setColor(0.502, 0.502, 0.502, 1.0);
     coelho.putEllipsoid(40, 50, 16, 5, 5, 18); //orelha direita
     coelho.putEllipsoid(60, 50, 16, 5, 5, 18); //orelha esquerda

     //parte interna orelha
     coelho.setColor(0.9, 0.6, 0.7, 0.6);
     coelho.putEllipsoid(40, 49, 16, 3, 5, 12); //orelha direita
     coelho.putEllipsoid(60, 49, 16, 3, 5, 12); //orelha esquerda

     //olhos
     coelho.setColor(0.9, 1.0 , 1.0, 0.7);
     coelho.putEllipsoid(57, 28, 35, 3, 2, 6);
     coelho.putEllipsoid(41, 28, 35, 3, 2, 6);

     //pupila
     coelho.setColor(0.0, 1.0, 0.0, 1);
     coelho.putBox(57, 59, 27, 28, 33, 37); //esquerda
     coelho.putBox(40, 42, 27, 28, 33, 37); //direita

     //nariz
     coelho.setColor(0.9, 0.6, 0.7, 0.6);
     coelho.putBox(48, 52, 24, 25, 41, 43);
     coelho.putBox(49, 51, 23, 24, 41, 42);


     coelho.writeOFF((char *)"C:\\Users\\franc\\Documents\\coelho.off");

     return 0;
}
