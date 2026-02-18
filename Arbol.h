#ifndef JARDINPROYECTOPROGRA2_ARBOL_H
#define JARDINPROYECTOPROGRA2_ARBOL_H
#include "Figura.h"

class Arbol : public Figura {
private:
    int altura;
public:
    Arbol(int x, int y, int altura);
    int get_altura();
    void dibujar(CImg<unsigned char>& img);
};
#endif //JARDINPROYECTOPROGRA2_ARBOL_H