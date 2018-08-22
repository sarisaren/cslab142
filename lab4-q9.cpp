/* enter P,T,R and calculate Simple Interest */

#include <iostream>
using namespace std;

int main ()
{

//declare the variable
float P;
float T;
float R;
float I;
//enter the value of P,T,R
cout << "enter the value of P" ;
cin >> P ;
cout << "enter the value of T" ;
cin >> T;
cout << "enter value of R" ;
cin >> R;
//calculate simple interest
I=P*T*R/100 ;
//display the output
cout << " The value of simple interest is " << I <<endl;

return 86;

}
