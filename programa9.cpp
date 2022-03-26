#include <iostream> 
#include <math.h>
#include <string>
/*
*Problema 9
*
*encontrar la suma de los enteros
*del 1 al 1000
*/
//@Author       keyemsi
// @Date        25 marzo 2022
using namespace std;

int main()
{
int num=0;
        for(int i=1;i<1001;i++)
        {
        num=i+num;
        }
cout<<"resultado de la suma de 1 a 1000 = "<<num<<endl;
    return 0;
}
