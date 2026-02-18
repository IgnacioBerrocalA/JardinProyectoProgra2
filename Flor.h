//
// Created by Home on 17/02/2026.
//

#ifndef JARDINPROYECTOPROGRA2_FLOR_H
#define JARDINPROYECTOPROGRA2_FLOR_H
#include "Figura.h"

class Flor : public Figura {
private:
    int tam;
public:
    Flor(int x, int y, int tam);
    int get_tam();
    void dibujar(CImg<unsigned char>& img);
};
#endif //JARDINPROYECTOPROGRA2_FLOR_H