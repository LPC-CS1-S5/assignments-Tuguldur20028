#include<iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;


  int num1, int num2;
  int isSame;
  int Division;
  srand(time(0));
  int isSame(){
    
  }

  //check if num1, num2 are the same
  // ifs.open("question5.txt");
  ifstream ifs;
  ifs.open ("question5.txt");
  if (ifs.fail()){
    cout << " Error to open\n";
    exit(0);
  }
  getInput(num1,num2);



int main()
{
int getInput(void) 
  cout << "Enter two Numbers :: ";
  cin >> num1 >> num2;
  cout << num1 << "/" << num2 << " = "<< num1/num2 << endl;
}
return 0;