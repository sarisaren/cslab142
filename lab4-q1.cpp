/* enter length in cm and convert it into meter and kilometer */

#include <iostream>
using namespace std;

int main() {

//declare a variable
float lengthCM;
float lengthM;
float lengthKM;
//enter length in cm
cout << "Please enter the value" ;
cin >> lengthCM;
//convert it into meter and kilometer
lengthM=lengthCM/100;
lengthKM=lengthCM/1000;
//display the output
cout << "The length in cm is " << lengthCM;
cout << "The length in meter is " << lengthM << "m" << endl;
cout << "The length in kilometer is " << lengthKM << "km" << endl;
return 76;
}
