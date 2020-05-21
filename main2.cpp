#include <iostream>
#include "Pelicula.h"
#include "Director.h"
#include <cstring>


using namespace std;

void menu(){
    cout<<"===MENU PRINCIPAL==="<<endl;
    cout<<"1. Registrar"<<endl;
    cout<<"2. Editar"<<endl;
    cout<<"3. Eliminar"<<endl;
    cout<<"4. Consultar Director"<<endl;
    cout<<"5. Informacion"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"==============";
}

Pelicula registrarPelicula(){

    char titulo[100];
    int annio;
    char genero[100];
    char productora[100];
    int minutos;


    char nombre[100];
    char nacionalidad[100];

    cout<<"===PELICULA==="<<endl;
    cout<<"Ingresa el nombre: "; cin>>titulo;
    cout<<"Ingrese el annio: "; cin>>annio;
    cout<<"Ingrese el genero: "; cin>>genero;
    cout<<"Ingrese la productora: "; cin>>productora;
    cout<<"Duracion: "; cin>>minutos;
    cout<<"==============";
    cout<<"\n";

    cout<<"==DIRECTOR=="<<endl;
    cout<<"Nombre: "; cin>>nombre;
    cout<<"Nacionalidad: "; cin>>nacionalidad;

    return Pelicula(titulo, Director(nombre, nacionalidad), annio, genero, productora, minutos);
}

int main() {
    int opc;
    bool repite = true;
    int no;
    int peli = 0;
    Pelicula peliculas[10];

    while (repite){
        menu();
        cin>>opc;
        switch (opc) {
            case 1:
                cout<<"=REGISTRAR PELICULA"<<endl;
                peliculas[peli] = registrarPelicula();
                cout<<"SE A REGISTRADO LA PELICULA CON EXITO"<<endl;
                peli++;
                break;
            case 2:
                cout<<"===EDITAR LA PELICULA==="<<endl;
                cout<<"Ingresa el numero de pelicula: "; cin>>no;
                peliculas[no] = registrarPelicula();
                cout<<"SE A EDITADO CON EXITO"<<endl;
                break;
            case 3:
                cout<<"===ELIMINAR PELICULA==="<<endl;
                cout<<"Ingresa el numero de pelicula: "; cin>>no;
                peliculas[no] = Pelicula();
                cout<<"SE A ELIMINADO LA PELICULA"<<endl;
                break;
            case 4:
                cout<<"==CONSULTAR DIRECTOR=="<<endl;
                cout<<"Ingresa el numero de pelicula: "; cin>>no;
                peliculas[no].getDirector();
                break;
            case 5:
                cout<<"==INFORMACION DE LA PELICULA=="<<endl;
                cout<<"Ingresa el numero de pelicula: "; cin>>no;
                peliculas[no].toString();
                break;
            default:
                repite = false;
                break;
        }
    }

    return 0;
}