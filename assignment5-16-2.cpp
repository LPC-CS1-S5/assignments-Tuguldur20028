#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()  {

  int total, N, score;
  string name;
  ofstream ofs;

  ofs.open("studentdata.txt");

  //need to nest loop according to # of students to enter
  //prompt user for amount of students
  cout << "Enter the number of student's for which you need to record grades: ";
  cin >> total;
  ofs << total << endl;  //write expected lines to file
  for ( int t=0; t < total; t++)  {
      cout << "Enter a student's first name: ";
      cin >> name;
      ofs << name << " ";
      cout << "Enter the amount of course scores to input for " << name << ": ";
      cin >> N;   //assumed to be two for this assignment*
      for (int i=0; i < N; i++) {   //writing loop
        cout << "Enter a score for " << name << ": ";
        cin >> score;
        ofs << score << " ";
        if (i == N-1)     //condition to make new line
          ofs << endl;
      }
  }

cout << "Student scores have been recorded successfully.\n";
return 0;

}