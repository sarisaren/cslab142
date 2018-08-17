// Include appropriate libraries
#include <iostream>
using namespace std;


// Write the main function
int main ()
{

// Declare 5 variables having different data types
int num1; char char1; float float1; double double1; bool bool1;
// Intialise the 5 variables
num1=5; char1='8'; float1=2; double1=7; bool1=0;
// Display the values of the variables and their sizes

cout << "A sample integer is " << num1 << " and the size of interger is " << sizeof(num1) << endl;
cout << "A sample character is " << char1 << " and the size of character is " << sizeof(char1) << endl;
cout << "A sample float is " << float1 << " and the size of float is " << sizeof(float1) << endl;
cout << "A sample big decimal is " << double1 << " and the size of big decimal is " << sizeof(double1) << endl;
cout << " A sample boolean is " << bool1 << " and the size of boolean is " << sizeof(bool1) << endl;

// End your program
return 0;
}
