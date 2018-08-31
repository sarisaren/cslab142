/* write a c++ program to check whether a number is divisible by 5 and 11 or not */

#include <iostream>
using namespace std;

int main ()
{

//declare the variable
  int x;
  cout << "Please enter the value" ;
//take the input
  cin >> x;
//give the condition
  if ((x%5==0) || (x%11==0))
  {
    cout << "the number is divisible";
  }
  else
  {
    cout << "the number is not divisible";
   }

  return 9;

}
