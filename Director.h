//
// Created by Many1 on 20/05/2020.
//

#ifndef CLIONC___DIRECTOR_H
#define CLIONC___DIRECTOR_H


class Director {
    private:
        char nombre[100];
        char nacionalidad[100];
    public:
        Director();
        Director(char [], char []);
        void toString();
};


#endif //CLIONC___DIRECTOR_H
