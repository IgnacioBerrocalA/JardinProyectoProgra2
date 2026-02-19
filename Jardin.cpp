//
// Created by Home on 17/02/2026.
//

#include "Jardin.h"

Jardin::Jardin(int ancho, int alto) : img(ancho,alto,1,3,255) {
    this->ancho = ancho;
    this->alto = alto;
}

void Jardin::agregar(Figura* f) {
    figuras.push_back(f);
    f->dibujar(img);
}

void Jardin::mostrar() {
    img.display("Jardin");
}
Jardin::~Jardin() {
    for (int i = 0; i < figuras.size(); i++) {
        delete figuras[i];
    }
}
