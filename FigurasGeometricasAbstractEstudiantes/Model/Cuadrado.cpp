#include "Cuadrado.h"

//CONSTRUCTORES CUADRADO

Cuadrado::Cuadrado() {}

Cuadrado::Cuadrado(float lado)
{

    this->lado = lado;
}

//METODOS CUADRADO

void Cuadrado::calcularArea()
{
    // float area; // shadow variable -- modificando es la variable local
    this->area = this->lado * this->lado;
}

void Cuadrado::calcularPerimetro()
{
    //float perimetro;
    this->perimetro = (4 * this->lado);
}

void Cuadrado::mostrarFigura()
{
    cout << "El lado: " << lado << endl;
    if (this->area == 0) // si no he calculado el area
    {
        this->calcularArea();
    }
    if (this->perimetro == 0)
    {
        this->calcularPerimetro();
    }
    cout << "El area del cuadrado es: " << this->area << endl;
    cout << "El perimetro del cuadrado es : " << perimetro << endl;

    // LLamo al mostrarFigura delegado
    FiguraGeometrica::mostrarFigura();
}

float Cuadrado::getLado()
{
    return this->lado;
}


void Cuadrado::setLado(float lado)
{
    this->lado = lado;
}
