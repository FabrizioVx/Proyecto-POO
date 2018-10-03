//
// Created by Marko  Puchuri on 25/09/18.
//

#include <iostream>
#include <fstream>
#include <string>
#include "funciones.h"
#include <stdio.h>
#include <ctype.h>
using namespace std;
int test() {
    char respuesta;
    int punt=0;
    for (int i = 0; i < 10; i++) {
        switch (i) {
            case 1:
                cout << "test de CI" << endl;

                cout << "1.- ¿Que numero hace falta en esta secuencia?\n"
                        "4 9 16 25 [?] 64" << endl;
                cout << "a) 50" << endl;
                cout << "b) 49" << endl;
                cout << "c) 30" << endl;
                cout << "d) 59" << endl;
                cin >> respuesta;

                if (respuesta == 'a'||respuesta == 'A') {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }
                break;


            case 2:
                cout << "test de CI" << endl;

                cout << "2.- Si FP = 10 y HX = 16, entonces DX = ?" << endl;
                cout << "a) 20" << endl;
                cout << "b) 15" << endl;
                cout << "c) 12" << endl;
                cout << "d) 50" << endl;
                cin >> respuesta;

                if (respuesta == 'b' ||respuesta == 'B' ) {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }
                break;
            case 3:
                cout << "test de CI" << endl;

                cout << "¿Cuál letra debe ser la siguiente en esta secuencia? L K J H [?]" << endl;
                cout << "a) M" << endl;
                cout << "b) O" << endl;
                cout << "c) P" << endl;
                cout << "d) G" << endl;
                cin >> respuesta;

                if (respuesta == 'b' ||respuesta == 'B') {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }
                break;
            case 4:
                cout << "test de CI" << endl;

                cout << "PERA es a MANZANA como PATATA es a:" << endl;
                cout << "a) RABANO" << endl;
                cout << "b) PLATANO" << endl;
                cout << "c) FRESA" << endl;
                cout << "d) LECHUGA" << endl;
                cin >> respuesta;

                if (respuesta == 'a' ||respuesta == 'A') {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }
                break;
            case 5:
                cout << "test de CI" << endl;

                cout << "Dos personas caminan 4 metros desde el mismo \n punto en dirección opuesta, luego giran a la izquierda y caminan 3 metros. ¿A qué distancia se encuentran?" << endl;
                cout << "a) 8" << endl;
                cout << "b) 10" << endl;
                cout << "c) 15" << endl;
                cout << "d) 5" << endl;
                cin >> respuesta;

                if (respuesta == 'b' ||respuesta == 'B') {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }

                break;
            case 6:
                cout << "test de CI" << endl;

                cout << "E-book es a electrónico como libro es a..." << endl;
                cout << "a) Medio" << endl;
                cout << "b) Letras" << endl;
                cout << "c) Papel" << endl;
                cout << "d) Hoja" << endl;
                cin >> respuesta;

                if (respuesta == 'c' ||respuesta == 'C') {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }
                break;
            case 7:
                cout << "test de CI" << endl;

                cout << "Tomás, Pedro, Jaime, Susana y Julia realizaron el test.\n Julia obtuvo mayor puntuación que Tomás, Jaime puntuó más bajo que Pedro pero más alto que Susana, \n y Pedro logró menos puntos que Tomás. ¿Quién obtuvo la puntuación más alta?" << endl;
                cout << "a) Tomás" << endl;
                cout << "b) Jaime" << endl;
                cout << "c) Susana" << endl;
                cout << "d) Julia" << endl;
                cin >> respuesta;

                if (respuesta == 'c' ||respuesta == 'C') {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }
                break;
            case 8:
                cout << "test de CI" << endl;

                cout << "¿Qué palabra no pertenece al siguiente grupo?" << endl;
                cout << "a) sonrisa" << endl;
                cout << "b) pluma" << endl;
                cout << "c) hermoso" << endl;
                cout << "d) pensamiento" << endl;
                cin >> respuesta;

                if (respuesta == 'c' ||respuesta == 'C') {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }
                break;
            case 9:
                cout << "test de CI" << endl;

                cout << "¿Qué palabra no pertenece al siguiente grupo?" << endl;
                cout << "a) sonrisa" << endl;
                cout << "b) pluma" << endl;
                cout << "c) hermoso" << endl;
                cout << "d) pensamiento" << endl;
                cin >> respuesta;

                if (respuesta == 'c' ||respuesta == 'C') {
                    cout<<"//escribe solo una letra. Se tomara en cuenta el primer digito\n";
                    cout << "la respuesta es correcta" << endl;
                    punt= punt+10;

                }

                else {
                    cout << "La respuesta es incorrecta" << endl;
                }
                break;
        }

    }


    return punt;
}

void bajo(int ciclo){
    if (ciclo==1){
                            // Lu--Ma--Mi--Ju--Vi
        string horario[7][5]={{" ","f"," "," ","f"},//7-9
                              {" "," ","m"," "," "},//9-11
                              {"m"," "," "," "," "},//11-13
                              {" "," "," "," ","m"},//13-15
                              {" "," "," "," "," "},//15-17
                              {" "," "," "," "," "},//17-19
                              {" "," "," "," "," "}};//19-21

        //se imprime.... se pregunta
        cout<<"quieres cambiarlo hijo de puta?(1=si or 0=no)\n";
        int resp;
        cin>>resp;

        //si es tu respues es si
        if(resp==1){
            cout<<"que curso quieres cambiar\n";
            char curso;
            cin>>curso;//f
            if (curso=='f'){
                for (int y=0;y<7;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x]=="f"){
                            horario[y][x]=" ";
                        }
                    }
                }

            //Borro f
                cout<<"horarios disponibles:\n";
                cout<<"fisica seccion 1 mar 7-9 and vi 7-9 vac:12\n";
                cout<<"fisica seccion 2 mar 9-11 and vi 9-11 vac:0\n";
                cout<<"cual desea(seccion 1=1, seccion 2 =2 or niguno=0)\n";
                int cambio;
                cin>>cambio;
                if(cambio==1){
                    horario[0][1]="f";
                    horario[0][4]="f";

                }
                if(cambio==2){
                    horario[1][1]="f";
                    horario[1][4]="f";

                }

            }
            if (curso=='m'){
                for (int y=0;y<7;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x]=="m"){
                            horario[y][x]=" ";
                        }
                    }
                }

                //Borro f
                cout<<"horarios disponibles:\n";
                cout<<"matematica seccion 1 lu 11-1 mi 9-11 vi 1-3 vac:50\n";
                cout<<"matematica seccion 2 lu 1-3 mi 11-1 vi 3-5 vac:35\n";
                cout<<"cual desea(seccion 1=1, seccion 2 =2 or niguno=0)\n";
                int cambio;
                cin>>cambio;
                if(cambio==1){
                    horario[2][0]="m";
                    horario[1][2]="m";
                    horario[3][4]="m";

                }
                if(cambio==2){
                    horario[3][0]="m";
                    horario[2][2]="m";
                    horario[4][4]="m";

                }

            }
            
        }

    }

}
