//
// Created by Marko  Puchuri on 25/09/18.
//

#include <string>
#include "funciones.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;
void QUIZ();

int main()
{
    system("pause");
    return 0;
}

void QUIZ(){
    ofstream quiz;
    
    quiz.open("d://prueba/ejemplo.txt",ios::out);
    
    if(quiz.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    
    quiz<<"Hola xd";
    
    quiz.close();
    
    
    
}
