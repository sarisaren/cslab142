/* goal is the same , but this time, the function that finds the minimum number sould be void, and taks a third, pass by referance parameter, then puts the minimum in that */
#include<iostream>
using namespace std;

//goal is the same but the function is void
void func2(int a, int b, int &c) {
					if (a<b) c=a;
					if (b<a) c=b;
				  }

int main () 
{ 
	int a, b, x ;
	cout << "please enter the value" ;
	cin >> a >> b ;

	func2 (a, b, x) ;
	cout << x << endl ;
}
