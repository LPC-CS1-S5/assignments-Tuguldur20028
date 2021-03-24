//Program that converts Celsius to Fahrenheit
#include <iostream>
using namespace std;

int main()
{
  //creating variable for user input
  int cTemp;

  //asking for user input
  cout << "Enter the temperature by Celcius\n";
  cin >> cTemp;

  //coverting celsius into Fahrenheit
  int fTemp;
  fTemp = (2) * cTemp + 32;

  //printing result
  cout << "Celsius" << cTemp << " is " << fTemp <<"Fahrenheit\n";

  return 0;
}