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
    int puntos=test();//los puntos
    cout<<"PUNTAJE TOTAL = "<<puntos<<endl;
    int ciclo, horariopref;
    do{
    cout<<"ingrese ciclo: ";cin>>ciclo;}
    while(5<ciclo || ciclo<=0); //solo hasta quinto ciclo
//imprimiendo horario
    if (test()<30){//variado
        burros(ciclo);//solo un horario
    }
    if(test()>=30 && test()<70){
      cout<<"ingrese horario preferido : ";cin>>horariopref;//manana y tarde
        normales(ciclo,horariopref);//
    }
    if(test()>=70){
      cout<<"ingrese horario preferido: ";cin>>horariopref;//manana tarde y noche
        cracks(ciclo,horariopref);
    }
    return 0;
}
