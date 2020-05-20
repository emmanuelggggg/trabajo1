//
// Created by Many1 on 17/05/2020.
//

#ifndef CLIONC___PERSONA_H
#define CLIONC___PERSONA_H

class Persona {
private:
    char nombre[100];
    char apellido[100];
    int edad;
    char genero[100];
    char domicilio[100];
    int telefono;
public:
    Persona();
    Persona(char [], char [], int, char [], char [], int);
    void update(char [], char [], int, char [], char [], int);
    void toString();
};

#endif //CLIONC___PERSONA_H
