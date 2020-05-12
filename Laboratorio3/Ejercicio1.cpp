#include <iostream>
#include <math.h>

using namespace std; 

int main() {
   
    int num1 ;
    int num2 ;
    int num3 ;
    int suma; 
    float promedio;
    cout<< "Ingresar el primer numero:";
    cin>> num1;
    cout<< "Ingresar el segundo numero: ";
    cin>> num2;
    cout<< "Ingresar el tercer numero: ";
    cin>> num3;
    suma = num1+num2+num3;
    promedio = suma/3.0;
    cout<< "El promedio total es: "<<promedio;
    return 0;}