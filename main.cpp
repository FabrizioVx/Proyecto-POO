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
    cout<<"ingrese ciclo: ";cin>>ciclo;

    if (test()<30){
        burros(ciclo);//solo un horario
    }
    if(test()>=30 && test()<70){
      cout<<"ingrese horario preferido(manana - 1 o tarde - 2) : ";cin>>horariopref;
        normales(ciclo,horariopref);//
    }
    if(test()>=70){
      cout<<"ingrese horario preferido(manana - 1, tarde - 2, noche 3): ";cin>>horariopref;
        cracks(ciclo,horariopref);
    }
    return 0;
}
