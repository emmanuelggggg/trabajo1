//
// Created by Many1 on 17/05/2020.
//

#include "Prestamos.h"
#include "Libro.h"
#include "Persona.h"

#include <iostream>
#include <cstring>

using namespace std;

Prestamos::Prestamos() {

}

Prestamos::Prestamos(int usuario, int libro, char fechaInicial[100]) {
    this->usuario = usuario;
    this-> libro = libro;
    strcpy(this->fechaInicial, fechaInicial);
    strcpy(this->fechaFinal, fechaFinal);
    this->estatus = 1;
}

void Prestamos::devolucion(char fechaFinal[100]) {
    strcpy(this->fechaFinal, fechaFinal);
    this->estatus = 0;
}

int Prestamos::getLibro() {
    return this->libro;
}
int Prestamos::getUsuario() {
    return this->usuario;
}

int Prestamos::getEstatus() {
    return this->estatus;
}

void Prestamos::toString() {
    cout<<"Fecha Inicial: "<<this->fechaInicial<<endl;
    if(this->estatus == 1){
        cout<<"Estado del prestamo: Ocupado"<<endl;
    }
    else{
        cout<<"Estado del prestamo: Disponible"<<endl;
        cout<<"Fecha final: "<<this->fechaFinal<<endl;
    }
}