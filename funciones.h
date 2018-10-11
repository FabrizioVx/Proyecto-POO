//
// Created by Marko  Puchuri on 25/09/18.
//
#include <iostream>
#include <string>
using namespace std;
#ifndef PROYECTO_1_FUNCIONES_H
#define PROYECTO_1_FUNCIONES_H
int test();
void eliminacion(char curso, string horario[8][5]);//eliminacion de los cursos
void bajo(int ciclo);
void normal(int ciclo);
void leerarch(string a[8][5]);//guardando archivo
void alto(int ciclo);
void imprimir(string horario[8][5]);
int inden();//Verificador de los numeros
string horario(char curso, int ciclo);


#endif //PROYECTO_1_FUNCIONES_H
