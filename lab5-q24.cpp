/* write a c++ program to print all alphabates from a to z using while loop */

#include <iostream>
using namespace std;

int main ()
{

//declare the variables
  int i;
//take the input
  cin >> i ;
//give the condition
  while (i>=97 && i<=122) {
    cout << char (i) << " , ";
    i++;
  }

  return 0;
}

