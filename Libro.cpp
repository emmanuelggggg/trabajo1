//
// Created by Many1 on 17/05/2020.
//

#include "Libro.h"
#include <iostream>
#include <cstring>
using namespace std;

Libro::Libro() {}

Libro::Libro(char titulo[100], int annio, char genero[100], char editorial[100], char isbn[100], char nombre[100], char apellido[100], char nacionalidad[100]) {
    strcpy(this->titulo, titulo);
    this->annio = annio;
    strcpy(this->genero, genero);
    strcpy(this->editorial, editorial);
    strcpy(this->isbn, isbn);
    strcpy(this->nombre, nombre);
    strcpy(this->apellido, apellido);
    strcpy(this->nacionalidad, nacionalidad);
}

void Libro::toString() {
    cout<<"=========ACERCA DEL LIBRO========"<<endl;
    cout<<"Titulo del libro: "<<this->titulo<<endl;
    cout<<"Annio de publicacion: "<<this->annio<<endl;
    cout<<"Genero: "<<this->genero<<endl;
    cout<<"Editorial: "<<this->editorial<<endl;
    cout<<"ISBN: "<<this->isbn<<endl;
    cout<<"Nombre del autor: "<<this->nombre<<endl;
    cout<<"Apellido del autor: "<<this->apellido<<endl;
    cout<<"Nacionalidad del autor: "<<this->nacionalidad<<endl;
    cout<<"=================================="<<endl;
}