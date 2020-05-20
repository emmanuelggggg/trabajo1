//
// Created by Many1 on 17/05/2020.
//

#ifndef CLIONC___PRESTAMOS_H
#define CLIONC___PRESTAMOS_H

class Prestamos {
    private:
        int usuario;
        int libro;
        char fechaInicial[100];
        char fechaFinal[100];
        int estatus;
    public:
        Prestamos();
        Prestamos(int, int, char []);
        void devolucion(char []);
        int getUsuario();
        int getLibro();
        int getEstatus();
        void toString();

};


#endif //CLIONC___PRESTAMOS_H
