#include <iostream>

using namespace std;

float calcualrIVA(float precioNormal){
    precioNormal = precioNormal + (precioNormal*19/100);
    return precioNormal;
}

int main(){
    float precioNormal;
    cout<<"Ingrese el precio de tu producto: ";
    cin>> precioNormal;
    precioNormal = calcualrIVA(precioNormal);
    cout<<"El precio de su producto mas el IVA es: "<< precioNormal;
    return 0;
}