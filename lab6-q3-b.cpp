/* goal is the same , but this time, the function that finds the maximum number sould be void, and taks a third, pass by referance parameter, then puts the maximum in that */
#include<iostream>
using namespace std;

//goal is same as lab6-q3.cpp but the function is void
void func2(int a, int b, int &c) {
		if (a>b) c=a ;
		if (b>a) c=b ;  
//return maximum
		}
int main ()
{
	int a, b, y  ;
	cout << "please enter the values" ;
	cin >> a >> b ;

	func2(a, b, y) ;
	cout << y << endl ;
}
