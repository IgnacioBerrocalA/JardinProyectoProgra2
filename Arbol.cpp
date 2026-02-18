//
// Created by Home on 17/02/2026.
//

#include "Arbol.h"
Arbol::Arbol(int x, int y, int altura)
    : Figura(x, y) {
    this->altura = altura;
}

int Arbol::get_altura() {
    return altura;
}
void Arbol::dibujar(CImg<unsigned char>& img) {

    unsigned char verde[] = {0,200,0};
    unsigned char marron[] = {139,69,19};

    int x = get_x();
    int y = get_y();
    int h = get_altura();

    img.draw_triangle(x, y-h, x-h, y, x+h, y, verde);
    img.draw_rectangle(x-5, y, x+5, y+h, marron);
}