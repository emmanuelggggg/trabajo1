//
// Created by Many1 on 20/05/2020.
//

#include "Director.h"
#include <cstring>
#include <iostream>

using namespace std;

Director::Director(){

}

Director::Director(char nombre[100], char nacionalidad[100]) {
    strcpy(this->nombre, nombre);
    strcpy(this->nacionalidad, nacionalidad);
}

void Director::toString() {
    cout<<"===DIRECTOR===";
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Nacionalidad: "<<this->nacionalidad<<endl;
    cout<<"==============";
}