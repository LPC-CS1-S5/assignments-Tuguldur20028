// this program will store
//28,32,37,24, and 33
//into five different variuables
//It will calculate the sum of the variuables
//and store it in a seperate variuable named sum
//the programm will then divide the sum by 5 to get the average

#include <iostream>
using namespace std;

int main()
{
  //variables to hold variuables
  short int a, b, c, d, e, sum;
  a = 28, b = 32, c = 37, d = 24, e = 33;
  
  //calculate sum
  sum = a + b + c + d + e;

  //calculate average
  float average = sum/5.0;

  //Display sum and average
  cout << "The sum" << sum << endl;
  cout << "The average" << average << endl;

  return 0;

}