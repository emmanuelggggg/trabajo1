//
// Created by Many1 on 17/05/2020.
//

#include "Persona.h"
#include <iostream>
#include <cstring>

using  namespace std;

Persona::Persona() {}

Persona::Persona(char nombre[100], char apellido[100], int edad, char genero[100], char domicilio[100], int telefono) {
    strcpy(this->nombre, nombre);
    strcpy(this->apellido, apellido);
    this->edad = edad;
    strcpy(this->genero, genero);
    strcpy(this->domicilio, domicilio);
    this->telefono = telefono;
}

void Persona::update(char nombre[100], char apellido[100], int edad, char genero[100], char domicilio[100], int telefono) {
    strcpy(this->nombre, nombre);
    strcpy(this->apellido, apellido);
    this->edad = edad;
    strcpy(this->genero, genero);
    strcpy(this->domicilio, domicilio);
    this->telefono = telefono;
}

void Persona::toString() {
    cout<<"=======ACERCA DEL USUARIO====="<<endl;
    cout<<"Nombre: "<< this->nombre<<endl;
    cout<<"Apellido: "<<this->apellido<<endl;
    cout<<"Edad: "<<this->edad<<endl;
    cout<<"Genero: "<<this->genero<<endl;
    cout<<"Domicilio: "<<this->domicilio<<endl;
    cout<<"Telefono: "<<this->telefono<<endl;
    cout<<"============================"<<endl;
}