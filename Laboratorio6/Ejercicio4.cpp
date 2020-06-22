#include <iostream>
#include <stdio.h>

using namespace std;

void leer (int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl << "Ingrrese el numero " << i << ":";
        cin >> arr[i];
    }
    
}

void suma_arreglos (int arr1[], int arr2[], int n, int resultado[])
{
    for (int i = 0; i < n; i++)
    {
        resultado[i] = arr1[i] + arr2[i];
    }
}

void resultado (int resultante[], int n)
{
    cout << endl << "El tercer arreglo es: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << resultante[i] << endl; 
    }
}

int main ()
{
    int n = 5;
    int arr1[n];
    int arr2[n];
    int resultante[n];
    leer(arr1, n);
    leer (arr2, n);
    suma_arreglos (arr1, arr2, n, resultante);
    resultado (resultante , n);
}