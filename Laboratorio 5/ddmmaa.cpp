#include <iostream>
using namespace std;

bool bisiesto(int anio);
int dias_meses (int mes);


/*Elaborar una funcion que indique la fecha un día despues de la ingresada por el usuario
*/
bool bisiesto(int anio)
{
  return (anio % 400 == 0 || (anio % 100 != 0 && anio % 4 == 0)); // Se toman en cuenta años bisiestos//
}


int dias_meses (int mes, int anio) // Se declara la funcion 
{
    int dias;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
      {
        dias = 30;
      }else if (mes == 2)
      { 
       
        if (bisiesto(anio))
        {
            dias = 29;
        }else
        {
            dias = 28; 
        }
      }else if (mes == 1 || mes == 3 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
      {
        dias =31;
      }else
      {
        cout << "Fecha incorrecta" << endl; // Si la condicion no se cumple, la fecha es incorrecta 
        
      }
    return dias;
}


int main()
{
  int dia,mes,anio;
  cout << endl << "ingrese la fecha en numeros" << endl;
  cout << "dia: "; cin >> dia; cout << "mes: "; cin >> mes; cout << "anio: "; cin >> anio;
  if (dia == dias_meses (mes,anio))
    {
      dia = 1;
      mes ++;
      if (mes >= 12)
        {
          mes = 1;
          anio++;
        }
        cout << endl << "La nueva fecha es: " << dia << " / " << mes << " / " << anio;
    }else if (dia < dias_meses(mes, anio)){
        dia++;
        cout << endl << "Su fecha el dia siguiente es: " << dia << "/" << mes << "/" << anio;
    }else{
      	cout << "Fecha incorrecta" << endl; // Si la condicion no se cumple, la fecha es incorrecta 
    }
}

