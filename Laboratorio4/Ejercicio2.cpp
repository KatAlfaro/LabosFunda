#include <iostream>
  
  using namespace std; 
  int main()
 {
      int numero; 
      cout<< "DIGITE UN NUMERO" << endl;

      cin>> numero;

      if(numero%2 ==0 ){
      cout<< "EL NUMERO ES PAR";
    }else{
      cout<< "EL NUMERO ES IMPAR";
    }
  return 0;
      
}