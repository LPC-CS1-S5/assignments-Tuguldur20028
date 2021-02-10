#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
  //getting system time and seeding random number generator
  unsigned seed = time(0);
  srand(seed);

  //creating variavles and assigning each variable a random number 1-99
  int num1, num2, num3;
  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;

  //creating variables for sum/avg and calculating the sum/avg
  int sum = num1 + num2 + num3;
  float avg =(sum)/3;
  
  //printing out numbers and their sum/avg
  cout <<"The three random numbers are\n" << num1 << endl << num2 << endl << num3 << endl;
  cout <<"The sum is " << sum << endl;
  cout <<"The average is " << setprecion(2) << fixed << avg << endl;

  return 0;
  
}
