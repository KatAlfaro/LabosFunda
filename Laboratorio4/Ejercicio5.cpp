#include <iostream>
#include <string>

using namespace std; 

int main()
{

    string palabra; 
    cout<< "INGRESE UNA PALABRA"<< endl; 
    cin>> palabra; 
    cout<< "LA PRIMERA LETRA ES: " << palabra[0]<<endl;
    cout<< "LA ULTIMA LETRA ES: "<<palabra[palabra.length()-1]<< endl; 
    if ( palabra[0] == palabra[palabra.length()-1]){
        cout<< "LA PALABRA SI EMPIEZA Y SI FINALIZA CON LA MISMA LETRA";

    }else{
        cout<< "LA PALABRA NO EMPIEZA Y NO FINALIZA CON LA MISMA LETRA ";
    }
    return 0; 

}
