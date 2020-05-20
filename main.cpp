#include <iostream>
#include "Libro.h"
#include "Persona.h"
#include "Prestamos.h"
#include <cstring>

using namespace std;

Libro registrarLibro(){
    /*VARIABLES LIBRO*/
    char titulo[100];
    int annio;
    char genero[100];
    char editorial[100];
    char isbn[100];
    /*VARIABLES AUTOR*/
    char nombre[100];
    char apellido[100];
    char nacionalidad[100];

    cout<<"===DATOS DEL LIBRO==="<<endl;
    cout<<"Ingrese el titulo del libro: "; cin>>titulo;
    cout<<"Ingrese el annio del libro: "; cin>>annio;
    cout<<"Ingrese el genero del libro: "; cin>>genero;
    cout<<"Ingrese la editorial del libro: "; cin>>editorial;
    cout<<"Ingrese el ISBN del libro: "; cin>>isbn;
    cout<<"===========================";
    cout<<"\n";
    cout<<"====DATOS DEL AUTOR===="<<endl;
    cout<<"Ingrese el nombre del autor: "; cin>>nombre;
    cout<<"Ingrese el apellido del autor: "; cin>>apellido;
    cout<<"Ingrese la nacionalidad del autor: "; cin>>nacionalidad;
    cout<<"====================================";
    return Libro(titulo, annio, genero, editorial, isbn, nombre, apellido, nacionalidad);
}

Persona registrarUsuario(){
    /*VARIABLES USUARIO*/
    char nombre[100];
    char apellido[100];
    int edad;
    char genero[100];
    char domicilio[100];
    int telefono;
    cout<<"==REGISTRATE=="<<endl;
    cout<<"Nombre:"; cin>>nombre;
    cout<<"Apellido:"; cin>>apellido;
    cout<<"Edad:"; cin>>edad;
    cout<<"Genero:"; cin>>genero;
    cout<<"Domicilio:"; cin>>domicilio;
    cout<<"Telefono:"; cin>>telefono;
    cout<<"=============";
    cout<<"\n";
    return Persona(nombre, apellido, edad, genero, domicilio, telefono);
}

Prestamos registrarPrestamo(int libro){
    int usuario;
    char fechaInicial[100];

    cout<<"Ingrese el nombre de usuario: "; cin>>usuario;
    cout<<"Ingrese la fecha inicial: "; cin>>fechaInicial;

    return Prestamos(usuario, libro, fechaInicial);
}

void mostrarLibros(Libro arreglolibros[10], int contLibros){
    for (int i = 0; i<contLibros; i++){
        cout<<"Libro #"<<i<<endl;
        arreglolibros[i].toString();
    }
}

void menuPrincipal(){
    cout<<"======MENU PRINCIPAL======="<<endl;
    cout<<"1. Administrar usuarios"<<endl;
    cout<<"2. Administrar libros"<<endl;
    cout<<"3. Administrar prestamos"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"===========================";
}

void menuUsuarios(){
    cout<<"======USUSARIOS===="<<endl;
    cout<<"1. Registrar usuario"<<endl;
    cout<<"2. Editar usuario"<<endl;
    cout<<"3. Consultar usuarios"<<endl;
    cout<<"4. Eliminar usuarios"<<endl;
    cout<<"5. Regresar"<<endl;
    cout<<"=====================";
}

void menuLibros(){
    cout<<"=======LIBROS======"<<endl;
    cout<<"1. Registrar libro"<<endl;
    cout<<"2. Editar libro"<<endl;
    cout<<"3. Consultar libro"<<endl;
    cout<<"4. Eliminar libro"<<endl;
    cout<<"5. Regresar"<<endl;
    cout<<"=====================";
}

void menuPrestamos(){
    cout<<"========PRESTAMOS======="<<endl;
    cout<<"1. Realizar un prestamo"<<endl;
    cout<<"2. Devolver un libro"<<endl;
    cout<<"3. Consultar prestamo"<<endl;
    cout<<"4. Regresar"<<endl;
    cout<<"========================";
}

int main() {
    int opc;
    bool flag = true;
    bool t = true;
    int no;
    int contUsuarios = 0;
    int contLibros = 0;
    int contPrestamo = 0;
    int tB;
    Libro arregloLibros[10];
    Persona arregloPersonas[10];
    Prestamos arregloPrestamos[100];
    char fechaFinal[100];

    while(flag = true){
        menuPrincipal();
        cin>>opc;

        switch (opc) {
            case 1:
                while(flag){
                    menuUsuarios();
                    cin>>opc;
                    switch(opc) {
                        case 1:
                            cout<<"====REGISTRAR USUARIO==="<<endl;
                            arregloPersonas[contUsuarios] = registrarUsuario();
                            cout<<"=SE A REGISTRADO CON EXITO="<<endl;
                            contUsuarios++;
                            break;
                             case 2:
                            cout<<"=====EDITAR USUARIO===="<<endl;
                            if(contUsuarios > 0){
                                cout<<"Ingresa el numero de usuario que desea editar: ";
                                cin>>no;

                                arregloPersonas[no] = registrarUsuario();
                            }
                            else{
                                cout<<"AUN NO HAY USUARIOS REGISTRADOS"<<endl;
                            }
                            break;
                        case 3:
                            cout<<"===CONSULTAR USUARIO==="<<endl;
                            if(contUsuarios > 0){
                                cout<<"Ingresa el numero de  usuario que desea consultar: ";
                                cin>>no;

                                arregloPersonas[no].toString();

                                cout<<"===INFORMACION DE LOS PRESTAMOS==="<<endl;
                                for (int i = 0; i < contPrestamo; ++i) {
                                    if(arregloPrestamos[i].getUsuario() == 0){
                                        arregloLibros[arregloPrestamos[no].getLibro()].toString();
                                        arregloPrestamos[i].toString();
                                    }
                                }

                            }
                            else{
                                cout<<"Aun no hay usuarios registrados."<<endl;
                            }
                            break;
                        case 4:
                            cout<<"====ELIMINAR UN USUARIO===="<<endl;
                            if(contUsuarios > 0){
                                cout<<"Ingresa el numero de usuario que desea eliminar: ";
                                cin>>no;
                                arregloPersonas[no] = Persona();
                                cout<<"---Usuario eliminado---"<<endl;
                            }
                            else{
                                cout<<"Aun no hay usuarios registrados."<<endl;
                            }
                            break;
                        case 5:
                            flag = false;
                            break;
                    }
                }
                break;
            case 2:
                while(flag){
                    menuLibros();
                    cin>>opc;
                    switch(opc) {
                        case 1:
                            cout<<"===REGISTRAR LIBROS==="<<endl;
                            arregloLibros[contLibros] = registrarLibro();
                            cout<<"===SE A REGISTRADO CON EXITO==="<<endl;
                            contLibros++;
                            break;
                        case 2:
                            cout<<"===EDITAR LIBRO==="<<endl;
                            if(contLibros > 0){
                                cout<<"Ingresa el numero del libro que desea editar: ";
                                cin>>no;
                                arregloLibros[no] = registrarLibro();
                            }
                            else{
                                cout<<"NO SE A REGISTRADO NINGUN LIBRO AUN "<<endl;
                            }
                            break;
                        case 3:
                            cout<<"===CONSULTAR LIBRO==="<<endl;
                            if(contLibros > 0){
                                cout<<"Ingresa el numero del libro que desea consultar: ";
                                cin>>no;
                                arregloLibros[no].toString();
                                cout<<"==Informacion de prestamos=="<<endl;
                                for (int i = 0; i < contPrestamo; i++) {
                                    if(arregloPrestamos[i].getLibro() == no){
                                        //imprinmir los detalles del usuariio
                                        arregloPersonas[arregloPrestamos[no].getUsuario()].toString();

                                        //imprimir los detalles del prestamo
                                        arregloPrestamos[i].toString();
                                    }
                                }
                            }
                            else{
                                cout<<"MO SE A REGISTRADO LIBROS AUN"<<endl;
                            }
                            break;
                        case 4:
                            cout<<"==ELIMINAR LIBRO=="<<endl;
                            if(contLibros > 0){
                                cout<<"Ingresa el numero del libro que desea eliminar: ";
                                cin>>no;
                                arregloLibros[no] = Libro();
                                cout<<"-Libro eliminado-"<<endl;
                            }
                            else{
                                cout<<"NO SE A REGISTRADO LIBROS AUN"<<endl;
                            }
                            break;
                        case 5:
                            flag = false;
                            break;
                    }
                }
                break;
            case 3:
                while(flag){
                    menuPrestamos();
                    cin>>opc;
                    switch(opc) {
                        case 1:
                            cout<<"===REALIZAR PRESTAMOS==="<<endl;
                            mostrarLibros(arregloLibros, contLibros);
                            cout<<"Ingrese el numero de libro: ";
                            cin>>no;

                            t = true;

                            for(int i = 0; i < contPrestamo; i++){
                                /*Si entra al if, el libro esta prestado*/
                                if(no == arregloPrestamos[i].getLibro() && arregloPrestamos[i].getEstatus() == 1 ){
                                    t = false;
                                }
                            }

                            if(t == true){ /*Si nunca entro al if, el libro no esta prestado*/
                                arregloPrestamos[contPrestamo] = registrarPrestamo(no);
                                contPrestamo++;
                            }
                            else{
                                cout<<"El libro ya se presto a un usuario"<<endl;
                            }
                            break;
                        case 2:
                            cout<<"===DEVOLVER PRESTAMO==="<<endl;
                            cout<<"Ingresa el numero de prestamo: ";
                            cin>>no;

                            /*Forma corta*/
                            arregloPersonas[arregloPrestamos[no].getUsuario()].toString();

                            /*Forma larga*/
                            tB = arregloPrestamos[no].getLibro();
                            arregloLibros[tB].toString();
                            /*arregloLibros[arregloPrestamos[no].getLibro()].toString();*/

                            arregloPrestamos[no].toString();

                            if(arregloPrestamos[no].getEstatus() == 1){
                                cout<<"Ingresa la fecha de devolucion: ";
                                cin>>fechaFinal;

                                arregloPrestamos[no].devolucion(fechaFinal);

                                cout<<"LIBRO DEVUELTO";
                            }
                            else{
                                cout<<"El prestamo ha sido devuelto anteriormente"<<endl;
                            }
                            break;
                        case 3:
                            cout<<"===CONSULTAR LIBRO==="<<endl;
                            cout<<"Ingresa el numero de prestamos: "; cin>>no;

                            /*Forma Corta*/
                            arregloPersonas[arregloPrestamos[no].getUsuario()].toString();
                            /*Forma Larga*/
                            arregloLibros[arregloPrestamos[no].getLibro()].toString();
                            arregloPrestamos[no].toString();
                            break;
                        case 4:
                            flag = false;
                            break;
                    }
                }
                break;
            case 4:
                flag = false;
                break;
        }
    }

    cout<<"AY NOMAS CHAYAN";
    return 0;
}