#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//function prototype
double nthpowerp(int);
double nthpowern(int);
void printout(double);

int main()
{
  int n;
  double result;
  cout << "Enter your input: " << endl;
    cin >> n; //Input value for n in 2^n
  if(n>0) //Checks for input validation
     result = nthpowerp(n); 
  else if (n < 0)
     result = nthpowern(n);
  else
  {
    result = 1;
 cout << "The result is: " << setw(10) << fixed << setprecision(5) << result << endl;
  }

 printout(result);
    
}

double nthpowerp(int n1) 
{
  double res;
  
  res *= 2;
  res = pow(2,n1); //Result is 2 to the power of n
  return res;
}
double nthpowern(int n2) 
{
  double res, n;
  
  n= n2*-1;

  res = 1/pow(2,n); //Result is 1 over 2 to the power of n
  return res;
}

void printout(double result)
{
  
   cout << "The result is: " << setw(10) << fixed << setprecision(5) << result << endl; //Prints result
}


