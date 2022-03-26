#include <iostream> 
#include <math.h>
#include <string>
/*
*Problema 10
*
*encontrar la suma de los enteros
*en pares del 2 al 2000
*/
//@Author       keyemsi
// @Date        25 marzo 2022
using namespace std;

int main()
{
int num=0;
        for(int i=2;i<2002;i+2)
        {
        num=i+num;
        cout<<num<<" ;  "<<i <<endl;
        i=i+2;
        }
cout<<"resultado de la suma de 2 a 2000 en pares = "<<num<<endl;
    return 0;
}
