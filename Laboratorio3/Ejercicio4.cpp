#include <iostream>
#include <math.h>

using namespace std;

int main() {
    string nombre;
    int c;
    float p;
    float $;
    cout<<"Producto: ";
    getline(cin, nombre);
    cout<<"Precio del producto: $";
    cin>>p;
    cout<<"Cantidad comprada: ";
    cin>>c;
    $ = p * c;
    cout<< "\nEl total es: $"<<$;
    return 0;}

    
