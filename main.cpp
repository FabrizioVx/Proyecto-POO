#include <iostream>
#include <fstream>
#include <string>
#include "funciones.h"
#include <stdio.h>
#include <ctype.h>
#include <iomanip>
using namespace std;
int main() {
    cout<<"HORARIO\n";

    string nombre, apellido;
    cout<<"Proporcione su nombre: "; cin>>nombre;
    cout<<"Proporcione su apellido: "; cin>>apellido;

    //int puntos=test();//los puntos
    //cout<<"PUNTAJE TOTAL = "<<puntos<<endl;

    int ciclo;
    do{
        ciclo=inden();}while(2<ciclo || ciclo<1);
    //solo hasta 1 y 2 ciclo

//imprimiendo horario
    alto(ciclo);

    /*if (test()<30){//variado
        bajo(ciclo);//solo un horario
    }

    if(test()>=30 && test()<70){

        normal(ciclo);//
    }

    if(test()>=70){

        alto(ciclo);
    }*/
    return 0;
}
