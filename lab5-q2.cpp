/* write a c++ program to find maximum between three numbers */

#include <iostream>
using namespace std;

int main()
{
//declare the variable
  int a;
  int b;
  int c;
  cout << "please enter the values";
  cin >>a;
  cin >>b;
  cin >>c;
//give the condition
  if (a>b)
  {
     cout <<"a is maximum";
  }
  else if (b>c)
  {
     cout << "b is maximum";
  }
  else if (c>a)
  {
     cout << "c is maximum";
  }
  else
  {
     cout << "nothing is maximum";
  }
   return 0;

}

