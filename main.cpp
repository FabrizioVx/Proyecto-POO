#include <iostream>
#include <fstream>
#include <string>
#include "funciones.h"
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
        cout<<"Solo contamos con los horarios del 1 y 2 ciclo...\n";
        cout<<"ingrese ciclo: ";
        cin>>ciclo;
    }
    while(2<ciclo || ciclo<1); //solo hasta quinto ciclo

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
