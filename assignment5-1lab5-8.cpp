//Program calculates and prints values of 2 to a power specified by user

#include <iostream>
#include <cmath>
using namespace std;

int main()  
{
  int begin, end, i;

  do {
    cout << "Enter two integers that create a range for which\nyou would like to know the powers of 2. Enter a starting point number greater than zero,\nfollowed by an ending point less than 1300: ";
    cin >> begin >> end;
    cout << "Your entered range is: ( " << begin << ", " << end << " )\n";
  } while ( begin < 0 || end > 1300 );  //catches out of range entries

  i=0;
  while( begin > pow(2,i) ){
      i = i + 1;
  }
  while( end > pow(2,i)){
      cout << pow(2, i++) << endl;
  }

  // for ( i=begin; i <= end; i++) {
  //   if (begin < pow(2, i) && end >= pow(2, i))  {
  //     cout << pow(2, i) << endl;
  //   } else {cout << "Not found for power of " << i << endl;
  //   }
  // }
  
  return 0;

}