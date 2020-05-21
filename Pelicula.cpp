//
// Created by Many1 on 20/05/2020.
//
#include <iostream>
#include <cstring>
#include "Pelicula.h"
#include "Director.h"

using namespace std;

Pelicula::Pelicula() {}

Pelicula::Pelicula(char nombre[100], Director director, int annio, char genero[100], char productora[100], int minutos) {
    strcpy(this->nombre, nombre);
    this->director = director;
    this->annio = annio;
    strcpy(this->genero, genero);
    strcpy(this->productora, productora);
    this->minutos = minutos;
}

void Pelicula::update(char nombre[100], Director director, int annio, char genero[100], char productora[100], int minutos) {
    strcpy(this->nombre, nombre);
    this->director = director;
    this->annio = annio;
    strcpy(this->genero, genero);
    strcpy(this->productora, productora);
    this->minutos = minutos;
}

void Pelicula::eliminar() {

}

void Pelicula::getDirector() {
    this->director.toString();
}

char Pelicula::getTitulo() {
    return this->nombre[100];
}

void Pelicula::toString() {
    cout<<"====PELICULA====";
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Annio: "<<this->annio<<endl;
    cout<<"Genero: "<<this->genero<<endl;
    cout<<"Productora: "<<this->productora<<endl;
    cout<<"Duracion: "<<this->minutos<<endl;
    this->director.toString();
    cout<<"==============";
}