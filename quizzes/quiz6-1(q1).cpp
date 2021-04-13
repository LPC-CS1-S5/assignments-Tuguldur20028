#include	<iostream>
#include	<iomanip>
using namespace	std;

void	swapTwoValues(int &n1, int &n2);
void swapTwoValues(float &f1, float &f2);
 int n1, n2;
 float f1, f2;
 
 int main() 
 {
  char intf;
  cout << "Please enter the data type to swap, i for integer and f for float.";
  cin >> intf;
  cout << "Please enter two values.\n";
  if (intf == 'i'){
  swapTwoValues(n1, n2);
  return n1;
  return n2;
  }
  else if (intf == 'f'){
   swapTwoValues(f1, f2);
  else  (intf != )
  }
}
void swapTwoValues(int &n1, int &n2){
  cin >> n1 >> n2;
  cout << "Input  Values : " << setw(5) << n1 << setw(5) << n2 << endl;
   swap(n1, n2);
  cout << "Swapped Values : " << setw(5) << n1 << setw(5) << n2 << endl;

}
void swapTwoValues(float &f1, float &f2){
  cin >> f1 >> f2;
  cout << "Input  Values : " << setw(5) << f1 << setw(5)<< f2 << endl;
   swap(f1, f2);
  cout << "Swapped Values : " << setw(5) << f1 << setw(5) << f2 << endl;
}