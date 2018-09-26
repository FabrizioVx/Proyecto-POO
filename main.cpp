#include <iostream>
#include <fstream>
#include <string>
#include "funciones.h"
using namespace std;
int main() {
    int n;
    string nombre;
    int ciclo, horariopref;
    if (promint()<5){
        burros(ciclo,horariopref);//
    }
    if(promint()>=5 && promint()<8){
        normales(ciclo,horariopref);
    }
    if(promint()>=8){
        cracks(ciclo,horariopref);//como io
    }
    return 0;
}
