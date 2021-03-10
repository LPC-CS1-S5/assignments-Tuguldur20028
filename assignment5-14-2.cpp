#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()  
{
  int N;
  int rdnum;
  ofstream ofs;
  unsigned seed = time(0);    //seed randomization
  srand(seed);

  ofs.open("wrdata.txt");

  cout << "Enter the number of inputs: ";
  cin >> N;

  for (int i=0 ; i < N ; i++ )  {
    //generate random number ( 1 - 99)
    rdnum = rand() % 100;
    //write the number to files
    ofs << rdnum << endl;
  }

cout << N << " random numbers have been recorded.\n";
return 0;

}