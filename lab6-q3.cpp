/* write a program with a function that takes two int parameters,finds the maximum, then returns the maximum */

//write a program
#include<iostream>
using namespace std;
//with a function that takes two int parameters
	int maximum;
	int func1(int a,int b) {
//finds the maximum

	if (a>b){
	   return a;
	}
	else {
	   return b;
	}

//returns the maximum
	return maximum;

}

/* the program should ask the user for two numbers,then call the function with the numbers as arguments, and tell the user the maximum */

//ask the user for two numbers
int main () 
	{
		int a, b, y;
		cout << "please enter the values" ;
		cin >> a >> b ;
//call the function with the numbers as arguments
		y = func1(a, b);
//tell the user the maximum
		cout << y << endl ;

	}

