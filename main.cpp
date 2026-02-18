#include <iostream>
#include "Arbol.h"
#include "Flor.h"
#include "Jardin.h"

using namespace std;

int menu() {
    int opcion;
    cout<<endl;
    cout<<"===== JARDIN ====="<<endl;
    cout<<"1. Agregar arbol"<<endl;
    cout<<"2. Agregar flor"<<endl;
    cout<<"3. Mostrar jardin"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;
    return opcion;
}

int main() {
    Jardin jardin(800,600);

    int opcion;
    int x,y,t;

    do {

        opcion = menu();

        switch(opcion) {

        case 1:
            cout<<"Posicion x: ";
            cin>>x;
            cout<<"Posicion y: ";
            cin>>y;
            cout<<"Altura: ";
            cin>>t;
            jardin.agregar(new Arbol(x,y,t));
            break;

        case 2:
            cout<<"Posicion x: ";
            cin>>x;
            cout<<"Posicion y: ";
            cin>>y;
            cout<<"Tamano: ";
            cin>>t;
            jardin.agregar(new Flor(x,y,t));
            break;

        case 3:
            jardin.mostrar();
            break;

        case 0:
            cout<<"Saliendo..."<<endl;
            break;

        default:
            cout<<"Opcion invalida"<<endl;
        }

    } while(opcion!=0);

    return 0;
}
