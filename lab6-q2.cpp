/* write a program with a function that takes two int parameters, adds them together, then returns the sum */

//write a program
#include<iostream>
using namespace std;
//with a function that takes two parameters
	int sum ;
	int func1(int a ,int b ) {
//adds them together
	sum = a + b ;
//returns the sum
	return sum ;
}

/* the program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum */


//ask the user for two numbers
int main () {
	int a, b, y;
	cout << "please enter the numbers" ;
	cin >> a >> b;
//call the function with the numbers as arguments
	y = func1(a, b);
//tell the user the sum
	cout << y <<endl ;

	}
