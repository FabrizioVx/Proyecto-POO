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
void imprimir(string horario[8][5]){
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
}
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
void eliminacion(string curso, string matriz[8][5]){
    for (int y=1;y<8;y++){
        for(int x=0;x<5;x++){
            if (matriz[y][x][0]==toupper(curso[0])){
                matriz[y][x]=" ";
            }
        }
    }
}
void alto(int ciclo){
    if(ciclo==1){
        string horario[8][5]={{"LUNES       ","MARTES   ","MIERCOLES   ","JUEVES","VIERNES     "},//dias
                              {"            ","         ","            ","      ","            "},//7-9
                              {"            ","         ","MATEMATICA 1","      ","            "},//9-11
                              {"MATEMATICA 1","LAB COM 1","            ","      ","            "},//11-13
                              {"            ","         ","DESAFIOS G. ","      ","MATEMATICA 1"},//13-15
                              {"QUIMICA     ","ICC      ","LAB COM 1   ","      ","ICC         "},//15-17
                              {"            ","         ","            ","      ","            "},//17-19
                              {"            ","         ","            ","      ","            "}};//19-21

        imprimir(horario);
        int resp=1;//para entrar al loop
        do {
            cout << "quieres cambiar el horario propuesto?(1=si or 0=no)\n";//pregunta si deseas cambiar
            cin >> resp;
            if (resp == 0)break;//si tu respuesta es no se sale del loop
            if (resp != 1) { cout << "valor incorrecto.. ingrese otra vez\n"; }
            else {
                cout << "que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
                string curso;
                cin >> curso;//se ingresa el curso a cambiar
                if (toupper(curso[0])=='M'){
                    int cambio=1;
                    //comunicando los cursos disponibles
                    do{
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"Matematica 1 seccion 1 lu 11-13, mi 9-11 and vi 13-15 prof: Xyoby Chavez\n";
                        cout<<"Matematica 1 seccion 2 lu 13-15, mi 15-17 and vi 15-17 prof: Xyoby Chavez\n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 or niguno= 0 )\n";

                        cin>>cambio;// opcion
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);
                        if(cambio==1){}
                        if(cambio==2){}

                    }while(cambio!=0);

                }
                if (toupper(curso[0])=='Q'){
                    int cambio=1;
                    //comunicando los cursos disponibles
                    do{
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"Quimica General seccion 1 ma 17-19 prof: Hoyos\n";
                        cout<<"Quimica general seccion 2 lu 15-17 prof: Pinedo\n";
                        cout<<"Quimica general seccion 3 mi 15-17 prof: Hoyos\n";
                        cout<<"Quimica general seccion 4 mi 13-15 prof: Ratti\n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, borrar curso=-1 or niguno= 0 )\n";

                        cin>>cambio;// opcion
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);
                        if(cambio==1){}
                        if(cambio==2){}
                        if(cambio==3){}
                        if(cambio==4){}

                    }while(cambio!=0);

                }
                if (toupper(curso[0])=='D'){
                    int cambio=1;
                    //comunicando los cursos disponibles
                    do{
                        cout<<"horarios disponibles sugeridos:\n";


                        cout<<"cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 or niguno= 0 )\n";

                        cin>>cambio;// opcion
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);
                        if(cambio==1){}
                        if(cambio==2){}

                    }while(cambio!=0);

                }
                if (toupper(curso[0])=='I'){
                    int cambio=1;
                    //comunicando los cursos disponibles
                    do{
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"ICC seccion 1 ma 7-9 and mi 15-17 prof: Cuadros\n";
                        cout<<"ICC seccion 2 mi 9-11 and vi 9-11 prof: Bermejo\n";
                        cout<<"ICC seccion 3 ma 17-19 and ju 17-19 prof: Melgrejo\n";
                        cout<<"ICC seccion 4 lu 13-15 and vi 13-15 prof: Kenneth\n";
                        cout<<"ICC seccion 5 lu 11-13 and vi 19-21 prof: Alvarado\n";
                        cout<<"ICC seccion 6 mi 15-17 and vi 15-17 prof: Flores\n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, seccion 5=5, seccion 6=6, borrar curso=-1 or niguno= 0 )\n";

                        cin>>cambio;// opcion
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);
                        if(cambio==1){}
                        if(cambio==2){}
                        if(cambio==3){}
                        if(cambio==4){}
                        if(cambio==5){}
                        if(cambio==6){}

                    }while(cambio!=0);

                }
                if (toupper(curso[0])=='L'){
                    int cambio=1;
                    //comunicando los cursos disponibles
                    do{
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"Lab com 1 seccion 1 mar 7-9 and ju 11-13 prof: Cuba\n";
                        cout<<"Lab com 1 seccion 2 mar 7-9 and ju 7-9 prof: Durand\n";
                        cout<<"Lab com 1 seccion 3 mi 17-19 and vi 13-15 prof: Hidalgo\n";
                        cout<<"Lab com 1 seccion 4 lu 15-16 and vi 9-11 prof: Ramirez\n";
                        cout<<"Lab com 1 seccion 5 ma 11-13 and mi 15-17 prof: Corzo\n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, seccion 5=5, borrar curso=-1 or niguno= 0 )\n";

                        cin>>cambio;// opcion
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);
                        if(cambio==1){}
                        if(cambio==2){}
                        if(cambio==3){}
                        if(cambio==4){}
                        if(cambio==5){}


                    }while(cambio!=0);

                }

            }
        }while(resp!=0);

        imprimir(horario);
    }
    if (ciclo==2){
        // Lu--Ma--Mi--Ju--Vi
        string horario[8][5]={{"        Lunes         ","  Martes ","      Miercoles       ","         Jueves       ","Viernes     "},//dias
                              {"E. Discrestas 2       ","Lab com 2","                      ","                      ","            "},//7-9
                              {"Arte y tecnologia     ","Fisica 2 ","E. Discrestas 2       ","E. Discrestas 2       ","Fisica 2    "},//9-11
                              {"Matematica 2          ","         ","Matematica 2          ","                      ","Matematica 2"},//11-13
                              {"                      ","POO 1    ","                      ","Lab com 2             ","POO 1       "},//13-15
                              {"Desarrollo de empresas","         ","Desarrollo de empresas","Desarrollo de empresas","            "},//15-17
                              {"                      ","         ","                      ","                      ","            "},//17-19
                              {"                      ","         ","                      ","                      ","            "}};//19-21
        imprimir(horario);
        //se imprime el horario
        int resp=1;//para entrar al loop
        do{
            cout<<"quieres cambiar el horario propuesto?(1=si or 0=no)\n";//pregunta si deseas cambiar
            cin>>resp;
            if(resp==0)break;//si tu respuesta es no se sale del loop
            if(resp!=1){cout<<"valor incorrecto.. ingrese otra vez\n";}
            else {
                cout << "que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
                string curso;
                cin >> curso;//se ingresa el curso a cambiar


                //fisica 2
                if (toupper(curso[0])=='F'){

                    int cambio=1;
                    //comunicando los cursos disponibles
                    do{
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"fisica seccion 1 mar 7-9 and vi 7-9 prof: Katia Zegarra\n";
                        cout<<"fisica seccion 2 mar 9-11 and vi 9-11 prof: Katia Zegarra\n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 niguno= 0 )\n";

                        cin>>cambio;// opcion
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);
                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[1][1][0];
                            char muestra2=horario[1][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                    horario[1][1]="Fisica 2";
                                    horario[1][4]="Fisica 2";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }

                        }
                        if(cambio==2){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][1][0];
                            char muestra2=horario[2][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    //se elimina en toda la matriz el curso elegido
                                    eliminacion(curso,horario);
                                    horario[2][1]="Fisica 2";
                                    horario[2][4]="Fisica 2";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }


                    }while(cambio!=0);
                }
                //matematica 2
                if(toupper(curso[0])=='M'){
                    int cambio=1;
                    //comunicando los cursos disponibles
                    do{
                        cout<<"horarios disponibles:\n";
                        cout<<"matematica 2 seccion 1 lun mi vi 7-9 prof: Xyobi Chavez\n";
                        cout<<"matematica 2 seccion 2 lun mi vi 9-11 prof: Miguel Palomino\n";
                        cout<<"matematica 2 seccion 3 lun mi vi 11-13 prof: Xyobi Chavez\n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, borrar curso=-1 or niguno= 0 )\n";
                        cin>>cambio;// opcion a
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);

                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[1][0][0];
                            char muestra2= horario[1][2][0];
                            char muestra3= horario[1][4][0];

                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            int valor3=int(muestra3);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor3<90 && valor3>64 && muestra3!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                        horario[1][0]="Matematica 2";
                                        horario[1][2]="Matematica 2";
                                        horario[1][4]="Matematica 2";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
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

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor3<90 && valor3>64 && muestra3!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                        horario[2][0]="Matematica 2";
                                        horario[2][2]="Matematica 2";
                                        horario[2][4]="Matematica 2";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
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

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor3<90 && valor3>64 && muestra3!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                        horario[3][0]="Matematica 2";
                                        horario[3][2]="Matematica 2";
                                        horario[3][4]="Matematica 2";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }


                        }


                    }while(cambio!=0);
                }
                //labcom2
                if (toupper(curso[0])=='L') {

                    int cambio = 1;
                    //comunicando los cursos disponibles
                    do {
                        cout << "horarios disponibles:\n";
                        cout << "Labcom 2 seccion 1 lun 7-9 vi 7-9 Prof: Carlo Guevara\n";
                        cout << "labcom 2 seccion 2 mar 9-11 ju 9-11 Prof: \n";
                        cout << "labcom 2 seccion 3 mi  11-13 vi 11-13 Prof:\n";
                        cout << "labcom 2 seccion 4 ju 11-13 vi 11-13 Prof:\n";
                        cout << "labcom 2 seccion 5 ma 7-9 ju 13-15 Prof:\n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, seccion 5=5, borrar curso=-1 or niguno= 0)\n";



                        cin >> cambio;// opcion
                        if (cambio == 0)break;
                        if(cambio==-1)eliminacion(curso,horario);

                        if (cambio == 1) {//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[1][0][0];
                            char muestra2 = horario[1][4][0];
                            int valor = int(muestra);
                            int valor2 = int(muestra2);
                            if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))cout << "conflicto" << endl;
                            else {
                                if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                    horario[1][0] = "Lab com 2";
                                    horario[1][4] = "Lab com 2";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }

                        }
                        if (cambio == 2) {//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][1][0];
                            char muestra2 = horario[2][3][0];
                            int valor = int(muestra);
                            int valor2 = int(muestra2);

                            if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))cout << "conflicto" << endl;
                            else {
                                if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                    horario[2][1] = "Lab com 2";
                                    horario[2][3] = "Lab com 2";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }
                        if (cambio == 3) {//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[3][2][0];
                            char muestra2 = horario[3][4][0];
                            int valor = int(muestra);
                            int valor2 = int(muestra2);

                            if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))cout << "conflicto" << endl;
                            else {
                                if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    eliminacion(curso, horario);
                                    horario[3][2] = "Lab com 2";
                                    horario[3][4] = "Lab com 2";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }
                        if (cambio == 4) {//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[3][3][0];
                            char muestra2 = horario[3][4][0];
                            int valor = int(muestra);
                            int valor2 = int(muestra2);

                            if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))cout << "conflicto" << endl;
                            else {
                                if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    eliminacion(curso, horario);
                                    horario[3][3] = "Lab com 2";
                                    horario[3][4] = "Lab com 2";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }
                        if (cambio == 5) {//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[1][1][0];
                            char muestra2 = horario[4][3][0];
                            int valor = int(muestra);
                            int valor2 = int(muestra2);

                            if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))cout << "conflicto" << endl;
                            else {
                                if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    eliminacion(curso, horario);
                                    horario[1][1] = "Lab com 2";
                                    horario[4][3] = "Lab com 2";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }

                    } while (cambio != 0);
                }
                //POO 1
                if (toupper(curso[0])=='P'){//se elimina en toda la matriz el curso elegido

                    int cambio=1;
                    //comunicando los cursos disponibles
                    do{
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"POO 1 seccion 1 mar 13-15 and vi 13-15 prof: Cuadros\n";
                        cout<<"POO 1 seccion 2 mar 7-9 and ju 9-11 prof: Bernejo\n";
                        cout<<"POO 1 seccion 3 mar 19-21 and vi 19-21 prof: Melgrejo\n";
                        cout<<"POO 1 seccion 4 lun 17-19 and vi 13-15 prof: Kenneth\n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, borrar curso=-1 or niguno= 0 )\n";
                        cin>>cambio;// opcion a
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);

                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[4][1][0];
                            char muestra2=horario[4][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[4][1]="POO 1";
                                    horario[4][4]="POO 1";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }

                        }
                        if(cambio==2){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[1][1][0];
                            char muestra2=horario[2][3][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[1][1]="POO 1";
                                    horario[2][3]="POO 1";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }

                        }
                        if(cambio==3){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[7][1][0];
                            char muestra2=horario[7][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[7][1]="POO 1";
                                    horario[7][4]="POO 1";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }

                        }
                        if(cambio==4){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[4][0][0];
                            char muestra2=horario[4][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[6][1]="POO 1";
                                    horario[4][4]="POO 1";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }

                        }

                    }while(cambio!=0);
                }
                //desarrollo de empresas
                if (toupper(curso[0])=='D'){

                    int cambio=1;

                    do{
                        //comunicando los cursos disponibles
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"Desarrollo de empresas seccion 1 lun 7-9 prof:Guevara \n";
                        cout<<"Desarrollo de empresas seccion 2 vi 9-11 prof:Zorrilla \n";
                        cout<<"Desarrollo de empresas seccion 3 mi 11-13 prof:Camacho \n";
                        cout<<"Desarrollo de empresas seccion 4 ma 17-19 prof:Guevara \n";
                        cout<<"Desarrollo de empresas seccion 5 ma 19-21 prof:Guevara \n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, seccion 5=5, borrar curso=-1 or niguno= 0)\n";

                        cin>>cambio;// opcion
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);

                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[1][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[1][0]="Desarrollo de empresas";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                        if(cambio==2){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][4][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][4]="Desarrollo de empresas";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                        if(cambio==3){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[3][2][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);
                                horario[3][2]="Desarrollo de empresas";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                        if(cambio==4){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[6][1][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);
                                horario[6][1]="Desarrollo de empresas";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                        if(cambio==5){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[7][1][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);
                                horario[7][1]="Desarrollo de empresas";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }


                    }while(cambio!=0);
                }
                // estructura discretas
                if(toupper(curso[0])=='E'){
                    int cambio=1;
                    do{
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"Estructuras discretas II seccion 1 lun 13-15, Miercoles 13-15, Jueves 07-09 profesor: Jose Miguel Renom: \n";
                        cout<<"Estructuras discretas II seccion 2 lun 11-13, Martes 17-19, Viernes 9-11 prof: Yamilet Serrano \n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 o niguno= 0 )\n";

                        cin>>cambio;
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);
                        if(cambio==1){
                            char muestra = horario[1][0][0];
                            char muestra2=horario[2][2][0];
                            char muestra3=horario[2][3][0];

                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            int valor3=int(muestra3);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]) )cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor3<90 && valor3>64 && muestra3!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else {
                                        eliminacion(curso,horario);
                                        horario[4][0] = "E. Discrestas 2";
                                        horario[4][2] = "E. Discrestas 2";
                                        horario[1][3] = "E. Discrestas 2";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }

                        }
                        if(cambio==2) {
                            char muestra = horario[3][0][0];
                            char muestra2 = horario[6][1][0];
                            char muestra3 = horario[2][4][0];

                            int valor = int(muestra);
                            int valor2 = int(muestra2);
                            int valor3 = int(muestra3);
                            if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))cout << "conflicto" << endl;
                            else {
                                if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))cout << "conflicto" << endl;
                                else {
                                    if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))cout << "conflicto" << endl;
                                    else {
                                        eliminacion(curso,horario);
                                        horario[3][0] = "E. Discrestas 2";
                                        horario[6][1] = "E. Discrestas 2";
                                        horario[2][4] = "E. Discrestas 2";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);

                                    }
                                }
                            }
                        }

                    }while(cambio!=1);

                }
                //arte u tecnologia
                if(toupper(curso[0])=='A'){
                    int cambio=1;

                    do{
                        //comunicando los cursos disponibles
                        cout<<"horarios disponibles sugeridos:\n";
                        cout<<"Arte y tecnologia seccion 1 lun 9-11 prof: \n";
                        cout<<"Arte y tecnologia seccion 2 lun 9-11 prof: \n";
                        cout<<"Arte y tecnologia seccion 3 vi 11-13 prof: \n";
                        cout<<"Arte y tecnologia seccion 4 ju 9-11 prof: \n";
                        cout<<"cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, borrar curso=-1 or niguno= 0 o incorrecto)\n";

                        cin>>cambio;// opcion
                        if(cambio==0)break;
                        if(cambio==-1)eliminacion(curso,horario);

                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][0]="Arte y tecnologia";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                        if(cambio==2){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][0]="Arte y tecnologia";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                        if(cambio==3){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[3][4][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);
                                horario[3][4]="Arte y tecnologia";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                        if(cambio==4){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][3][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);
                                horario[2][3]="Arte y tecnologia";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }



                    }while(cambio!=0);




                }

            }
        }while(resp!=0);


        imprimir(horario);
    }

}
