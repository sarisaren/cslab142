/* enter temperature into Celsius and convert it into Fahrenheit */

#include <iostream>
using namespace std;

int main()
{

//declare the variable
float celsius;
float fahrenheit;
//enter the value in Celsius
cout << "Please enter the value ";
cin >> celsius;
//convert it into Fahrenheit
fahrenheit=9*celsius/5+32 ;
//display the output
cout << " The temperature in Celsius is " << celsius ;
cout << " The temperature in Fahrenheit is " << fahrenheit << endl;
return 76;
}
