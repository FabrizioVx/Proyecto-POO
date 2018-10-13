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
    cout<<"Proporcione su nombre: "; getline(cin,nombre);
    cout<<"Proporcione su apellido: "; getline(cin,apellido);

    int puntos=test();//los puntos
    cout<<"PUNTAJE TOTAL = "<<puntos<<endl;

    int ciclo;
    do{
        cout<<"Solo contamos con los horarios del 1 y 2 ciclo...\n";
        cout<<"ingrese ciclo: ";
        ciclo=inden();
    }while(2<ciclo || ciclo<1);
    //solo hasta 1 y 2 ciclo

//imprimiendo horario


    if (puntos<30){//variado
        bajo(ciclo);//solo un horario
    }

    if(puntos>=30 && puntos<70){
        normal(ciclo);//entr a la funcion normal
    }

    if(puntos>=70){
        alto(ciclo);//entra a la funcion alto
    }
    return 0;
}
