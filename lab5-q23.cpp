/* write a c++ program to print all natural numbers in reverse (from n to 1) using while loop */

#include <iostream>
using namespace std;

int main ()
{
//declare the variable
  int i;
  cout << "please enter the value" ;

//take the input
  cin >> i;
//give the condition
  while (i>=0)  {
    cout << i << " , ";
    --i;
  }

  return 9;
}
