/* write a c++ program to print all odd number between 1 to 100 */

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
  while (i>=1 and i<=100 and i%2==1) {
    cout << i << " , " ;
    i=i+2;
  }

  return 0;

}
