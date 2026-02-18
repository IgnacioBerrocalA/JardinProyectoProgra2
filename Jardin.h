//
// Created by Home on 17/02/2026.
//

#ifndef JARDINPROYECTOPROGRA2_JARDIN_H
#define JARDINPROYECTOPROGRA2_JARDIN_H
#include <vector>
#include "Figura.h"

using namespace std;

class Jardin {

private:
    int ancho;
    int alto;
    CImg<unsigned char> img;
    vector<Figura*> figuras;
public:
    Jardin(int ancho, int alto);
    void agregar(Figura* f);
    void mostrar();
};
#endif //JARDINPROYECTOPROGRA2_JARDIN_H