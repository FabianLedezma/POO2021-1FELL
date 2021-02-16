#include <iostream>

using namespace std;

int main(){
    float precioNormal;
    cout<<"Ingrese el precio de tu producto: ";
    cin>> precioNormal;
    cout<<"Hola mundo";
    precioNormal = precioNormal + (precioNormal*19/100);
    cout<<"El precio de su producto mas el IVA es: "<< precioNormal;
    return 0;
}