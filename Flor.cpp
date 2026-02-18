//
// Created by Home on 17/02/2026.
//

#include "Flor.h"

Flor::Flor(int x, int y, int tam)
    : Figura(x, y) {
    this->tam = tam;
}

int Flor::get_tam() {
    return tam;
}

void Flor::dibujar(CImg<unsigned char>& img) {

    unsigned char rojo[] = {255,0,0};
    unsigned char amarillo[] = {255,255,0};
    unsigned char verde[] = {0,150,0};

    int x = get_x();
    int y = get_y();
    int t = get_tam();

    img.draw_circle(x, y, t, rojo);
    img.draw_circle(x, y, t/2, amarillo);
    img.draw_line(x, y+t, x, y+t*3, verde);
}