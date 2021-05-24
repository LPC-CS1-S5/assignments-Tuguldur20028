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
 while(ifso >> buf) {
   	 ss << buf;
   	 while(getline(ss, field, ',')) {
   		 switch(fcnt){
   			 case 0:
   					 g.last = field;
   					 break;
   			 case 1:
   					 g.first = field;
   					 break;
   			 case 2:
   					 g.ssn = stoi(field);
   					 break;
   			 case 3:
   					 g.score.sc[0] = stoi(field);
   					 break;
   		 }
   		 fcnt = ++fcnt % 5;
         }
   	 ss.clear();
   	 ofso.write((char *)&g, sizeof(g));
   	 cout << i << "::" << sizeof(g) << " bytes writing " ;
   	 printGrades(g);
   	 i++;
    }

}
void    	 printGrades(Grade g)
{
   	 cout << setw(10) << g.first << "\t";
   	 cout << setw(10) << g.last << "\t";
   	 cout << setw(8) << g.ssn << "\t";
   	 cout << setw(10) << g.sc[N]<< "\t\t";
   
}
