#include <iostream>
#include <string>

using namespace std; 

int main()
{
string palabra;
cout<< "INGRESE UNA PALABRA"<< endl;
cin>> palabra;
int numWord = palabra.length();
cout<< numWord << endl; 
if (numWord>10){
    
cout<< "LA PALABRA ES MAYOR A 10 CARACTERES"<< endl; 
}else{
    cout<< "LA PALABRA ES MENOR A 10 CARACTERES"<< endl;
}
if(numWord%2 ==0 ){
    cout<< "SU LONGITUD ES PAR"<< endl;
}else{
    cout<< "SU LONGITUD ES IMPAR"<< endl;
}
return 0;

}