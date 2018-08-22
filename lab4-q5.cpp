/* enter two angles of a triangle and find the third angle */

#include <iostream>
using namespace std;

int main ()
{

//declare the variable
float a1;
float a2;
float a3;
//enter the the value of angles
cout << "Enter the value of a1";
cin >> a1;
cout << "Enter the value of a2";
cin >> a2;
//find the third angle
a3=180-a1-a2;
//display the output
cout << "The third angle of the triangle is " << a3 ;
return 54;
}
