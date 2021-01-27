#include <iostream>

using namespace std;

int main(){

  int moneyEarned = 6000;
  double percent1 = 0.05;
  double percent2 = 0.07;
  double percent3 = 0.1;
  //double percent4 = 0.5;

  double intoSavings1;
  double intoSavings2;
  double intoSavings3;

  intoSavings1 = moneyEarned*percent1;
  intoSavings1 = moneyEarned*percent2;
  intoSavings3 = moneyEarned*percent3;

  cout << "If you put 5% in savings you will put: " << intoSavings1 << endl;
  cout << "If you put 7% in savings you will put: " << intoSavings2 << endl;
  cout << "If you put 10% in savings you will put: " << intoSavings3 << endl;   
  //return 0;