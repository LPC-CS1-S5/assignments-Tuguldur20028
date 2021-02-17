#include <iostream>
using namespace std;
int main()
{
    int classA, classB, classC;
    int price_classA = 15;
    int price_classB = 12;
    int price_classC = 9;
    int TotalclassA, TotalclassB, TotalclassC;
    float total;

    cout << "How many class A tickets were sold?\";
    cin >> price_classA;
    cout << "How many class B tickets were sold?\";
    cin >> price_classB;
    cout << "How many class C tickets were sold?\";
    cin >> price_classC;


    
  TotalclassA = price_classA * classA;
  TotalclassB = price_classB * classB;
  TotalclassC = price_classC * classC;
  total = TotalclassA + TotalclassB + TotalclassC;
  
  cout << "Total income earned was: $" << setprecision(2) << fixed << total << endl;

  cout << "Total cost of Class A: $" << setprecision(2) << fixed << TotalclassA << endl;
  
  cout << "Total cost of Class B: $" << setprecision(2) << fixed << TotalclassB << endl;
  
  cout << "Total cost of Class C: $" << setprecision(2) << fixed << TotalclassC << endl;
  
  return 0;
}