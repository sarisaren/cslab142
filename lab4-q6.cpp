/*  enter base and height of a triangle and find its area */

#include <iostream>
using namespace std;

int main ()
{

//declare the variable
float base;
float height;
float area;
//enter the value of base and height
cout << "enter the value of base";
cin >> base;
cout << "enter the value of height";
cin >> height;
//find out the area of the triangle
area=base*height/2;
//display the output
cout << "the area of the triangle is " << area << endl ;
return 74;

}
