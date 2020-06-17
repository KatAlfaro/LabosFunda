#include <iostream>

using namespace std; 

/* Elaborar una funcion de tipo booleano que indique si un año es bisiesto o no*/

    bool bisiesto (int year){   // Declaramos la funcion 
        if (year % 400==0 or year % 4==0 && year % 100!=0){
            return true;

        } else {
            return false; 
        }
    }
    int main()
    {
        int year; 
        cout<< "Por favor ingrese el anio"<< endl;
        cin>> year; 

        bool valor = bisiesto (year);

        if (valor){
            cout<< "El anio es bisiesto"<< endl; 
            // Si la condicion cumple, indicamos que el año es bisiesto 
        }else{
            cout<< "El anio no es bisiesto"<< endl; 
            // Si no se cumple, indicar que el año no es bisiesto 
        

    }
    return 0;
}