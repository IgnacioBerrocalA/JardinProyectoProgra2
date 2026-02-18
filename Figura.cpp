#include "Figura.h"

Figura::Figura(int x, int y, int tamano) {
    this->x = x;
    this->y = y;
    this->tamano = tamano;
}
int Figura::get_x() {
    return x;
}

int Figura::get_y() {
    return y;
}