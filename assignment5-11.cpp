#include <iostream>
using namespace std;
int main() 
{
    int begin, end, i;
    int flag = 0;

    do{   //input validation
     cout << "Enter a range in which to find prime numbers.\nYour two entries should be between 1 and 100: ";
     cin >> begin >> end;
    } while ( begin < 0 || end > 100);

      //nest to iterate the following beginning to end
      for ( i = begin; i <= end; i++ ) {//iterates range
        for (int j = 2; j <= i/2; j++ ) {
            if (i % j == 0) {
                flag = 1;   //true, number not prime
                break;      // go to outside of loop
            } else {        //modulo != 0
              break;
            }
        }

        if (flag)   //flag evaluates true
            cout << "The number " << i << " is not a prime number\n";
        else        //flag evaluates false
            cout << "The number " << i << " is a prime number\n";
      }
}