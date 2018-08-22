/* calculate the area of an equilateral triangle */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

//declare the variable
float a;
float area;
//enter the value of the sides
cout << " Please enter the value of the side ";
cin >> a ;
//find the area of the triangle
area=pow(3,0.5)*pow(a,2) ;
//display the output
cout << "The area of the triangle is" << area ;
return 68;

}
