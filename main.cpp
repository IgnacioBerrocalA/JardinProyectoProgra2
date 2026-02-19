#include <iostream>
#include "Arbol.h"
#include "Flor.h"
#include "Jardin.h"

using namespace std;

int main() {

    Jardin jardin(800,600);

    LectorArchivo lector("datos.txt");
    lector.cargar(jardin);

    jardin.mostrar();

    return 0;
}
