#include <iostream>
#include <cmath>
using namespace std;
int getsum(int);
int main()  
{
  int N;
  int sum;

  do{
    cout << "Enter the number of input ( N )\n";
    cin >> N;
    if ( N != -1){
      sum = getsum(N);
      cout << "The sum is" << sum << endl;
    }
  } while(N!= -1);

}