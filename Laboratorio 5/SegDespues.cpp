#include <iostream>

using namespace std;

int main(){

       int h,m,s; // Se declaran variables 
       
       cout<< endl; 
    cout<< "FORMATO 24 HORAS "<< endl << endl; 
    cout<<"Por favor ingresa la hora"<<endl;
    cin>>h;
    cout<<"Por favor ingresa los minutos"<<endl;
    cin>>m;
    cout<<"Por favor ingresa los segundos"<<endl;
    cin>>s;

    if(h < 24 && m < 60 && s < 60 ){         
          if(s < 59 && s >= 0){
          cout<< "La nueva hora es: "<<h<<"h "<<m<<"m "<<(s++)<<"s";
          }else{
          if(s==59){
                  if(m==59){
                      if(h==23){
                          cout<< "La nueva hora es: " << "00h 00m 00s";
                      }else{
                          cout<< "La nueva hora es: "<< (h++)<<"h 00m 00s";
                      }
                  }else{
                      cout<< "La nueva hora es: " <<h<<"h "<<(m++)<<"m 00s";
                  }
              }
          }
      }else{
          cout<< "Hora no valida, intente de nuevo"; 
          /* Si la funcion no se cumple, indicar al usuario que ha cometido un error
          */
      }

      return 0;
}