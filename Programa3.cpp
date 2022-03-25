#include "iostream"
#include "string"
/*
*Problema 3
*Determinar el segundo entero
*positivo mayor en una lista de quince enteros
*positivos suministrados como datos
*/
//@Author       Fabian Acosta Gutierrez 19211591
// @Date        25 marzo 2022

using namespace std;

int main()
{
int num,aux=0, aux2=0;
int lista[15];

        for(int i=0;i<15;i++)
        {
                cout<< "ingresa un numero entero positivo"<< endl;
                cin>> num;
                lista[i]=num;
        if (lista[i]>aux)
        {
        aux=num;
        }

        if (lista[i]<aux&&lista[i]>aux2 )
        {
        aux2=num;
        }
}
cout<< "segundo numero mayor: "<<aux2<<endl;
return 0;
}