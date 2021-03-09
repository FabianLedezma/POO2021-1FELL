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

class Triangulo{
    private:
        float base;
        float altura;
        float lado1;
        float lado2;
    public:
        Triangulo();
        Triangulo(float base, float altura, float lado1, float lado2);
        void calcularArea();
        void calcularPerimetro(); 
        void setBase(float base);
        void setAltura(float altura);
        void setLado1(float lado1);
        void setLado2(float lado2);
        float getBase();
        float getAltura();
        float getLado1();
        float getLado2();
};

Triangulo :: Triangulo(){
    this->base = 0;
    this->altura = 0;
    this->lado1 = 0;
    this->lado2 = 0;
}

Triangulo :: Triangulo(float base, float altura, float lado1, float lado2){
    this->base = base;
    this->altura = altura;
    this->lado1 = lado1;
    this->lado2 = lado2;
}

void Triangulo :: calcularArea(){
    float area;
    area = base*altura;
    cout << "el triangulo tiene un area  de: "<< area << endl;
}

void Triangulo :: calcularPerimetro(){
    float perimetro;
    perimetro = base + lado1 + lado2;
    cout << "El perimetro del triangulo es: "<< perimetro << endl;

}

void Triangulo :: setBase(float base){
    this->base = base;
}

void Triangulo :: setAltura(float altura){
    this->altura = altura;
}

void Triangulo :: setLado1(float lado1){
    this->lado1 = lado1;
}

void Triangulo :: setLado2(float lado2){
    this->lado2 = lado2;
}

float Triangulo :: getBase(){
    return this->base;
}

float Triangulo :: getAltura(){
    return this->altura;
}

float Triangulo :: getLado1(){
    return this->lado1;
}

float Triangulo :: getLado2(){
    return this->lado2;
}

void menu(){
    cout << endl;
    cout << "Ingrese la opcion que decea realizar: \n"<< endl;
    cout << "1. Crear circulo"<<endl;
    cout << "2. Mostrar circulos "<< endl;
    cout << "3. Crear un nuevo rectangulo"<< endl;
    cout << "4. Mostrar rectangulos"<<endl;
    cout << "5. Crear triangulo" << endl;
    cout << "6. Mostrar triangulos:"<< endl;
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

void crearTriangulo( Triangulo triangulos[CAP], int cantTriangulos ){
    float base, altura, lado1, lado2;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    cout << "Ingrese el lado 1 del triangulo: ";
    cin >> lado1;
    cout << "Ingrese el lado 2 del triangulo: ";
    cin >> lado2;
    triangulos[cantTriangulos].setBase(base);
    triangulos[cantTriangulos].setAltura(altura);
    triangulos[cantTriangulos].setLado1(lado1);
    triangulos[cantTriangulos].setLado2(lado2);
}

void mostrarTriangulos( Triangulo triangulos[CAP], int cantTriangulos ){
    int i;
    cout << endl;
    for(i = 0; i < cantTriangulos; i++){
        cout<< "Triangulo "<< i+1 << endl;
        cout << "base: "<< triangulos[i].getBase() << " altura: "<< triangulos[i].getAltura()<<endl;
        cout << "Lado 1: " << triangulos[i].getLado1() << " Lado 2: " << triangulos[i].getLado2() << endl;
        triangulos[i].calcularArea();
        triangulos[i].calcularPerimetro();
        cout<<endl;
    }
}

int main(){
    Circulo circulos[CAP];
    Rectangulo rectangulos[CAP];
    Triangulo triangulos[CAP];
    int cantCirculos = 0, cantRectangulos = 0, cantTriangulos = 0, opc;
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
            case 5:
                if(cantTriangulos < CAP){
                    crearTriangulo(triangulos, cantTriangulos);
                    cantTriangulos++;
                }
                else{
                    cout << "El arreglo de triangulos esta lleno D-:"<<endl;
                }
                break;
            case 6:
                mostrarTriangulos(triangulos, cantTriangulos);
                break;
        }

    }while(opc != 0);
}