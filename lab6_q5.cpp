/* Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. */

//define library
#include<iostream>
using namespace std;

//write a program that includes the previous three function
	//sum function
	int sum;
	int func1(int a, int b) {
		sum = a+b;
		return sum ;
	}

	//maximum function
	int func2(int a, int b) {
		if (a>b)
		{
			return a;
		}
		else
		{
			return b;
		} 
	}
	//minimum function
	int func3(int a, int b) {
		if (a<b)
		{
			return a;
		}
		else
		{
			return b;
		}

	}

//write a main function that asks user to input 2 variables
int main(){
	int p,q;
	cout << "please enter the values" ;
	cin>>p>>q;



//ask the user what operation does he want to perform
int x,y;

cout << "press 1 for func1 (sum)"<<endl;
cout << "press 2 for func2 (maximum)"<<endl;
cout << "press 3 for func3 (minimum)" ;
cout << "what operation do you want to perform?" <<endl;
cin >> x;
//call the required function
if (x==1) {
	y=func1(p,q);
	}
else if (x==2) {
	y=func2(p,q);
	}
else {
	y=func3(p,q);
	}



//display the output
cout<<y<<endl ;
}
