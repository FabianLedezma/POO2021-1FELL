#include <iostream>
#define CAP 10

using namespace std;

class Circulo{
    private:
        float radio;
        float PI;

    public:
        Circulo();
        Circulo(float radio);
        void calcularArea();
        void calcularPerimetro();
        float getRadio();
        void setRadio(float radio);
};

Circulo :: Circulo(){
    radio = 0;
    PI = 3.1416;
}

Circulo :: Circulo(float radio){
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

void Circulo :: setRadio(float radio){
    this->radio = radio;
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
        void setLargo(float largo);
        void setAncho(float ancho);
        float getLargo();
        float getAncho();
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

void Rectangulo :: setLargo(float largo){
    this -> largo = largo;
}

void Rectangulo :: setAncho(float ancho){
    this -> ancho = ancho;
}

float Rectangulo :: getLargo(){
    return this -> largo;
}

float Rectangulo :: getAncho(){
    return this -> ancho;
}

void menu(){
    cout << endl;
    cout << "Ingrese la opcion que decea realizar: \n"<< endl;
    cout << "1. Crear circulo"<<endl;
    cout << "2. Mostrar circulos "<< endl;
    cout << "3. Crear un nuevo rectangulo"<< endl;
    cout << "4. Mostrar rectangulos"<<endl;
    cout << "0. exit " << endl;
    cout << "opc = ";
}

void crearCirculo (Circulo circulos[CAP], int cantCirculos){
    int radio;
    cout<<"Ingrese el radio del nuevo circulo: ";
    cin >> radio;
    circulos[cantCirculos].setRadio(radio);
    cout << "Circulo creado"<< endl;
}

void mostrarCirculos(Circulo circulos[CAP], int cantCirculos){
    int i;
    cout << endl;
    for(i = 0; i < cantCirculos; i++){
        cout << "Circulo "<< i+1<< endl<< "radio ";
        cout << circulos[i].getRadio()<< endl;
        circulos[i].calcularArea();
        circulos[i].calcularPerimetro();
        cout << endl;
    }
}

void crearRectangulo(Rectangulo rectangulos[CAP], int cantRectangulos){
    int largo, ancho;
    cout << "Ingrese el largo del rectangulo nuevo: ";
    cin >> largo;
    cout << "Ingrese el ancho del rectangulo: ";
    cin >> ancho;
    rectangulos[cantRectangulos].setLargo(largo);
    rectangulos[cantRectangulos].setAncho(ancho);
    cout << "Rectangulo creado :)"<< endl;
}

void mostrarRectangulos(Rectangulo rectangulos[CAP], int cantRectangulos){
    int i;
    for(i = 0; i < cantRectangulos; i++){
        cout<< "Rectangulo "<< i+1 << endl;
        cout << "Largo: " << rectangulos[i].getLargo() << " Ancho: " << rectangulos[i].getAncho() << endl;
        rectangulos[i].calcularArea();
        rectangulos[i].calcularPerimetro();
        cout<<endl;
    }
}

int main(){
    Circulo circulos[CAP];
    Rectangulo rectangulos[CAP];
    int cantCirculos = 0, cantRectangulos = 0, opc;
    do{
        menu();
        cin >> opc;
        switch(opc){
            case 1:
                if(cantCirculos < CAP){
                    crearCirculo(circulos, cantCirculos);
                    cantCirculos++;
                }
                else{
                    cout << "El arregle de Circulos esta lleno :("<< endl;
                }
                break;
            case 2:
                mostrarCirculos(circulos, cantCirculos);
                break;
            case 3:
                if( cantRectangulos < CAP){
                    crearRectangulo(rectangulos, cantRectangulos);
                    cantRectangulos++;
                }
                else{
                    cout << "El arreglo de rectangulos esta lleno D:"<<endl;
                }
                break;
            case 4:
                mostrarRectangulos(rectangulos, cantRectangulos);
                break;
        }

    }while(opc != 0);
}