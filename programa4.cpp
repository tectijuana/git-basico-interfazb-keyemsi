
#include <iostream> 
#include <math.h>
#include <string>
/*
*Problema 4
*Determinar cual cantidad es mayor:
*3^75
*o 2^100
*/
//@Author       keyemsi
// @Date        25 marzo 2022
using namespace std;

int main()
 {
float dato1=0,dato2=0;

dato1 = pow(3,75);
dato2 = pow(2,100);
cout<< " 3^75= "<<dato1<<endl;
cout<< " 2^100= "<<dato2<<endl;

        if (dato1>dato2)
        {
        cout<<"es mayor 3^75"<< endl;
        }
        else
        {
        cout <<"es mayot 2^100"<<endl;
        }


}

