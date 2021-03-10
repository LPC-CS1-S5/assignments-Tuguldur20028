#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
  srand(time(0));
  
  // Use the for loop to generate random numbers

  int num = rand () % 100;
  int num1 = rand () % 100;
  int num2 = rand () % 100;
  int num3 = rand () % 100;
  int num4 = rand () % 100;
  int num5 = rand () % 100;

	// for (....) {
	//     num = rand() % 100;
	//     Here, you need some code to find min value.
	// }
   cout << "RAND_MIN value is " << RAND_MIN << endl;
  cout << num1 <<", " num2 <<", " num3 <<", " num4 <<", " num5 <<", ";
  if(num1 <= num2 & num1 <= num3 & num1 <= num4 & num1 <= num5 );
  cout<<"The Smallest random number is: "<<smallest;
}
  return 0;