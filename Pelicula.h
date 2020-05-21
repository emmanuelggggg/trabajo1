//
// Created by Many1 on 20/05/2020.
//

#ifndef CLIONC___PELICULA_H
#define CLIONC___PELICULA_H
#include "Director.h"

class Pelicula {
private:
    char nombre[100]{};
    Director director{};
    int annio;
    char genero[100]{};
    char productora[100]{};
    int minutos;
public:
    Pelicula();
    Pelicula(char [], Director, int, char[], char [], int);
    void update(char [], Director, int, char[], char [], int);
    void eliminar();
    char getTitulo();
    void getDirector();
    void toString();
};


#endif //CLIONC___PELICULA_H
