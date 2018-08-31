/* write a c++ program to print all even numbers between 1 to 100 using while loop */

#include <iostream>
using namespace std;

int main ()
{

//declare the variable
  int i;
  cout << "please enter the value ";
//take the input
  cin >> i;
//give the condition
  while (i>=1 && i<=100 && i%2==0) {
    cout << i << " , ";
    i=i++;
  }

  return 0;
}
