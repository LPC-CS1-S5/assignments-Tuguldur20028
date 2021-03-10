#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()  
{
  ifstream ifs;
  double sum = 0.0;
  double sumTotal = 0.0;
  int total;
  double score1, score2, avg, grandAvg;
  string name;

  ifs.open("studentdata.txt");   //open file

  if (ifs.fail()) {     //verify the file is opened
    cout << "Error upon open\n";
    exit(0);
  }

  ifs >> total;   //get total from first line

  for (int i=0; i < total; i++) {  //iterate students
    ifs >> name >> score1 >> score2;
    sum = (score1 + score2);  //for individual
    avg = sum / 2.0;
    cout << "Student: " << name << endl << "scores: " << score1 << ", " << score2 << endl << "student average: " << avg << endl << endl;
    sumTotal += (score1 + score2); //accumulator
  }

  cout << "Class score summation: " << sumTotal << endl;
  grandAvg = sumTotal / (total * 2);
  cout << "Average of class: " << grandAvg << endl;
  cout << "Process complete." << endl;

  //close file
  ifs.close();
  return 0;
}
