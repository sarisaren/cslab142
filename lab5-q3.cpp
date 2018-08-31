/* write a c++ program to check whether a number is negative, positive or zero */

#include <iostream>
using namespace std;

int main()
{

//declare the variable
  int x;
  cout << "please enter the value";
//take the input
  cin >> x;
//give the condition
  if (x > 0)
  {
    cout << "x is positive";
  }
  else if (x < 0)
  {
    cout << "x is negative";
  }
  else
  {
    cout << "x is 0";
  }

  return 0;

}
