//lab 5-7: program that calculates 2 to the power of namespace
//where n is user input and can be +/-, and <cmath> not allowed

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()  
{
  int num, n;
  double nthPower = 1;
  double invertnthPower;

  cout << "Enter a numerical value n as exponent:\n = ";
  cin >> n;

  if ( n > 0) {
    num = n;
} else {  //case n < 0 or negative exponent
  num = n * -1;   //make what will be the iterator control positive
}

for ( int i = 0; i < num; i++ ) {
  nthPower *= 2;    //variable nthPower stores value multiplied by 2
}

if ( n < 0) {   //account for negative exponents
  invertnthPower = 1.0/nthPower;  //invert rational like in math class
  cout << setprecision(10) << fixed << invertnthPower << endl;
} else {    //exponential process finished, print
  cout << setprecision(2) << fixed << nthPower << endl;
}

return 0;
}