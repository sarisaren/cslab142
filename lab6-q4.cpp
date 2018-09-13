/* write a program with a function that takes two int parameters,finds the minimum, then returns the minimum */

//write a program
#include<iostream>
using namespace std ;

//with a function that takes two int parameters
	int minimum;
	int func1(int a, int b) {
//finds the minimum
		if (a<b)
		{
			return a;
		}
		else
		{
			return b;
		}
//returns the minimum
	return minimum;

}

/* the program should ask the user for two numbers, them call the function with the numbers as arguments, and tell the user the minimum */

//ask the user for two numbers
int main () {
	int a, b, y;
	cout << "please enter the values" ;
	cin >> a >> b;
//call the function with the numbers as arguments
	y = func1(a,b);
//tell the user the minimum
	cout << y << endl ;

	}
