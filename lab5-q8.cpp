/* write a c++ program to input an alphabet and check whether it is vowel or consonant */

#include <iostream>
using namespace std;

int main ()
{

//declare the variables
  char c;
  int vowel;
  int VOWEL ;
//take the input
   cout << "please enter the data" ;
   cin >> c;
//evaluates to 1 (true) if c is vowel
   vowel= (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u' ) ;
//evaluates to 1 (true) if c is VOWEL 
   VOWEL= (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ) ;
//give the condition
  if (vowel || VOWEL)
   { 
     cout << "congrats!!!! Its a vowel!!!!" ;
   }
  else
   {
     cout << "Congrats!!!!! Its a consonant!!!!" ;
   }


  return 0 ;

}
