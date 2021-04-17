#include <iostream>
#include <iomanip>
using namespace std;

// //Function prototypes
// void swapTwoValues(int &n1, int &n2);
// void swapTwoValues (float &f1, float &f2);

// int main()
// {
//     int n1, n2;
//     float f1, f2;

//     //Get user input
//     cout << fixed << showpoint << setprecision(2);
//     cout << "Enter two integers \n";
//     cin >> n1 >> n2;
//     cout <<"Enter two floating point values \n";
//     cin >> f1 >>f2;

//     cout << "Befor Swap int "<<setw(9)<<n1<<setw(9)<< n2<<endl;
//     swapTwoValues( n1,n2);
//     cout << "After Swap int "<<setw(9)<<n1<<setw(9)<< n2<<endl;


//     cout << "Befor Swap float "<<setw(7)<<f1<<setw(7)<< f2<<endl;
//     swapTwoValues( f1,f2);
//     cout << "After Swap float"<<setw(7)<<f1<<setw(7)<< f2<<endl;

// }
// // Definition of overloaded function
// // this function uses an reference parameter int n1, n2.
// void swapTwoValues ( int &n1, int &n2)
// {
//     int temp;
//     temp = n1;
//     n1 = n2;
//     n2 = temp;
// }
// void swapTwoValues ( float &n1, float &n2)
// {
//     float temp;
//     temp = n1;
//     n1 = n2;
//     n2 = temp;
// }

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