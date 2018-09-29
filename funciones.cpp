//
// Created by Marko  Puchuri on 25/09/18.
//

#include <iostream>
#include <fstream>
#include <string>
#include "funciones.h"
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

                if (respuesta == 'a') {
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

                if (respuesta == 'b') {
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

                if (respuesta == 'b') {
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

                if (respuesta == 'a') {
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

                if (respuesta == 'b') {
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

                if (respuesta == 'c') {
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

                if (respuesta == 'c') {
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

                if (respuesta == 'c') {
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

                if (respuesta == 'c') {
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
void burros(int ciclo){
    if (ciclo==1){
        ifstream archivo;
        string texto;
        archivo.open("/Users/markopuchuri/Desktop/POO1/proyecto-1/burros/ciclo0",ios::in);//crear archivo
        while(!archivo.eof()){
            getline(archivo,texto);
            cout<<texto<<endl;
        }
        archivo.close();
    }
    if (ciclo==2){

    }
    if (ciclo==3){

    }
    if (ciclo==4){

    }
    if (ciclo==5){

    }



}
void normales(int ciclo,int horariopref){
    if (ciclo==1){
        if(horariopref==0)
        {ifstream archivo;
            string texto;
            archivo.open("/Users/markopuchuri/Desktop/POO1/proyecto-1/burros/ciclo0",ios::in);//crear archivo
            while(!archivo.eof()){
                getline(archivo,texto);
                cout<<texto<<endl;
            }
            archivo.close();}
        if(horariopref==1)
        {ifstream archivo;
            string texto;
            archivo.open("/Users/markopuchuri/Desktop/POO1/proyecto-1/burros/ciclo0",ios::in);//crear archivo
            while(!archivo.eof()){
                getline(archivo,texto);
                cout<<texto<<endl;
            }
            archivo.close();}
    }
    if (ciclo==2){

    }
    if (ciclo==3){

    }
    if (ciclo==4){

    }
    if (ciclo==5){

    }


}
void cracks(int ciclo,int horariopref){
    if (ciclo==1){
        if(horariopref==0)
        {ifstream archivo;
            string texto;
            archivo.open("/Users/markopuchuri/Desktop/POO1/proyecto-1/burros/ciclo0",ios::in);//crear archivo
            while(!archivo.eof()){
                getline(archivo,texto);
                cout<<texto<<endl;
            }
            archivo.close();}

        if(horariopref==1)
        {ifstream archivo;
            string texto;
            archivo.open("/Users/markopuchuri/Desktop/POO1/proyecto-1/burros/ciclo0",ios::in);//crear archivo
            while(!archivo.eof()){
                getline(archivo,texto);
                cout<<texto<<endl;
            }
            archivo.close();}

        if(horariopref==2)
        {ifstream archivo;
            string texto;
            archivo.open("/Users/markopuchuri/Desktop/POO1/proyecto-1/burros/ciclo0",ios::in);//crear archivo
            while(!archivo.eof()){
                getline(archivo,texto);
                cout<<texto<<endl;
            }
            archivo.close();}
    }
    if (ciclo==2){

    }
    if (ciclo==3){

    }
    if (ciclo==4){

    }
    if (ciclo==5){

    }

}
