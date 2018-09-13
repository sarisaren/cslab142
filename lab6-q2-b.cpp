/* goal is same as above, but this time , the function that adds the numbers should be void, and takes a third,pass by referance parameter, then puts the sum in that */
#include<iostream>
using namespace std;

//goal is same but the function is void
void func2(int a, int b, int &c) {
c = a + b ;
//return sum ;
}
int main () {
	int a, b,total;
	cout << "please enter the numbers" ;
	cin >> a >> b ;

	func2(a,b,total);
	cout << total << endl ;

	}
