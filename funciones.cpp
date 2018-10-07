//
// Created by Marko  Puchuri on 25/09/18.
//

#include <iostream>
#include <fstream>
#include <string>
#include "funciones.h"
#include <stdio.h>
#include <ctype.h>
#include <iomanip>
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

void alto(int ciclo){
    if (ciclo==2){
        // Lu--Ma--Mi--Ju--Vi
        string horario[8][5]={{"        Lunes         ","  Martes ","      Miercoles       ","         Jueves       ","Viernes     "},//dias
                              {"E. Discrestas 2       ","Lab com 2","                      ","                      ","            "},//7-9
                              {"Arte y tecnologia     ","Fisica 2 ","                      ","                      ","Fisica 2    "},//9-11
                              {"Matematica 2          ","         ","Matematica 2          ","                      ","Matematica 2"},//11-13
                              {"                      ","POO 1    ","                      ","Lab com 2             ","POO 1       "},//13-15
                              {"Desarrollo de empresas","         ","Desarrollo de empresas","Desarrollo de empresas","            "},//15-17
                              {"                      ","         ","                      ","                      ","            "},//17-19
                              {"                      ","         ","                      ","                      ","            "}};//19-21
        for(int i=0;i<8;i++){
            if(i==0){cout<<"Dias: ";}
            if(i==1){cout<<"07-09 ";}
            if(i==2){cout<<"09-11 ";}
            if(i==3){cout<<"11-13 ";}
            if(i==4){cout<<"13-15 ";}
            if(i==5){cout<<"15-17 ";}
            if(i==6){cout<<"17-19 ";}
            if(i==7){cout<<"19-21 ";}
            for(int j=0;j<5;j++){

                cout<<setw(5)<<"|"<<horario[i][j]<<"|";
            }

            cout<<endl;
        }
        //se imprime el horario
        int resp=1;//para entrar al loop
        do{
            cout<<"quieres cambiar el horario propuesto?(1=si or 0 u otro numero=no)\n";//pregunta si deseas cambiar
            cin>>resp;
            if(resp!=1)break;//si tu respuesta es no se sale del loop
            cout<<"que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
            string curso;
            cin>>curso;//se ingresa el curso a cambiar

            //fisica 2
            if (curso[0]=='f' || curso[0]=='F'){//se elimina en toda la matriz el curso elegido
                for (int y=1;y<8;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x][0]=='F'){
                            horario[y][x]="                      ";
                        }
                    }
                }

                //Borrado f
                //comunicando los cursos disponibles
                cout<<"horarios disponibles sugeridos:\n";
                cout<<"fisica seccion 1 mar 7-9 and vi 7-9 prof: Katia Zegarra\n";
                cout<<"fisica seccion 2 mar 9-11 and vi 9-11 prof: Katia Zegarra\n";
                cout<<"cual desea(seccion 1=1, seccion 2 =2 or niguno= 0 o incorrecto)\n";
                int cambio;
                cin>>cambio;// opcion a eligir

                if(cambio==1){//primero se verifica si hace conflicto en tu horario
                    char muestra = horario[1][1][0];
                    char muestra2=horario[1][4][0];
                    int valor = int(muestra);
                    int valor2=int(muestra2);
                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][1]="Fisica 2";
                            horario[1][4]="Fisica 2";
                        }
                    }


                }
                if(cambio==2){//primero se verifica si hace conflicto en tu horario
                    char muestra = horario[2][1][0];
                    char muestra2=horario[2][4][0];
                    int valor = int(muestra);
                    int valor2=int(muestra2);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[2][1]="Fisica 2";
                            horario[2][4]="Fisica 2";
                        }
                    }


                }

            }

            //matematica 2
            if(curso[0]=='m' || curso[0]=='M'){
                for (int y=1;y<8;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x][0]=='M'){
                            horario[y][x]=" ";
                        }
                    }
                }
                cout<<"horarios disponibles:\n";
                cout<<"matematica 2 seccion 1 lun mi vi 7-9 prof: Xyobi Chavez\n";
                cout<<"matematica 2 seccion 2 lun mi vi 9-11 prof: Miguel Palomino\n";
                cout<<"matematica 2 seccion 3 lun mi vi 11-13 prof: Xyobi Chavez\n";
                cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3 or niguno= 0 o incorrecto)\n";
                int cambio;
                cin>>cambio;// opcion a eligir
                if(cambio==1){//primero se verifica si hace conflicto en tu horario
                    char muestra = horario[1][0][0];
                    char muestra2= horario[1][2][0];
                    char muestra3= horario[1][4][0];

                    int valor = int(muestra);
                    int valor2=int(muestra2);
                    int valor3=int(muestra3);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            if(valor3<90 && valor3>64)cout<<"conflicto"<<endl;
                            else{
                                horario[1][0]="Matematica 2";
                                horario[1][2]="Matematica 2";
                                horario[1][4]="Matematica 2";
                            }
                        }
                    }


                }
                if(cambio==2){//primero se verifica si hace conflicto en tu horario
                    char muestra = horario[2][0][0];
                    char muestra2= horario[2][2][0];
                    char muestra3= horario[2][4][0];

                    int valor = int(muestra);
                    int valor2=int(muestra2);
                    int valor3=int(muestra3);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            if(valor3<90 && valor3>64)cout<<"conflicto"<<endl;
                            else{
                                horario[2][0]="Matematica 2";
                                horario[2][2]="Matematica 2";
                                horario[2][4]="Matematica 2";
                            }
                        }
                    }


                }
                if(cambio==3){//primero se verifica si hace conflicto en tu horario
                    char muestra = horario[3][0][0];
                    char muestra2= horario[3][2][0];
                    char muestra3= horario[3][4][0];

                    int valor = int(muestra);
                    int valor2=int(muestra2);
                    int valor3=int(muestra3);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            if(valor3<90 && valor3>64)cout<<"conflicto"<<endl;
                            else{
                                horario[3][0]="Matematica 2";
                                horario[3][2]="Matematica 2";
                                horario[3][4]="Matematica 2";
                            }
                        }
                    }


                }


            }
            //labcom2
            if(curso[0]=='l' || curso[0]=='L'){
                for (int y=1;y<8;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x][0]=='L'){
                            horario[y][x]=" ";
                        }
                    }
                }
                cout<<"horarios disponibles:\n";
                cout<<"Labcom 2 seccion 1 lun  vi 7-9 Prof: Carlo Guevara\n";
                cout<<"labcom 2 seccion 2 mar ju 9-11 Prof: \n";
                cout<<"labcom 2 seccion 3 mi vi 11-13 Prof:\n";
                cout<<"labcom 2 seccion 4 ju vi 11-13 Prof:\n";
                cout<<"labcom 2 seccion 5 ma ju 7-9 Prof:\n";

                cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4 or niguno= 0 u otro numero)\n";
                int cambio;
                cin>>cambio;// opcion a eligir
                if(cambio==1){
                    char muestra = horario[1][0][0];
                    char muestra2= horario[1][4][0];

                    int valor = int(muestra);
                    int valor2=int(muestra2);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][0]="labcom 2";
                            horario[1][2]="labcom 2";
                            horario[1][4]="labcom 2";
                        }
                    }

                }
                if(cambio==2){
                    char muestra = horario[2][1][0];
                    char muestra2= horario[2][3][0];

                    int valor = int(muestra);
                    int valor2=int(muestra2);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][0]="labcom 2";
                            horario[1][2]="labcom 2";
                            horario[1][4]="labcom 2";
                        }
                    }

                }
                if(cambio==3){
                    char muestra = horario[3][2][0];
                    char muestra2= horario[3][4][0];

                    int valor = int(muestra);
                    int valor2=int(muestra2);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][0]="labcom 2";
                            horario[1][2]="labcom 2";
                            horario[1][4]="labcom 2";
                        }
                    }


                }
                if(cambio==4){
                    char muestra = horario[3][3][0];
                    char muestra2= horario[3][4][0];

                    int valor = int(muestra);
                    int valor2=int(muestra2);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][0]="labcom 2";
                            horario[1][2]="labcom 2";
                            horario[1][4]="labcom 2";
                        }
                    }


                }
                if(cambio==5){
                    char muestra = horario[1][1][0];
                    char muestra2= horario[4][3][0];

                    int valor = int(muestra);
                    int valor2=int(muestra2);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][0]="labcom 2";
                            horario[1][2]="labcom 2";
                            horario[1][4]="labcom 2";
                        }
                    }

                }


            }

            //Estrucutra discretas 2
            if(curso[0]=='e' || curso[0]=='E'){
                for (int y=1;y<8;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x][0]=='E'){
                            horario[y][x]=" ";
                        }
                    }
                }


            }
            //arte u tecnologia
            if(curso[0]=='a' || curso[0]=='A'){
                for (int y=1;y<8;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x][0]=='A'){
                            horario[y][x]=" ";
                        }
                    }
                }
                cout<<"horarios disponibles sugeridos:\n";
                cout<<"Arte y tecnologia seccion 1 lun 9-11 prof: \n";
                cout<<"Arte y tecnologia seccion 2 lun 9-11 prof: \n";
                cout<<"Arte y tecnologia seccion 3 vi 11-13 prof: \n";
                cout<<"Arte y tecnologia seccion 4 ju 9-11 prof: \n";
                cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4 or niguno= 0 o incorrecto)\n";
                int cambio;
                cin>>cambio;// opcion a eligir
                if(cambio==1){

                }
                if(cambio==2){

                }
                if(cambio==3){

                }
                if(cambio==4){

                }


            }
            //POO1
            if(curso[0]=='p' || curso[0]=='P'){
                for (int y=1;y<8;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x][0]=='P'){
                            horario[y][x]=" ";
                        }
                    }
                }
                cout<<"horarios disponibles sugeridos:\n";
                cout<<"POO 1 seccion 1 mar 13-15 and vi 13-15 prof: Cuadros\n";
                cout<<"POO 1 seccion 2 mar 7-9 and ju 9-11 prof: Bernejo\n";
                cout<<"POO 1 seccion 3 mar 19-21 and vi 19-21 prof: Melgrejo\n";
                cout<<"POO 1 seccion 4 lun 17-15 and vi 13-15 prof: Kenneth\n";
                cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4 or niguno= 0 o incorrecto)\n";
                int cambio;cin>>cambio;// opcion a eligir
                if(cambio==1){
                    char muestra = horario[1][1][0];
                    char muestra2=horario[1][4][0];
                    int valor = int(muestra);
                    int valor2=int(muestra2);
                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][1]="POO 1";
                            horario[1][4]="POO 1";
                        }
                    }
                }
                if(cambio==2){
                    char muestra = horario[1][1][0];
                    char muestra2=horario[1][4][0];
                    int valor = int(muestra);
                    int valor2=int(muestra2);
                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][1]="POO 1";
                            horario[1][4]="POO 1";
                        }
                    }
                }
                if(cambio==3){
                    char muestra = horario[1][1][0];
                    char muestra2=horario[1][4][0];
                    int valor = int(muestra);
                    int valor2=int(muestra2);
                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][1]="POO 1";
                            horario[1][4]="POO 1";
                        }
                    }
                }
                if(cambio==4){
                    char muestra = horario[1][1][0];
                    char muestra2=horario[1][4][0];
                    int valor = int(muestra);
                    int valor2=int(muestra2);
                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        if(valor2<90 && valor2>64)cout<<"conflicto"<<endl;
                        else{
                            horario[1][1]="POO 1";
                            horario[1][4]="POO 1";
                        }
                    }

                }
            }
            //Desarrollo de empresas
            if(curso[0]=='d' || curso[0]=='D'){
                for (int y=1;y<8;y++){
                    for(int x=0;x<5;x++){
                        if (horario[y][x][0]=='D'){
                            horario[y][x]=" ";
                        }
                    }
                }
                cout<<"horarios disponibles sugeridos:\n";
                cout<<"Desarrollo de empresas seccion 1 lun 7-9 prof:Guevara \n";
                cout<<"Desarrollo de empresas seccion 2 vi 9-11 prof:Zorrilla \n";
                cout<<"Desarrollo de empresas seccion 3 mi 11-13 prof:Camacho \n";
                cout<<"Desarrollo de empresas seccion 4 ma 17-19 prof:Guevara \n";
                cout<<"Desarrollo de empresas seccion 4 ma 19-21 prof:Guevara \n";
                cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4 or niguno= 0 o incorrecto)\n";
                int cambio;
                cin>>cambio;// opcion a eligir
                if(cambio==1){
                    char muestra = horario[1][0][0];

                    int valor = int(muestra);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        horario[1][1]="Desarrollo de empresas";
                        horario[1][4]="Desarrollo de empresas";
                    }

                }
                if(cambio==2){
                    char muestra = horario[2][4][0];

                    int valor = int(muestra);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        horario[1][1]="Desarrollo de empresas";
                        horario[1][4]="Desarrollo de empresas";
                    }


                }
                if(cambio==3){
                    char muestra = horario[3][2][0];

                    int valor = int(muestra);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        horario[1][1]="Desarrollo de empresas";
                        horario[1][4]="Desarrollo de empresas";
                    }


                }
                if(cambio==4){
                    char muestra = horario[5][1][0];

                    int valor = int(muestra);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        horario[1][1]="Desarrollo de empresas";
                        horario[1][4]="Desarrollo de empresas";
                    }


                }
                if(cambio==5){
                    char muestra = horario[6][1][0];

                    int valor = int(muestra);

                    if(valor<90 && valor>64)cout<<"conflicto"<<endl;
                    else{
                        horario[1][1]="Desarrollo de empresas";
                        horario[1][4]="Desarrollo de empresas";
                    }


                }


            }

        }while(resp==1);


        for(int i=0;i<8;i++){
            if(i==0){cout<<"Dias  ";}
            if(i==1){cout<<"07-09 ";}
            if(i==2){cout<<"09-11 ";}
            if(i==3){cout<<"11-13 ";}
            if(i==4){cout<<"13-15 ";}
            if(i==5){cout<<"15-17 ";}
            if(i==6){cout<<"17-19 ";}
            if(i==7){cout<<"19-21 ";}
            for(int j=0;j<5;j++){

                cout<<setw(5)<<"|"<<horario[i][j]<<"|";
            }

            cout<<endl;
        }
    }

}
