/* enter the temperature into Fahrenheit and convert it into Celsius */

#include <iostream>
using namespace std;

int main ()
{

//declare the variable
float fahrenheit;
float celsius;
//enter the value in fahrenheit
cout << "Please enter the value in fahrenheit ";
cin >> fahrenheit;
//convert it into celsius
celsius=5*(fahrenheit-32)/9 ;
//display the output
cout << "The temperature in celsius is " << celsius ;
return 76;
}
