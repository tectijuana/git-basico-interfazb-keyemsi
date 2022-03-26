#include <iostream> 
#include <math.h>

/*
*Problema 1
*Introducir un conjunto 25 numeros.
*Determinar la cantidad de numeros positivos y
*negativos del conjunto
*/
//@Author       keyemsi
// @Date        25 marzo 2022
using namespace std;

int main() {

float dato,fin;
int Neg=0,Pos=0;
for(int i=0;i<25;i++)
        {
        cout << "Ingresa un numero positvo o negativo" <<endl;
        cin >> dato;
        if (dato>0)
         {
        Pos++;
         }
        else
         {
        Neg++;
         }

        }
  cout << "Numero de positivos "<< Pos <<endl;
  cout << "Numero de negativos "<< Neg <<endl;

  return 0;
}
