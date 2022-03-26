#include <iostream> 
#include <math.h>
#include <string>
/*
*Problema 7
*calcular e imprimir la suma de
*los enterios del 1 al 20
*
*/
//@Author       Fabian Acosta Gutierrez 19211591
// @Date        25 marzo 2022
using namespace std;

unsigned int sum(unsigned int n)
{
    if (n == 0)
        return 1;
    return n + sum(n - 1);
}

// llamada del
int main()
{
        string dato;
    int num = 20;
        cout<<"0";
        for(int i=1;i<21;i++)
        {
        cout<<" + "<<i  ;
        }
        cout <<" "<<endl;
    cout << "suma de 1 a  "
         << num << " es " << sum(num) << endl;
    return 0;
}



