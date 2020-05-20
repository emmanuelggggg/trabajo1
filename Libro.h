//
// Created by Many1 on 17/05/2020.
//

#ifndef CLIONC___LIBRO_H
#define CLIONC___LIBRO_H

#include "Libro.h"
class Libro {
    private:
        char titulo[100];
        int annio;
        char genero[100];
        char editorial[100];
        char isbn[100];
        char nombre[100];
        char apellido[100];
        char nacionalidad[100];
    public:

        Libro();
        Libro(char [], int, char [], char [], char [], char [], char [], char []);
        void update();
        void toString();
};


#endif //CLIONC___LIBRO_H
