#include "iostream"
#include "string"
/*
*Problema 2
*Encontrar el entero positivo mayor
*en una lista de quince enteros              
*algunos de los cuales son impares
*/
//@Author       Fabian Acosta Gutierrez 19211591
// @Date        25 marzo 2022

using namespace std;

int main()
{
int num,aux=0;
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
}
cout<< "numero mayor: "<<aux<<endl;





return 0;
}




