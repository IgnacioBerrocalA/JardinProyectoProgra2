//
// Created by Home on 17/02/2026.
//

#ifndef JARDINPROYECTOPROGRA2_FIGURA_H
#define JARDINPROYECTOPROGRA2_FIGURA_H
#include "CImg.h"
#include <string>

using namespace cimg_library;
using namespace std;

class Figura {
private:
    int x;
    int y;
public:
    Figura(int x, int y);
    int get_x();
    int get_y();
    virtual void dibujar(CImg<unsigned char>& img) = 0;
    virtual ~Figura() {}
};
#endif //JARDINPROYECTOPROGRA2_FIGURA_H
