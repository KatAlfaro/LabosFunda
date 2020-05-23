#include <iostream>

using namespace std;
int main()
{
    int numero1, numero2;
    cout<< "INGRESAR DOS NUMEROS"<< endl; 
    cin>> numero1;
    cin>> numero2;
    if (numero1 % numero2 == 0) {
        cout<< "SI ES DIVISIBLE"<< endl; 
    }else{
        cout<< "NO ES DIVISIBLE"<< endl;
    }
    return 0;

}