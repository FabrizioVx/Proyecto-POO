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
string horarios( int ciclo,char curso){
    string a=" ";
    if(ciclo==1){
        if(curso=='E'){
            a="horarios disponibles sugeridos:\n"
              "E.discretas 1 1 seccion 1 lu 9-11, ju 7-9 and vi 11-13 prof: Jose Miguel Renom DIFICULTAD: 3\n"
              "E.discretas 1 seccion 2 lu 13-15, mi 15-17 and vi 15-17 prof: Yamilet serrano DIFICULTAD: 2\n"
              "cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
        if(curso=='M'){
            a="horarios disponibles sugeridos:\n"
              "Matematica 1 seccion 1 lu 11-13, mi 9-11 and vi 13-15 prof: Xyoby Chavez DIFICULTAD: 3\n"
              "Matematica 1 seccion 2 lu 13-15, mi 15-17 and vi 15-17 prof: Palomino DIFICULTAD: 1\n"
              "cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
        if(curso=='F'){
            a="horarios disponibles sugeridos:\n "
              "FISICA 1 seccion 1 lu 7-9 and mi 7-9 prof: Zegarra DIFICULTAD: 1\n "
              "FISICA 1 seccion 2 ma 17-19 and mi 17-19 prof: Pena DIFICULTAD: 3\n "
              "cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
        if(curso=='I'){
            a="horarios disponibles sugeridos:\n"
              "ICC seccion 1 ma 7-9 and mi 15-17 prof: Cuadros DIFICULTAD: 3\n"
              "ICC seccion 2 mi 9-11 and vi 9-11 prof: Bernejo DIFICULTAD: 2\n"
              "ICC seccion 3 ma 17-19 and ju 17-19 prof: Melgrejo DIFICULTAD: 2\n"
              "ICC seccion 4 lu 13-15 and vi 13-15 prof: Kenneth DIFICULTAD: 1\n"
              "ICC seccion 5 lu 11-13 and vi 19-21 prof: Alvarado DIFICULTAD: 1\n"
              "ICC seccion 6 ma 15-17 and vi 15-17 prof: Flores DIFICULTAD: 2\n"
              "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, seccion 5=5, seccion 6=6, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
        if(curso=='D'){
            a="horarios disponibles sugeridos:\n"
              "DESAFIOS G. seccion 1 ma 17-19 prof: Roldan\n"
              "DESAFIOS G. seccion 2 lu 15-17 prof: Corzo\n"
              "DESAFIOS G. seccion 3 mi 13-15 prof: reman \n"
              "DESAFIOS G. seccion 4 vi 09-11 prof: camacho\n"
              "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
        if(curso=='L'){
            a="horarios disponibles sugeridos:\n"
              "Lab com 1 seccion 1 mar 7-9 and ju 11-13 prof: Cuba DIFICULTAD: 2\n"
              "Lab com 1 seccion 2 mar 7-9 and ju 7-9 prof: Durand DIFICULTAD: 3\n"
              "Lab com 1 seccion 3 mi 17-19 and vi 13-15 prof: Hidalgo DIFICULTAD: 2\n"
              "Lab com 1 seccion 4 lu 15-16 and vi 9-11 prof: Ramirez DIFICULTAD: 3\n"
              "Lab com 1 seccion 5 ma 11-13 and mi 15-17 prof: Corzo DIFICULTAD: 1\n"
              "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, seccion 5=5, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
        if(curso=='Q'){
            a="horarios disponibles sugeridos:\n"
              "Quimica General seccion 1 ma 17-19 prof: Hoyos  DIFICULTAD: 2\n"
              "Quimica General seccion 2 lu 15-17 prof: Pinedo  DIFICULTAD: 1\n"
              "Quimica General seccion 3 mi 15-17 prof: Hoyos  DIFICULTAD: 2\n"
              "Quimica General seccion 4 mi 13-15 prof: Ratti  DIFICULTAD: 3\n"
              "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
    }
    if(ciclo==2){
        if(curso=='F'){
            a="horarios disponibles sugeridos:\n"
              "fisica 2 seccion 1 mar 7-9 and vi 7-9 prof: Sergio Pena DIFICULTAD: 3\n"
              "fisica 2 seccion 2 mar 9-11 and vi 9-11 prof: Katia Zegarra DIFICULTAD: 1\n"
              "cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 niguno= 0 )\n";
            return a;

        }
        if(curso=='M'){
            a="horarios disponibles:\n"
              "matematica 2 seccion 1 lun mi vi 7-9 prof: Xyobi Chavez DIFICULTAD: 3\n"
              "matematica 2 seccion 2 lun mi vi 9-11 prof: Miguel Palomino DIFICULTAD: 2\n"
              "matematica 2 seccion 3 lun mi vi 11-13 prof: Miguel Palomino DIFICULTAD: 2\n"
              "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
        if(curso=='L'){
            a= "horarios disponibles:\n"
               "Labcom 2 seccion 1 lun 7-9 vi 7-9 Prof: Carlo Guevara DIFICULTAD: 1\n"
               "labcom 2 seccion 2 mar 9-11 ju 9-11 Prof: juliana carrillo DIFICULTAD: 2\n"
               "labcom 2 seccion 3 mi  11-13 vi 11-13 Prof:Teresa torres DIFICULTAD: 3\n"
               "labcom 2 seccion 4 ju 11-13 vi 11-13 Prof:Oscar Hidalgo DIFICULTAD: 2\n"
               "labcom 2 seccion 5 ma 7-9 ju 13-15 Prof:Oriana Vidal DIFICULTAD: 2\n"
               "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, seccion 5=5, borrar curso=-1 or niguno= 0)\n";
            return a;
        }
        if(curso=='P'){
            a="horarios disponibles sugeridos:\n"
              "POO 1 seccion 1 mar 13-15 and vi 13-15 prof: Cuadros DIFICULTAD: 3\n"
              "POO 1 seccion 2 mar 7-9 and ju 9-11 prof: Bernejo DIFICULTAD: 2\n"
              "POO 1 seccion 3 mar 19-21 and vi 19-21 prof: Melgrejo DIFICULTAD: 2\n"
              "POO 1 seccion 4 lun 17-19 and vi 13-15 prof: Kenneth DIFICULTAD: 1\n"
              "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, borrar curso=-1 or niguno= 0 )\n";
            return a;
        }
        if(curso=='D'){
            a="horarios disponibles sugeridos:\n"
              "Desarrollo de empresas seccion 1 lun 15-17 prof:Guevara \n"
              "Desarrollo de empresas seccion 2 vi 9-11 prof:Zorrilla \n"
              "Desarrollo de empresas seccion 3 mi 11-13 prof:Camacho \n"
              "Desarrollo de empresas seccion 4 ma 17-19 prof:Guevara \n"
              "Desarrollo de empresas seccion 5 ma 19-21 prof:Guevara \n"
              "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, seccion 5=5, borrar curso=-1 or niguno= 0)\n";
            return a;

        }
        if(curso=='E'){
            a="horarios disponibles sugeridos:\n"
              "Estructuras discretas II seccion 1 lun 07-09, Miercoles 09-11, Jueves 09-11 profesor: Jose Miguel Renom: DIFICULTAD: 3 \n"
              "Estructuras discretas II seccion 2 lun 11-13, Martes 17-19, Viernes 9-11 prof: Yamilet Serrano DIFICULTAD: 2 \n"
              "cual desea(seccion 1=1, seccion 2 =2, borrar curso=-1 o niguno= 0 )\n";
            return a;
        }
        if(curso=='A'){
            a= "horarios disponibles sugeridos:\n"
               "Arte y tecnologia seccion 1 lun 9-11 prof:Pasquel \n"
               "Arte y tecnologia seccion 2 lun 9-11 prof:Camacho \n"
               "Arte y tecnologia seccion 3 vi 11-13 prof: Hurtado \n"
               "Arte y tecnologia seccion 4 ju 9-11 prof: Gisbert\n"
               "cual desea(seccion 1=1, seccion 2 =2, seccion 3=3, seccion 4=4, borrar curso=-1 or niguno= 0 o incorrecto)\n";
            return a;

        }
    }
    return a;
}
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
void leerarch(string a[8][5]){
    ofstream archivo;
    archivo.open("/Users/markopuchuri/Desktop/POO1/proyecto-1/horario.txt",ios::out);
    for (int i=0;i<8;i++) {
        if(i==0){archivo<<"Dias: ";}
        if(i==1){archivo<<"07-09 ";}
        if(i==2){archivo<<"09-11 ";}
        if(i==3){archivo<<"11-13 ";}
        if(i==4){archivo<<"13-15 ";}
        if(i==5){archivo<<"15-17 ";}
        if(i==6){archivo<<"17-19 ";}
        if(i==7){archivo<<"19-21 ";}
        for (int j = 0; j < 5; j++) {
            archivo <<setw(5)<<"|"<< a[i][j] << "|"; // behaves like cout - cout is also a stream
        }
        archivo << "\n";
    }
    archivo.close();
}
int test() {
    char respuesta;
    int punt=0;
    for (int i = 0; i < 10; i++) {
        switch (i) {
            case 1:
                cout << "test de CI" << endl;

                cout << "1.- Que numero hace falta en esta secuencia?\n"
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

                cout << "Cual letra debe ser la siguiente en esta secuencia? L K J H [?]" << endl;
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

                cout << "Dos personas caminan 4 metros desde el mismo \n punto en dirección opuesta, luego giran a la izquierda y caminan 3 metros. A qué distancia se encuentran?" << endl;
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

                cout << "Tomas, Pedro, Jaime, Susana y Julia realizaron el test.\n Julia obtuvo mayor puntuación que Tomás, Jaime puntuó más bajo que Pedro pero más alto que Susana, \n y Pedro logró menos puntos que Tomás. ¿Quién obtuvo la puntuación más alta?" << endl;
                cout << "a) Tomas" << endl;
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

                cout << "Qué palabra no pertenece al siguiente grupo?" << endl;
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

                cout << "Que palabra no pertenece al siguiente grupo?" << endl;
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
int inden(){
    string num;

    while(true){
        cin>>num;
        if(num=="-1"){return -1;}
        if(num.length()>1){return -2;}
        for(int i=0; i<num.length();i++){
            if(toupper(num[i])>'A' && toupper(num[i])<'Z'){
                return -2;
            }
        }
        break;
    }
    int numv= int(num[0]-48);
    return numv;}
void eliminacion(string curso, string matriz[8][5]){
    for (int y=1;y<8;y++){
        for(int x=0;x<5;x++){
            if (matriz[y][x][0]==toupper(curso[0])){
                matriz[y][x]= "                      ";
            }
        }
    }
}
void alto(int ciclo){
    if(ciclo==1){
        string horario[8][5]={{"        LUNES         ","        MARTES        ","       MIERCOLES      ","       JUEVES         ","        VIERNES       "},//dias
                              {"Fisica-1              ","                      ","Fisica-1              ","E.Discretas-1         ","                      "},//7-9
                              {"E.discretas-1         ","                      ","Matematica-1          ","                      ","                      "},//9-11
                              {"Matematica-1          ","LabCom-1              ","                      ","                      ","E.Discretas-1         "},//11-13
                              {"                      ","                      ","Desafios-Globales     ","                      ","Matematica-1          "},//13-15
                              {"Quimica               ","Icc                   ","LabCom-1              ","                      ","Icc                   "},//15-17
                              {"                      ","                      ","                      ","                      ","                      "},//17-19
                              {"                      ","                      ","                      ","                      ","                      "}};//19-21
        imprimir(horario);
        int resp;//para entrar al loop
        do {
            cout << "quieres cambiar el horario propuesto?(1=si or 0=no)\n";//pregunta si deseas cambiar
            resp=inden();
            if (resp == 0)break;//si tu respuesta es no se sale del loop
            if (resp != 1) { cout << "valor incorrecto.. ingrese otra vez\n"; }
            else {
                cout << "que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
                string curso;
                cin >> curso;//se ingresa el curso a cambiar
                //E. discretas 1
                if (toupper(curso[0])=='E'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[2][0][0];
                            char muestra2 = horario[1][3][0];
                            char muestra3 = horario[3][4][0];

                            int valor = int(muestra);
                            int valor2 = int(muestra2);
                            int valor3 = int(muestra3);
                            if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                cout << "conflicto" << endl;
                            else {
                                if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        eliminacion(curso, horario);
                                        horario[2][0] = "E.Discrestas-1       ";
                                        horario[1][3] = "E.Discrestas-1       ";
                                        horario[3][4] = "E.Discrestas-1       ";
                                        cout << "Se cambio exitosamente tu horario\n";
                                        imprimir(horario);

                                    }
                                }
                            }
                        }
                        if(cambio==2){
                            char muestra = horario[4][0][0];
                            char muestra2 = horario[5][2][0];
                            char muestra3 = horario[5][4][0];

                            int valor = int(muestra);
                            int valor2 = int(muestra2);
                            int valor3 = int(muestra3);
                            if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                cout << "conflicto" << endl;
                            else {
                                if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        eliminacion(curso, horario);
                                        horario[4][0] = "E.Discrestas-2       ";
                                        horario[5][2] = "E.Discrestas-2       ";
                                        horario[5][4] = "E.Discrestas-2       ";
                                        cout << "Se cambio exitosamente tu horario\n";
                                        imprimir(horario);

                                    }
                                }
                            }
                        }
                    }while(cambio!=0);
                }
                //fisica 1
                if (toupper(curso[0])=='F'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[1][0][0];
                            char muestra2=horario[1][2][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[1][0]="Fisica-1              ";
                                    horario[1][2]="Fisica-1              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                        if(cambio==2){
                            char muestra = horario[6][1][0];
                            char muestra2=horario[6][2][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[6][1]="Fisica-1              ";
                                    horario[6][2]="Fisica-1              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                    }while(cambio!=0);

                }
                //Mate 1
                if (toupper(curso[0])=='M'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[3][0][0];
                            char muestra2= horario[2][2][0];
                            char muestra3= horario[4][4][0];

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
                                        horario[3][0]="Matematica-1          ";
                                        horario[2][2]="Matematica-1          ";
                                        horario[4][4]="Matematica-1          ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                        }
                        if(cambio==2){
                            char muestra = horario[4][0][0];
                            char muestra2= horario[5][2][0];
                            char muestra3= horario[5][4][0];

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
                                        horario[4][0]="Matematica-1          ";
                                        horario[5][2]="Matematica-1          ";
                                        horario[5][4]="Matematica-1          ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                        }

                    }while(cambio!=0);

                }
                //quimica general
                if (toupper(curso[0])=='Q'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[6][1][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else {
                                eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                horario[6][1] = "Quimica               ";
                                cout << "Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==2){
                            char muestra = horario[5][0][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[5][0]="Quimica               ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==3){
                            char muestra = horario[5][2][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[5][2]="Quimica               ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==4){
                            char muestra = horario[4][2][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[4][2]="Quimica               ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }

                    }while(cambio!=0);

                }
                //desafios globales
                if (toupper(curso[0])=='D'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[6][1][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else {
                                eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                horario[6][1] = "Desafios-Globales     ";
                                cout << "Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==2){
                            char muestra = horario[5][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[5][0]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==3){
                            char muestra = horario[4][2][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[4][2]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==4){
                            char muestra = horario[2][4][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][4]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }


                    }while(cambio!=0);

                }
                //ICC
                if (toupper(curso[0])=='I'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[1][1][0];
                            char muestra2=horario[5][2][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[1][1]="Icc                   ";
                                    horario[5][2]="Icc                   ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }
                        if(cambio==2){

                            char muestra = horario[2][2][0];
                            char muestra2=horario[2][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[2][2]="Icc                   ";
                                    horario[2][4]="Icc                   ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }
                        if(cambio==3){
                            char muestra = horario[6][1][0];
                            char muestra2=horario[6][3][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[6][1]="Icc                   ";
                                    horario[6][3]="Icc                   ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                        if(cambio==4){
                            char muestra = horario[4][0][0];
                            char muestra2=horario[4][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[4][0]="Icc                   ";
                                    horario[4][4]="Icc                   ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                        if(cambio==5){
                            char muestra = horario[3][0][0];
                            char muestra2=horario[7][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[3][0]="Icc                   ";
                                    horario[7][4]="Icc                   ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                        if(cambio==6){
                            char muestra = horario[5][1][0];
                            char muestra2=horario[5][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[5][1]="Icc                   ";
                                    horario[5][4]="Icc                   ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }}

                    }while(cambio!=0);

                }
                //Lab com1
                if (toupper(curso[0])=='L'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[1][1][0];
                            char muestra2=horario[3][3][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[1][1]="LabCom-2              ";
                                    horario[3][3]="LabCom-2              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                        if(cambio==2){
                            char muestra = horario[1][1][0];
                            char muestra2=horario[1][3][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[1][1]="LabCom-2              ";
                                    horario[1][3]="LabCom-2              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                        if(cambio==3){
                            char muestra = horario[6][2][0];
                            char muestra2=horario[4][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[6][2]="LabCom-2              ";
                                    horario[4][4]="LabCom-2              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                        if(cambio==4){
                            char muestra = horario[5][0][0];
                            char muestra2=horario[2][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[5][0]="LabCom-2              ";
                                    horario[2][4]="LabCom-2              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }
                        if(cambio==5){
                            char muestra = horario[3][1][0];
                            char muestra2=horario[5][2][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[2][2]="LabCom-2              ";
                                    horario[2][4]="LabCom-2              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                        }


                    }while(cambio!=0);

                }

            }
        }while(resp!=0);

        imprimir(horario);
        leerarch(horario);
    }
    if (ciclo==2){
        // Lu--Ma--Mi--Ju--Vi
        string horario[8][5]={{"        Lunes         ","         Martes       ","      Miercoles       ","         Jueves       ","        Viernes       "},//dias
                              {"E. Discrestas-2       ","LabCom-2              ","                      ","                      ","                      "},//7-9
                              {"Arte&tecnologia       ","Fisica-2              ","E. Discrestas-2       ","E. Discrestas-2       ","Fisica-2              "},//9-11
                              {"Matematica-2          ","                      ","Matematica-2          ","                      ","Matematica-2          "},//11-13
                              {"                      ","POO                   ","                      ","LabCom-2              ","POO                   "},//13-15
                              {"Desarrollo-de-empresas","                      ","                      ","                      ","                      "},//15-17
                              {"                      ","                      ","                      ","                      ","                      "},//17-19
                              {"                      ","                      ","                      ","                      ","                      "}};//19-21
        imprimir(horario);
        //se imprime el horario
        int resp;//para entrar al loop

        do{
            cout<<"quieres cambiar el horario propuesto?(1=si or 0=no)\n";//pregunta si deseas cambiar
            resp=inden();
            if(resp==0)break;//si tu respuesta es no se sale del loop
            if(resp!=1){cout<<"valor incorrecto.. ingrese otra vez\n";}
            else {
                cout << "que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
                string curso;
                cin >> curso;//se ingresa el curso a cambiar


                //fisica 2
                if (toupper(curso[0])=='F'){

                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
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
                                    horario[1][1]="Fisica-2              ";
                                    horario[1][4]="Fisica-2              ";
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
                                    horario[2][1]="Fisica-2              ";
                                    horario[2][4]="Fisica-2              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }


                    }while(cambio!=0);
                }
                //matematica 2
                if(toupper(curso[0])=='M'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion a
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}

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
                                        horario[1][0]="Matematica-2          ";
                                        horario[1][2]="Matematica-2          ";
                                        horario[1][4]="Matematica-2          ";
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
                                        horario[2][0]="Matematica-2          ";
                                        horario[2][2]="Matematica-2          ";
                                        horario[2][4]="Matematica-2          ";
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
                                        horario[3][0]="Matematica-2          ";
                                        horario[3][2]="Matematica-2          ";
                                        horario[3][4]="Matematica-2          ";
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

                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if (cambio == 0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}

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
                                    horario[1][0] = "LabCom-2              ";
                                    horario[1][4] = "LabCom-2              ";
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
                                    horario[2][1] = "LabCom-2              ";
                                    horario[2][3] = "LabCom-2              ";
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
                                    horario[3][2] = "LabCom-2              ";
                                    horario[3][4] = "LabCom-2              ";
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
                                    horario[3][3] = "LabCom-2              ";
                                    horario[3][4] = "LabCom-2              ";
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
                                    horario[1][1] = "LabCom-2              ";
                                    horario[4][3] = "LabCom-2              ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }


                        }

                    } while (cambio != 0);
                }
                //POO 1
                if (toupper(curso[0])=='P'){//se elimina en toda la matriz el curso elegido

                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion a
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}

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
                                    horario[4][1]="POO                   ";
                                    horario[4][4]="POO                   ";
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
                                    horario[1][1]="POO                   ";
                                    horario[2][3]="POO                   ";
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
                                    horario[7][1]="POO                   ";
                                    horario[7][4]="POO                   ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }

                        }
                        if(cambio==4){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[6][0][0];
                            char muestra2=horario[4][4][0];
                            int valor = int(muestra);
                            int valor2=int(muestra2);
                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);
                                    horario[6][0]="POO                   ";
                                    horario[4][4]="POO                   ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }

                        }

                    }while(cambio!=0);
                }
                //desarrollo de empresas
                if (toupper(curso[0])=='D'){

                    int cambio;

                    do{
                        //comunicando los cursos disponibles
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}

                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[5][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[5][0]="Desarrollo-de-empresas";
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
                                horario[2][4]="Desarrollo-de-empresas";
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
                                horario[3][2]="Desarrollo-de-empresas";
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
                                horario[6][1]="Desarrollo-de-empresas";
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
                                horario[7][1]="Desarrollo-de-empresas";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }


                    }while(cambio!=0);
                }
                // estructura discretas
                if(toupper(curso[0])=='E'){
                    int cambio;
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
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
                                        horario[1][0] = "E.Discrestas-2       ";
                                        horario[2][2] = "E.Discrestas-2       ";
                                        horario[2][3] = "E.Discrestas-2       ";
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
                                        horario[3][0] = "E.Discrestas-2       ";
                                        horario[6][1] = "E.Discrestas-2       ";
                                        horario[2][4] = "E.Discrestas-2       ";
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
                    int cambio;

                    do{
                        //comunicando los cursos disponibles
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}

                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][0]="Arte&tecnologia       ";
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
                                horario[2][0]="Arte&tecnologia       ";
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
                                horario[3][4]="Arte&tecnologia       ";
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
                                horario[2][3]="Arte&tecnologia       ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }



                    }while(cambio!=0);




                }

            }
        }while(resp!=0);


        imprimir(horario);
        leerarch(horario);
    }
}
void normal(int ciclo) {
    if(ciclo==1){
        string horario[8][5]= {{"        Lunes         ", "         Martes       ", "      Miercoles       ", "         Jueves       ", "        Viernes       "},//dias
                               {"Fisica-1              ", "LabCom-1              ", "Fisica-1              ", "                      ", "                      "},//7-9
                               {"                      ", "                      ", "Icc                   ", "                      ", "Icc                   "},//9-11
                               {"                      ", "                      ", "                      ", "LabCom-2              ", "                      "},//11-13
                               {"Matematica-1          ", "                      ", "                      ", "                      ", "                      "},//13-15
                               {"Desafios-Globales     ", "                      ", "Matematica-1          ", "                      ", "Matematica-1          "},//15-17
                               {"                      ", "Quimica               ", "                      ", "                      ", "                      "},//17-19
                               {"                      ", "                      ", "                      ", "                      ", "                      "}};//19-21;
        imprimir(horario);
        int resp;
        do{
            cout << "quieres cambiar el horario propuesto?(1=si or 0=no)\n";//pregunta si deseas cambiar
            resp=inden();
            if (resp == 0)break;//si tu respuesta es no se sale del loop
            if (resp != 1) { cout << "valor incorrecto.. ingrese otra vez\n"; }
            else{
                cout<<"E. discretas-2 en tu horario preliminar\n";
                cout << "que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
                string curso;
                cin >> curso;
                //E.discretas 1
                if (toupper(curso[0]) == 'E'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[2][0][0];
                                    char muestra2 = horario[1][3][0];
                                    char muestra3 = horario[3][4][0];

                                    int valor = int(muestra);
                                    int valor2 = int(muestra2);
                                    int valor3 = int(muestra3);
                                    if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                                cout << "conflicto" << endl;
                                            else {
                                                eliminacion(curso, horario);
                                                horario[2][0] = "E.Discrestas-1       ";
                                                horario[1][3] = "E.Discrestas-1       ";
                                                horario[3][4] = "E.Discrestas-1       ";
                                                cout << "Se cambio exitosamente tu horario\n";
                                                imprimir(horario);

                                            }
                                        }
                                    }
                                }

                            }
                            if (cambio == 2) {
                                char muestra = horario[4][0][0];
                                char muestra2 = horario[5][2][0];
                                char muestra3 = horario[5][4][0];

                                int valor = int(muestra);
                                int valor2 = int(muestra2);
                                int valor3 = int(muestra3);
                                if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            eliminacion(curso, horario);
                                            horario[4][0] = "E.Discrestas-1       ";
                                            horario[5][2] = "E.Discrestas-1       ";
                                            horario[5][4] = "E.Discrestas-1       ";
                                            cout << "Se cambio exitosamente tu horario\n";
                                            imprimir(horario);

                                        }
                                    }
                                }

                            }

                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);


                }
                //MATEMATICA 1
                if (toupper(curso[0]) == 'M'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if (acu == 1) {
                                cout << horarios(ciclo, toupper(curso[0]));
                            };
                            cambio = inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                if (acu == 0) {
                                    cout << "curso no recomendado\n";
                                    acu++;
                                } else {
                                    char muestra = horario[3][0][0];
                                    char muestra2 = horario[2][2][0];
                                    char muestra3 = horario[4][4][0];

                                    int valor = int(muestra);
                                    int valor2 = int(muestra2);
                                    int valor3 = int(muestra3);

                                    if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                                cout << "conflicto" << endl;
                                            else {
                                                eliminacion(curso,
                                                            horario);//se elimina en toda la matriz el curso elegido
                                                horario[3][0] = "Matematica-1          ";
                                                horario[2][2] = "Matematica-1          ";
                                                horario[4][4] = "Matematica-1          ";
                                                cout << "Se cambio exitosamente tu horario\n";
                                                imprimir(horario);
                                            }
                                        }
                                    }
                                }
                            }
                            if (cambio == 2) {
                                char muestra = horario[4][0][0];
                                char muestra2 = horario[5][2][0];
                                char muestra3 = horario[5][4][0];

                                int valor = int(muestra);
                                int valor2 = int(muestra2);
                                int valor3 = int(muestra3);

                                if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                            horario[4][0] = "Matematica-1          ";
                                            horario[5][2] = "Matematica-1          ";
                                            horario[5][4] = "Matematica-1          ";
                                            cout << "Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if (acu == 0) {
                                cout << horarios(ciclo, toupper(curso[0]));
                            }
                        }

                    }while(cambio!=0);

                }
                //FISICA 1
                if (toupper(curso[0]) == 'F'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                char muestra = horario[1][0][0];
                                char muestra2=horario[1][2][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[1][0]="Fisica-1              ";
                                        horario[1][2]="Fisica-1              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }

                            }
                            if (cambio == 2) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[6][1][0];
                                    char muestra2=horario[6][2][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[6][1]="Fisica-1              ";
                                            horario[6][2]="Fisica-1              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }

                            }

                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);


                }
                //QUIMICA
                if (toupper(curso[0]) == 'Q'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if(cambio==1){

                                char muestra = horario[6][1][0];
                                int valor = int(muestra);

                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else {
                                    eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                    horario[6][1] = "Quimica               ";
                                    cout << "Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                            if(cambio==2){
                                char muestra = horario[5][0][0];
                                int valor = int(muestra);

                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                    horario[5][0]="Quimica               ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                            if(cambio==3){
                                char muestra = horario[5][2][0];
                                int valor = int(muestra);

                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                    horario[5][2]="Quimica               ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                            if(cambio==4){
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }

                                else{
                                    char muestra = horario[4][2][0];
                                    int valor = int(muestra);

                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                        horario[4][2]="Quimica               ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                        }

                    }while(cambio!=0);
                }
                //DESAFIOS GLOBALES
                if (toupper(curso[0]) == 'D'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[6][1][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else {
                                eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                horario[6][1] = "Desafios-Globales     ";
                                cout << "Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==2){
                            char muestra = horario[5][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[5][0]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==3){
                            char muestra = horario[4][2][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[4][2]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==4){
                            char muestra = horario[2][4][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][4]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }


                    }while(cambio!=0);


                }
                //ICC
                if (toupper(curso[0]) == 'I'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[1][1][0];
                                    char muestra2=horario[5][2][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[1][1]="Icc                   ";
                                            horario[5][2]="Icc                   ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }

                            }
                            if(cambio==2){

                                char muestra = horario[2][2][0];
                                char muestra2=horario[2][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[2][2]="Icc                   ";
                                        horario[2][4]="Icc                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }


                            }
                            if(cambio==3){
                                char muestra = horario[6][1][0];
                                char muestra2=horario[6][3][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[6][1]="Icc                   ";
                                        horario[6][3]="Icc                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                            if(cambio==4){
                                char muestra = horario[4][0][0];
                                char muestra2=horario[4][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[4][0]="Icc                   ";
                                        horario[4][4]="Icc                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                            if(cambio==5){
                                char muestra = horario[3][0][0];
                                char muestra2=horario[7][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[3][0]="Icc                   ";
                                        horario[7][4]="Icc                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                            if(cambio==6){
                                char muestra = horario[5][1][0];
                                char muestra2=horario[5][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[5][1]="Icc                   ";
                                        horario[5][4]="Icc                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }

                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);


                }
                //LABCOM 1
                if (toupper(curso[0]) == 'L'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if(cambio==1){
                                char muestra = horario[1][1][0];
                                char muestra2=horario[3][3][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[1][1]="LabCom-2              ";
                                        horario[3][3]="LabCom-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                            if(cambio==2){
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[1][1][0];
                                    char muestra2=horario[1][3][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[1][1]="LabCom-2              ";
                                            horario[1][3]="LabCom-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if (cambio == 3) {
                                char muestra = horario[6][2][0];
                                char muestra2=horario[4][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[6][2]="LabCom-2              ";
                                        horario[4][4]="LabCom-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }

                            }
                            if(cambio==4){
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[5][0][0];
                                    char muestra2=horario[2][4][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[5][0]="LabCom-2              ";
                                            horario[2][4]="LabCom-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if(cambio==5){
                                char muestra = horario[3][1][0];
                                char muestra2=horario[5][2][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[2][2]="LabCom-2              ";
                                        horario[2][4]="LabCom-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }

                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);


                }


            }

        }while(resp!=0);
        imprimir(horario);
        leerarch(horario);
    }
    if (ciclo == 2) {
        string horario[8][5] = {{"        Lunes         ", "         Martes       ", "      Miercoles       ", "         Jueves       ", "        Viernes       "},//dias
                                {"Desarrollo-de-empresas", "LabCom-2              ", "                      ", "E. Discrestas-2       ", "                      "},//7-9
                                {"Arte&tecnologia       ", "Fisica-2              ", "                      ", "                      ", "Fisica-2              "},//9-11
                                {"Matematica-2          ", "                      ", "Matematica-2          ", "                      ", "Matematica-2          "},//11-13
                                {"E. Discrestas-2       ", "                      ", "E. Discrestas-2       ", "LabCom-2              ", "                      "},//13-15
                                {"                      ", "                      ", "                      ", "                      ", "                      "},//15-17
                                {"                      ", "                      ", "                      ", "                      ", "                      "},//17-19
                                {"                      ", "POO                   ", "                      ", "                      ", "POO                   "}};//19-21


        imprimir(horario);
        int resp;//para entrar al loop
        do {
            cout << "quieres cambiar el horario propuesto?(1=si or 0=no)\n";//pregunta si deseas cambiar
            resp=inden();
            if (resp == 0)break;//si tu respuesta es no se sale del loop
            if (resp != 1) { cout << "valor incorrecto.. ingrese otra vez\n"; }
            else {
                cout << "que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
                string curso;
                cin >> curso;//se ingresa el curso a cambiar
                //MATEMATICA 2
                if (toupper(curso[0]) == 'M') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }

                            if (cambio == 1) {
                                if(acu==0){
                                    cout<<"seccion no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[1][0][0];
                                    char muestra2 = horario[1][2][0];
                                    char muestra3 = horario[1][4][0];

                                    int valor = int(muestra);
                                    int valor2 = int(muestra2);
                                    int valor3 = int(muestra3);

                                    if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                                cout << "conflicto" << endl;
                                            else {
                                                eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                                horario[1][0] = "Matematica-2          ";
                                                horario[1][2] = "Matematica-2          ";
                                                horario[1][4] = "Matematica-2          ";
                                                cout << "Se cambio exitosamente tu horario\n";
                                                imprimir(horario);
                                            }
                                        }
                                    }
                                }
                            }
                            if (cambio == 2) {
                                char muestra = horario[2][0][0];
                                char muestra2 = horario[2][2][0];
                                char muestra3 = horario[2][4][0];

                                int valor = int(muestra);
                                int valor2 = int(muestra2);
                                int valor3 = int(muestra3);

                                if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))cout << "conflicto" << endl;
                                else {
                                    if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                            horario[2][0] = "Matematica-2          ";
                                            horario[2][2] = "Matematica-2          ";
                                            horario[2][4] = "Matematica-2          ";
                                            cout << "Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if (cambio == 3) {
                                char muestra = horario[3][0][0];
                                char muestra2 = horario[3][2][0];
                                char muestra3 = horario[3][4][0];

                                int valor = int(muestra);
                                int valor2 = int(muestra2);
                                int valor3 = int(muestra3);

                                if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                            horario[3][0] = "Matematica-2          ";
                                            horario[3][2] = "Matematica-2          ";
                                            horario[3][4] = "Matematica-2          ";
                                            cout << "Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);

                }
                if (toupper(curso[0]) == 'F') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }

                            if (cambio == 1) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[1][1][0];
                                    char muestra2=horario[1][4][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                            horario[1][1]="Fisica-2              ";
                                            horario[1][4]="Fisica-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if (cambio == 2) {
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
                                        horario[2][1]="Fisica-2              ";
                                        horario[2][4]="Fisica-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }


                            }
                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);

                }
                //lab com
                if (toupper(curso[0]) == 'L') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
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
                                        horario[1][0] = "LabCom-2              ";
                                        horario[1][4] = "LabCom-2              ";
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
                                        horario[2][1] = "LabCom-2              ";
                                        horario[2][3] = "LabCom-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }


                            }

                            if (cambio == 3) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
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
                                            horario[3][2] = "LabCom-2              ";
                                            horario[3][4] = "LabCom-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
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
                                        horario[3][3] = "LabCom-2              ";
                                        horario[3][4] = "LabCom-2              ";
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
                                        horario[1][1] = "LabCom-2              ";
                                        horario[4][3] = "LabCom-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }


                            }
                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);

                }
                //POO
                if (toupper(curso[0]) == 'P') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }

                            if (cambio == 1) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[4][1][0];
                                    char muestra2=horario[4][4][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[4][1]="POO                   ";
                                            horario[4][4]="POO                   ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
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
                                        horario[1][1]="POO                   ";
                                        horario[2][3]="POO                   ";
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
                                        horario[7][1]="POO                   ";
                                        horario[7][4]="POO                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }

                            }
                            if(cambio==4){//primero se verifica si hace conflicto en tu horario

                                char muestra = horario[6][0][0];
                                char muestra2=horario[4][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[6][0]="POO                   ";
                                        horario[4][4]="POO                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }

                            }
                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);

                }
                //desarrollo de empresas
                if (toupper(curso[0])=='D'){

                    int cambio;

                    do{
                        //comunicando los cursos disponibles
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}

                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[5][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[5][0]="Desarrollo-de-empresas";
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
                                horario[2][4]="Desarrollo-de-empresas";
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
                                horario[3][2]="Desarrollo-de-empresas";
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
                                horario[6][1]="Desarrollo-de-empresas";
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
                                horario[7][1]="Desarrollo-de-empresas";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }


                    }while(cambio!=0);
                }
                //estructura discretas
                if (toupper(curso[0]) == 'E') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout << horarios(ciclo, toupper(curso[0]));
                        int acu = 0;
                        while (acu < 2) {
                            if (acu == 1) {
                                cout << horarios(ciclo, toupper(curso[0]));
                            }

                            cambio = inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }

                            if (cambio == 1) {
                                if (acu == 0) {
                                    cout << "curso no recomendado\n";
                                    acu++;
                                } else {
                                    char muestra = horario[1][0][0];
                                    char muestra2 = horario[2][2][0];
                                    char muestra3 = horario[2][3][0];

                                    int valor = int(muestra);
                                    int valor2 = int(muestra2);
                                    int valor3 = int(muestra3);
                                    if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                                cout << "conflicto" << endl;
                                            else {
                                                eliminacion(curso, horario);
                                                horario[1][0] = "E.Discrestas-2       ";
                                                horario[2][2] = "E.Discrestas-2       ";
                                                horario[2][3] = "E.Discrestas-2       ";
                                                cout << "Se cambio exitosamente tu horario\n";
                                                imprimir(horario);
                                            }
                                        }
                                    }
                                }
                            }
                            if (cambio == 2) {
                                char muestra = horario[3][0][0];
                                char muestra2 = horario[6][1][0];
                                char muestra3 = horario[2][4][0];

                                int valor = int(muestra);
                                int valor2 = int(muestra2);
                                int valor3 = int(muestra3);
                                if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            eliminacion(curso, horario);
                                            horario[3][0] = "E.Discrestas-2       ";
                                            horario[6][1] = "E.Discrestas-2       ";
                                            horario[2][4] = "E.Discrestas-2       ";
                                            cout << "Se cambio exitosamente tu horario\n";
                                            imprimir(horario);

                                        }
                                    }
                                }
                            }
                        }

                    } while (cambio != 0);
                }
                //arte y tec
                if(toupper(curso[0])=='A'){
                    int cambio;

                    do{
                        //comunicando los cursos disponibles
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][0]="Arte&tecnologia       ";
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
                                horario[2][0]="Arte&tecnologia       ";
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
                                horario[3][4]="Arte&tecnologia       ";
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
                                horario[2][3]="Arte&tecnologia       ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                    }while(cambio!=0);

                }
            }
        } while (resp != 0);

        imprimir(horario);
        leerarch(horario);

    }
}
void bajo(int ciclo) {   //CICLO1
    if(ciclo==1){
        string horario[8][5]= {{"        Lunes         ", "         Martes       ", "      Miercoles       ", "         Jueves       ", "        Viernes       "},//dias
                               {"Fisica-1              ", "                      ", "Fisica-1              ", "                      ", "                      "},//7-9
                               {"                      ", "                      ", "                      ", "                      ", "                      "},//9-11
                               {"Icc                   ", "                      ", "                      ", "                      ", "                      "},//11-13
                               {"Matematica-1          ", "                      ", "Desafios-Globales     ", "                      ", "                      "},//13-15
                               {"Quimica               ", "                      ", "Matematica-1          ", "                      ", "Matematica-1          "},//15-17
                               {"                      ", "                      ", "                      ", "                      ", "                      "},//17-19
                               {"                      ", "                      ", "                      ", "                      ", "Icc                   "}};//19-21;
        imprimir(horario);
        int resp;
        do{
            cout << "quieres cambiar el horario propuesto?(1=si or 0=no)\n";//pregunta si deseas cambiar
            resp=inden();
            if (resp == 0)break;//si tu respuesta es no se sale del loop
            if (resp != 1) { cout << "valor incorrecto.. ingrese otra vez\n"; }
            else{

                cout<<"no se incluyo E. discretas-1 y labcom-1 en tu horario preliminar\n";
                cout << "que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
                string curso;
                cin >> curso;
                //E.discretas 1
                if (toupper(curso[0]) == 'E'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                cout<<"seccion no recomendado\n";
                            }
                            if (cambio == 2) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[4][0][0];
                                    char muestra2 = horario[5][2][0];
                                    char muestra3 = horario[5][4][0];

                                    int valor = int(muestra);
                                    int valor2 = int(muestra2);
                                    int valor3 = int(muestra3);
                                    if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                                cout << "conflicto" << endl;
                                            else {
                                                eliminacion(curso, horario);
                                                horario[4][0] = "E.Discrestas-1       ";
                                                horario[5][2] = "E.Discrestas-1       ";
                                                horario[5][4] = "E.Discrestas-1       ";
                                                cout << "Se cambio exitosamente tu horario\n";
                                                imprimir(horario);

                                            }
                                        }
                                    }
                                }


                            }

                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);


                }
                //MATEMATICA 1
                if (toupper(curso[0]) == 'M'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if (acu == 1) {
                                cout << horarios(ciclo, toupper(curso[0]));
                            };
                            cambio = inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                cout<<"seccion no recomendado\n";
                            }
                            if (cambio == 2) {
                                char muestra = horario[4][0][0];
                                char muestra2 = horario[5][2][0];
                                char muestra3 = horario[5][4][0];

                                int valor = int(muestra);
                                int valor2 = int(muestra2);
                                int valor3 = int(muestra3);

                                if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                            horario[4][0] = "Matematica-1          ";
                                            horario[5][2] = "Matematica-1          ";
                                            horario[5][4] = "Matematica-1          ";
                                            cout << "Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if (acu == 0) {
                                cout << horarios(ciclo, toupper(curso[0]));
                            }
                        }

                    }while(cambio!=0);

                }
                //FISICA 1
                if (toupper(curso[0]) == 'F'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                char muestra = horario[1][0][0];
                                char muestra2=horario[1][2][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[1][0]="Fisica-1              ";
                                        horario[1][2]="Fisica-1              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }

                            }
                            if (cambio == 2) {
                                cout<<"seccion no recomendado\n";

                            }

                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);


                }
                //QUIMICA
                if (toupper(curso[0]) == 'Q'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if(cambio==1){
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[6][1][0];
                                    int valor = int(muestra);

                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else {
                                        eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                        horario[6][1] = "Quimica               ";
                                        cout << "Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                            if(cambio==2){
                                char muestra = horario[5][0][0];
                                int valor = int(muestra);

                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                    horario[5][0]="Quimica               ";
                                    cout<<"Se cambio exitosamente tu horario\n";
                                    imprimir(horario);
                                }
                            }
                            if(cambio==3){
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[5][2][0];
                                    int valor = int(muestra);

                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                        horario[5][2]="Quimica               ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }

                            }
                            if(cambio==4){
                                cout<<"seccion no recomendado\n";
                            }
                        }

                    }while(cambio!=0);


                }
                //DESAFIOS GLOBALES
                if (toupper(curso[0]) == 'D'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do{
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){
                            char muestra = horario[6][1][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else {
                                eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                horario[6][1] = "Desafios-Globales     ";
                                cout << "Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==2){
                            char muestra = horario[5][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[5][0]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==3){
                            char muestra = horario[4][2][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[4][2]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }
                        if(cambio==4){
                            char muestra = horario[2][4][0];
                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][4]="Desafios-Globales     ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }
                        }


                    }while(cambio!=0);


                }
                //ICC
                if (toupper(curso[0]) == 'I'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                cout<<"seccion no recomendado\n";

                            }
                            if(cambio==2){

                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[2][2][0];
                                    char muestra2=horario[2][4][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[2][2]="Icc                   ";
                                            horario[2][4]="Icc                   ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if(cambio==3){
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[6][1][0];
                                    char muestra2=horario[6][3][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[6][1]="Icc                   ";
                                            horario[6][3]="Icc                   ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }

                            }
                            if(cambio==4){
                                char muestra = horario[4][0][0];
                                char muestra2=horario[4][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[4][0]="Icc                   ";
                                        horario[4][4]="Icc                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                            if(cambio==5){
                                char muestra = horario[3][0][0];
                                char muestra2=horario[7][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[3][0]="Icc                   ";
                                        horario[7][4]="Icc                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }
                            if(cambio==6){
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[5][1][0];
                                    char muestra2=horario[5][4][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[5][1]="Icc                   ";
                                            horario[5][4]="Icc                   ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }

                            }

                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);


                }
                //LABCOM 1
                if (toupper(curso[0]) == 'L'){
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if(cambio==1){
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[1][1][0];
                                    char muestra2=horario[3][3][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[1][1]="LabCom-2              ";
                                            horario[3][3]="LabCom-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }

                            }
                            if(cambio==2){
                                cout<<"seccion no recomendado\n";
                            }
                            if (cambio == 3) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[6][2][0];
                                    char muestra2=horario[4][4][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[6][2]="LabCom-2              ";
                                            horario[4][4]="LabCom-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }


                            }
                            if(cambio==4){
                                cout<<"seccion no recomendado\n";
                            }
                            if(cambio==5){
                                char muestra = horario[3][1][0];
                                char muestra2=horario[5][2][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[2][2]="LabCom-2              ";
                                        horario[2][4]="LabCom-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }
                            }

                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);


                }
            }

        }while(resp!=0);
        imprimir(horario);
        leerarch(horario);
    }
    //CICLO2
    if(ciclo==2){
        string horario[8][5] = {{"        Lunes         ", "         Martes       ", "      Miercoles       ", "         Jueves       ", "        Viernes       "},//dias
                                {"LabCom-2              ", "                      ", "                      ", "                      ", "LabCom-2              "},//7-9
                                {"Matematica-2          ", "                      ", "Matematica-2          ", "                      ", "Matematica-2          "},//9-11
                                {"                      ", "                      ", "                      ", "                      ", "Arte&tecnologia       "},//11-13
                                {"                      ", "                      ", "                      ", "                      ", "POO                   "},//13-15
                                {"Desarrollo-de-empresas", "                      ", "                      ", "                      ", "                      "},//15-17
                                {"POO                   ", "                      ", "                      ", "                      ", "                      "},//17-19
                                {"                      ", "                      ", "                      ", "                      ", "                      "}};//19-21


        imprimir(horario);
        int resp;//para entrar al loop
        do {
            cout << "quieres cambiar el horario propuesto?(1=si or 0=no)\n";//pregunta si deseas cambiar
            resp=inden();
            if (resp == 0)break;//si tu respuesta es no se sale del loop
            if (resp != 1) { cout << "valor incorrecto.. ingrese otra vez\n"; }
            else {
                cout<<"no se incluyo Fisica-2 y E. discretas-2 en tu horario preliminar\n";
                cout << "que curso deseas cambiar?(escriba el curso con el nombre que se ve en el horario): \n";
                string curso;
                cin >> curso;//se ingresa el curso a cambiar
                if (toupper(curso[0]) == 'M') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if (acu == 1) {
                                cout << horarios(ciclo, toupper(curso[0]));
                            }

                            cambio = inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
                            if (cambio == 1) {
                                cout << "Seccion no recomendada\n";
                            }
                            if (cambio == 2) {
                                char muestra = horario[2][0][0];
                                char muestra2 = horario[2][2][0];
                                char muestra3 = horario[2][4][0];

                                int valor = int(muestra);
                                int valor2 = int(muestra2);
                                int valor3 = int(muestra3);

                                if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                    cout << "conflicto" << endl;
                                else {
                                    if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                            horario[2][0] = "Matematica-2          ";
                                            horario[2][2] = "Matematica-2          ";
                                            horario[2][4] = "Matematica-2          ";
                                            cout << "Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if (cambio == 3) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[3][0][0];
                                    char muestra2 = horario[3][2][0];
                                    char muestra3 = horario[3][4][0];
                                    int valor = int(muestra);
                                    int valor2 = int(muestra2);
                                    int valor3 = int(muestra3);

                                    if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                                cout << "conflicto" << endl;
                                            else {
                                                eliminacion(curso, horario);//se elimina en toda la matriz el curso elegido
                                                horario[3][0] = "Matematica-2          ";
                                                horario[3][2] = "Matematica-2          ";
                                                horario[3][4] = "Matematica-2          ";
                                                cout << "Se cambio exitosamente tu horario\n";
                                                imprimir(horario);
                                            }
                                        }
                                    }
                                }
                            }
                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }
                    } while (cambio != 0);

                }
                //Fisica2
                if (toupper(curso[0]) == 'F') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }

                            if (cambio == 1) {
                                cout << "Seccion no recomendada\n";
                            }
                            if (cambio == 2) {
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
                                        horario[2][1]="Fisica-2              ";
                                        horario[2][4]="Fisica-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }


                            }
                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);

                }
                //lab com
                if (toupper(curso[0]) == 'L') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }
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
                                        horario[1][0] = "LabCom-2              ";
                                        horario[1][4] = "LabCom-2              ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }

                            }
                            if (cambio == 2) {//primero se verifica si hace conflicto en tu horario

                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
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
                                            horario[2][1] = "LabCom-2              ";
                                            horario[2][3] = "LabCom-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }

                            if (cambio == 3) {
                                cout << "Seccion no recomendada\n";
                            }
                            if (cambio == 4) {//primero se verifica si hace conflicto en tu horario

                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
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
                                            horario[3][3] = "LabCom-2              ";
                                            horario[3][4] = "LabCom-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }


                            }
                            if (cambio == 5) {//primero se verifica si hace conflicto en tu horario

                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
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
                                            horario[1][1] = "LabCom-2              ";
                                            horario[4][3] = "LabCom-2              ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }
                            }
                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);

                }
                //POO
                if (toupper(curso[0]) == 'P') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout<<horarios(ciclo,toupper(curso[0]));
                        int acu=0;
                        while(acu<2) {
                            if(acu==1){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }

                            cambio=inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }

                            if (cambio == 1) {
                                cout<<"Seccion recomendado\n";
                            }
                            if(cambio==2){//primero se verifica si hace conflicto en tu horario

                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[1][1][0];
                                    char muestra2=horario[2][3][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[1][1]="POO                   ";
                                            horario[2][3]="POO                   ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }

                            }
                            if(cambio==3){//primero se verifica si hace conflicto en tu horario

                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[7][1][0];
                                    char muestra2=horario[7][4][0];
                                    int valor = int(muestra);
                                    int valor2=int(muestra2);
                                    if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                        else{
                                            eliminacion(curso,horario);
                                            horario[7][1]="POO                   ";
                                            horario[7][4]="POO                   ";
                                            cout<<"Se cambio exitosamente tu horario\n";
                                            imprimir(horario);
                                        }
                                    }
                                }

                            }
                            if(cambio==4){//primero se verifica si hace conflicto en tu horario

                                char muestra = horario[6][0][0];
                                char muestra2=horario[4][4][0];
                                int valor = int(muestra);
                                int valor2=int(muestra2);
                                if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                else{
                                    if(valor2<90 && valor2>64 && muestra2!=toupper(curso[0]))cout<<"conflicto"<<endl;
                                    else{
                                        eliminacion(curso,horario);
                                        horario[6][0]="POO                   ";
                                        horario[4][4]="POO                   ";
                                        cout<<"Se cambio exitosamente tu horario\n";
                                        imprimir(horario);
                                    }
                                }

                            }
                            if(acu==0){
                                cout<<horarios(ciclo,toupper(curso[0]));
                            }
                        }

                    } while (cambio != 0);

                }
                //desarrollo de empresas
                if (toupper(curso[0])=='D'){

                    int cambio;

                    do{
                        //comunicando los cursos disponibles
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}

                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[5][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[5][0]="Desarrollo-de-empresas";
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
                                horario[2][4]="Desarrollo-de-empresas";
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
                                horario[3][2]="Desarrollo-de-empresas";
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
                                horario[6][1]="Desarrollo-de-empresas";
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
                                horario[7][1]="Desarrollo-de-empresas";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }


                    }while(cambio!=0);
                }
                //estructura discretas
                if (toupper(curso[0]) == 'E') {
                    int cambio;
                    //comunicando los cursos disponibles
                    do {
                        cout << horarios(ciclo, toupper(curso[0]));
                        int acu = 0;
                        while (acu < 2) {
                            if (acu == 1) {
                                cout << horarios(ciclo, toupper(curso[0]));
                            }

                            cambio = inden();// opcion
                            if (cambio == 0)break;
                            if (cambio == -1) {
                                eliminacion(curso, horario);
                                imprimir(horario);
                            }

                            if (cambio == 1) {
                                cout<<"Seccion no recomendado\n";
                            }
                            if (cambio == 2) {
                                if(acu==0){
                                    cout<<"curso no recomendado\n";
                                    acu++;
                                }
                                else {
                                    char muestra = horario[3][0][0];
                                    char muestra2 = horario[6][1][0];
                                    char muestra3 = horario[2][4][0];

                                    int valor = int(muestra);
                                    int valor2 = int(muestra2);
                                    int valor3 = int(muestra3);
                                    if (valor < 90 && valor > 64 && muestra != toupper(curso[0]))
                                        cout << "conflicto" << endl;
                                    else {
                                        if (valor2 < 90 && valor2 > 64 && muestra2 != toupper(curso[0]))
                                            cout << "conflicto" << endl;
                                        else {
                                            if (valor3 < 90 && valor3 > 64 && muestra3 != toupper(curso[0]))
                                                cout << "conflicto" << endl;
                                            else {
                                                eliminacion(curso, horario);
                                                horario[3][0] = "E.Discrestas-2       ";
                                                horario[6][1] = "E.Discrestas-2       ";
                                                horario[2][4] = "E.Discrestas-2       ";
                                                cout << "Se cambio exitosamente tu horario\n";
                                                imprimir(horario);

                                            }
                                        }
                                    }
                                }
                            }
                        }

                    } while (cambio != 0);
                }
                //arte y tec
                if(toupper(curso[0])=='A'){
                    int cambio;

                    do{
                        //comunicando los cursos disponibles
                        cout<<horarios(ciclo,toupper(curso[0]));
                        cambio=inden();// opcion
                        if(cambio==0)break;
                        if(cambio==-1){eliminacion(curso,horario);imprimir(horario);}
                        if(cambio==1){//primero se verifica si hace conflicto en tu horario

                            char muestra = horario[2][0][0];

                            int valor = int(muestra);

                            if(valor<90 && valor>64 && muestra!=toupper(curso[0]))cout<<"conflicto"<<endl;
                            else{
                                eliminacion(curso,horario);//se elimina en toda la matriz el curso elegido
                                horario[2][0]="Arte&tecnologia       ";
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
                                horario[2][0]="Arte&tecnologia       ";
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
                                horario[3][4]="Arte&tecnologia       ";
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
                                horario[2][3]="Arte&tecnologia       ";
                                cout<<"Se cambio exitosamente tu horario\n";
                                imprimir(horario);
                            }

                        }
                    }while(cambio!=0);

                }
            }
        } while (resp != 0);

        imprimir(horario);
        leerarch(horario);

    }

}
