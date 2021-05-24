#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;


const unsigned short N=5;

struct Scores{     
      double sc[N];     
      string grade;
};

struct Grade{    
      string first;    
      string last;   
      string ssn;   
      Scores score;
       };
 Grade g;
 void printGrades(Grade);
int main(){


    ifstream    ifso;
    ofstream    ofso;
   
    string    	 buf, field;
    int   		 i=0, fcnt=0;
    stringstream ss;

    ifso.open("grades.txt", fstream::in);
    ofso.open("grades.bin", fstream::out);
    if (!ifso || !ofso ){
   	 cout << "Open Error\n";
   	 exit(0);
}