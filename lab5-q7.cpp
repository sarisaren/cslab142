/* write a c++ program to check whether a character is alphabate or not */

#include <iostream>
using namespace std;

int main ()

{ 
//declare the variable
 char ch;
 cout << "please enter the data" ;
//take the input 
 cin >> ch;
//give the conditions
 if ((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
 {
     cout << "Congrats!!!! Its an alphabate!!!!" ;
 }
  
 else
  { 
     cout << "Sorry....Its not an alphabate" ;
  }

 return 0;

}
