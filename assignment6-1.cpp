#include <iostream>
using namespace std;

int inputValid(int, int);
int getListprime(int, int);

int main()
{
    int begin, end, i;
    //int flag = 0;


    do{
      cout << "Enter two positive integers: \n";
      cin >> begin >> end;
    } while( inputValid( begin, end) ) ;

    getListprime(begin, end);

  }

int inputValid(int n1, int n2)
{
  if (n1 > n2 || n1 < 0 || n2 < 0)
    return 1;
  else
    return 0; //swapped return values
  
}


int getListprime(int begin, int end) {
  int flag = 0;
  for ( int i = begin; i <= end; i++ ) {
        for (int j = 2; j <= (i/2); j++ ) {
            if (i % j == 0) {
                flag = 1;
                break; //true indicates num not prime
            }
        }
        if (flag) {
            cout << "The number " << i << " is not a prime number\n";
            }
            else  {        //false indicates prime
            cout << "The number " << i << " is a prime number\n";
            }
  }
}

