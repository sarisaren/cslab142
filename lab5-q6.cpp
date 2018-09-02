/* Write a c++ program to check whether a year is leap year or not */

#include <iostream>
using namespace std;

int main ()
{

//declare the variables
  int a;
  cout << "please enter the value" ;
//take the input
  cin >> a;
//give the conditions
  if (a%4==0)
  {
    cout << "congrats!! Its leap year!!!" ;
  }
  else
  {
    cout << "sorry...its not leap year" ;
  }

  return 0;

}
