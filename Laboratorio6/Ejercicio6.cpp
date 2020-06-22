#include <iostream>

using namespace std; 

int main(){
    
    int tamanio, n , i, contador;
    contador = 0;

    cout<< endl;
    cout<< "Ingrese el tama\244o del arreglo: ";
    cin>> tamanio;

    int arr1 [tamanio];
    for( i= 0; i<tamanio; i++){
        cout<< endl;
        cout<< "Ingrese el numero: ";
        cin>> arr1[i];
    }
    cout<< endl; 
    cout<< "Ingrese el numero que que desea verificar cuantas veces se repite: ";
    cin>> n;

    for( i=0; i< tamanio; i++){
        if (n== arr1[i]){
            contador++;
        }
    }
    cout<< "El numero "<< n << " se repite " << contador << " veces ";
    return 0;


}