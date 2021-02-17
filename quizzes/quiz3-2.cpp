#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
  //getting system time and seeding random number generator
  unsigned seed = time(0);
  srand(seed);

  //creating variables and assigning each variable a random number 1-99
  int num1, num2, num3;
  num1 = rand();
  num2 = rand();
  num3 = rand();

  //creating variables for sum/avg and calculating the summation/averge
  long long int sum = 0;
  sum += num1;
  sum += num2;
  sum += num3;
  double avg = (sum)/3.0;

  //printing out numbers and their summation/averge
  cout <<"The three random numbers are\n"<<num1<<endl<<num2<<endl<<num3<<endl;
  cout <<"The sum is " << sum << endl;
  cout <<"The average is " << setprecision(5) << fixed << avg << endl;

  return 0;

}