#include <iostream>
#include <fstream>
#include <string>
#include "funciones.h"
using namespace std;
int main() {
    cout<<"SIMULADOR DE HORARIO\n";

    string nombre, apellido;
    cout<<"Proporcione su nombre: "; cin>>nombre;
    cout<<"Proporcione su apellido: "; cin>>apellido;

   // int puntos=test();//los puntos
    //cout<<"PUNTAJE TOTAL = "<<puntos<<endl;

    int ciclo, horariopref;

    do{
        cout<<"//si incluye una letra lo tomaremos como ciclo 1\n";
        cout<<"ingrese ciclo: ";
        cin>>ciclo;
    }
    while(5<ciclo || ciclo<0); //solo hasta quinto ciclo

//imprimiendo horario
    
    if (test()<30){//variado
        bajo(ciclo);//solo un horario
    }

    if(test()>=30 && test()<70){
      cout<<"ingrese horario preferido : ";cin>>horariopref;//manana y tarde
        normal(ciclo,horariopref);//
    }

    if(test()>=70){
      cout<<"ingrese horario preferido: ";cin>>horariopref;//manana tarde y noche
        alto(ciclo,horariopref);
    }
    return 0;
}
