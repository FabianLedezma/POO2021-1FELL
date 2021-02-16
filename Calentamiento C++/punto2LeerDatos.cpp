#include <iostream>

using namespace std;

void pedirDatos(){
    int edad;
    char sexo[10];
    float altura;
    cout << "Ingrese su edad:";
    cin >> edad;
    cout << "Ingrese su sexo (hombre/mujer) no utilice espacios :";
    cin >> sexo;
    cout <<"Ingresa tu altura en metros: ";
    cin >> altura;
    cout << "Su edad es de "<< edad << " años.\n";
    cout << "Su sexo "<< sexo<< "\n";
    cout << "su altura es " << altura << " metros.";
}

int main(){
    cout<<"Hola te vamos a pedir un par de datos \n";
    pedirDatos();
    return 0;
}