//#ifndef CUADRADO_H
// Guardas
//#define CUADRADO_H

//CLASE CUADRADO
#include <iostream>
#include <cstdlib>

#include "FiguraGeometrica.h"

using std::cin;
using std::cout;
using std::endl;

class Cuadrado : public FiguraGeometrica
{
private:
    float lado;

public:
    Cuadrado(); //no olvidar
    Cuadrado(float);
    void mostrarFigura() const;
    virtual void calcularArea();
    virtual void calcularPerimetro();
    virtual void mostrarFigura(); // sobreescritura
    float getLado();
    void setLado(float);
};

//#endif /* !RECTANGULO_H */