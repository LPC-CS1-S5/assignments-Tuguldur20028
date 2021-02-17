//program that calculates the average rainfall for three months
//ask the userto enter the name of each month and the amount of rain (inch) that fell each month
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //creating variables for month names and rain amounts
  string month1, month2, month3;
  float rain1, rain2, rain3;
  float average;

  //asking user month names and rain amounts
  cout <<"Enter the first month and rain amount\n";
  cin >> month1 >> rain1;
  cout <<"Enter the second month and rain amount\n";
  cin >> month2 >> rain2;
  cout <<"Enter the third month and rain amount\n";
  cin >> month3 >> rain3;

  
  //calculating average rain of three months
  average = (rain1 + rain2 + rain3)/3;

  //printing out average of the three months
  cout <<"The average rain fall for " << month1 << ", " << month2 << ", "<< month3 << " is " << setprecision << ;

  return 0;