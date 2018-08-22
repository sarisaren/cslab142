/*  convert days into years ,weeks and days */

#include <iostream>
using namespace std;

int main ()
{

//declare the variable
int days;
int years;
int weeks;
int day;
//enter the value in days
cout << "Please enter the value ";
cin >> days ;
//convert it into weeks and days
weeks=days/7;
years=days/365;
day=days%7;
//display the output
cout << "The number of days " << days << endl;
cout << "The number of weeks " << weeks << "and number of days " << day << endl;
cout << "and the number of years " << years << endl;

return 65;
}
