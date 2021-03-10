#include <iostream>
#include <string>
using namespace std;

int main()  
{
  int numStudents, numCourses, score;
  int i = 0;
  int j = 0;
  int sum = 0;
  float average;

  do {      //input validation
    cout << "Enter the number of students, followed by the number of courses to input per student: ";
    cin >> numStudents >>numCourses;
  } while (numStudents < 0 || numCourses < 0);

  //consult flowchart
    for (i=0; i<numStudents; i++)  {
      string nameStudent;
      cout << "Enter student's first name: ";
      cin >> nameStudent;
      for (j=0; j<numCourses; j++) {
        cout << "Enter score " << (j+1) << ": ";
        cin >> score;
        sum += score;
        //j++;
      }
    average = sum/numCourses;
    cout << nameStudent << ": \n";
    cout << "Sum of scores: " << sum << ", average score: " << average << endl;
    //reset sum and average for next cycle:
    sum = 0;
    average = 0.0;
    //i++
    }

  return 0;

}