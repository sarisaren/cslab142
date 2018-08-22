/* enter marks of five subjects and calculate total,avarage and percentage */

#include <iostream>
using namespace std;
int main ()
{

//declare the variables
float p;
float q;
float r;
float s;
float t;
float total;
float average;
float percentage;
//enter the values
cout << "Please enter the value of p out of 45";
cin >> p;
cout << "Please enter the value of q out of 45";
cin >> q;
cout << "Please enter the value of r out of 45";
cin >> r;
cout << "Please enter the value of s out of 45";
cin >> s;
cout << "Please enter the value of t out of 45";
cin >> t;
//calculate total,average and percentage
total=p+q+r+s+t;
average=total/5;
percentage=total/(45*5)*100;
//display the output
cout << "the total value is" << total <<endl;
cout << "the average value is" << average << endl;
cout << "and the percentage is" << percentage << endl;
return 76;

}
