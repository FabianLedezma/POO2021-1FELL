#include <iostream>
#define CAP 10

using namespace std;

class Circulo{
    private:
        float radio;
        float PI;

    public:
        Circulo();
        Circulo(int radio);
        void calcularArea();
        void calcularPerimetro();
        float getRadio();
};

Circulo :: Circulo(){
    radio = 0;
    PI = 3.1416;
}

Circulo :: Circulo(int radio){
    this->radio = radio;
    this->PI = 3.1416;
}

void Circulo :: calcularArea(){
    float area;
    area = PI * radio * radio;
    cout << "El area del circulo es: "<< area << endl;
}

void Circulo :: calcularPerimetro(){
    float perimetro;
    perimetro = 2 * PI * radio;
    cout << "El perimetro del circulo es: "<< perimetro<<endl;
}

float Circulo :: getRadio(){
    return this->radio;
}

class Rectangulo{
    private:
        float largo;
        float ancho;
    public:
        Rectangulo();
        Rectangulo(float largo, float ancho);
        void calcularPerimetro();
        void calcularArea();
};

Rectangulo :: Rectangulo(){
    largo = 0;
    ancho = 0;
}

Rectangulo :: Rectangulo(float largo, float ancho){
    this->largo = largo;
    this->ancho = ancho;
}

void Rectangulo :: calcularPerimetro(){
    float perimetro;
    perimetro = (2 * largo) + (2 * ancho);
    cout << "El perimetro del rectangulo es: "<< perimetro << endl;
}

void Rectangulo :: calcularArea(){
    float area;
    area = largo * ancho;
    cout << "El area del rectangulo es: "<< area << endl;
}

int main(){
    Circulo circulos[CAP];
    Rectangulo rectangulos[CAP];
    int cantCirculos = 0, cantRectangulos = 0;
    
}