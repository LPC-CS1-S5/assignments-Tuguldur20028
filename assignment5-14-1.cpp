#include <iostream>
#include <fstream>
using namespace std;

int main()  
{
  ifstream ifs;
  int i = 0;
  int num1;
  int sum = 0;

  ifs.open("wrdata.txt");   //open wrdata.txt

  //verify the file is opened
  if (ifs.fail()) {
    cout << "Error upon open\n";
    exit(0);
  }

  while ( ifs >> num1 )  {  //while there is a num to read
    sum += num1;
    cout << num1 << endl;
    i++;    //keep count for calculating avg
  }

  float avg = sum / i;
  cout << "Average: " << avg << endl;

  //close file
  ifs.close();
  return 0;
}


