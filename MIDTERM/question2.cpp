#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
  int i = 0; //initiations of the varuables
  int n = 0;
  string line;
  int numstudents = 0;

  ifstream ifs;
  ifs.open ("student.txt");
  if (ifs.fail()){
    cout << " Error to open\n";
    exit(0);
  }
  getline (ifs,line);
  numstudents = stoi(line);
  cout << numstudents << "n\";

  for (n = 0; n < numstudents; n++){
    getline (ifs,line);
    string nmae;
    int score1 = 0, score2 = 0, total = 0;
    double avg = 0;
    int pos = 0;
    pos line.find(" ");
    while (pos != string::npos) {
      string w = line.substr(0, pos);
      if (word == 0) {
        name = w;
      }
      if (word == 1) {
        score_1 = stoi(w);
      }
      if (word == 2) {
        score_2 = stoi(w);
      }
      line.erase(0, pos + 1);
      word++;
      pos = line.find(" ");
    }
    total = score_1 + score_2;
    avg = double(total) / 2;
    cout << name << " " << score_1 << " " << score_2 << " " << total << " " << avg << endl;
  }

}