#include <string>
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
  int found;
  int start; 
 int cnt =0;
  string delimiter;
  string s1;

  ifstream  ifs;
  ifs.open("Python.txt");
  if ( ifs.fail()) {
    cout << "Error to Open\n";
    exit(0);
  }
  getline (ifs,s1);

   start = 0 ;
	while ((found = s1.find("th", start)) != string::npos) {
		delimiter = s1.substr(start, found-start);
		
		start = found + 1;
		cnt += 1;
    
	}
   cout << " Count Equals " << cnt << endl;
}