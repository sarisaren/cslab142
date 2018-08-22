/* enter P,T,R and calculate Compound Interest */

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{

//declare the variable
float P;
float T;
float R;
float I;
float n;
//enter the value of P,T,R
cout << "enter the value of P" ;
cin >> P;
cout << "enter the value of T" ;
cin >> T;
cout << "enter the value of R" ;
cin >> R;
//calculate compound interest
I=P*(pow((1+R/100),T)) ;
//display the output
cout << "the value of compound interest is " << I <<endl ;
return 76;

}
