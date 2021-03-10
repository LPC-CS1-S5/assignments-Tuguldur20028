#include <iostream>
using namespace std;

int main()  
{
  //triangle 1
  int i, j;

  for (i = 0; i < 3; i++ ) {
    for (j=0; j <= i; j++ ) {
      cout << "( " << i << ", " << j << " )" << "\t";
      cout << endl;
    }
  }
  
  cout << "__________________________\n";
    //blue triangle 2
    for (i = 0; i < 3; i++ ) {
      for (j=0; j < (i+1); j++ ) {
      cout << "( " << i << ", " << j << " )" << "\t";
      cout << endl;
    }
  }
  
  cout << "__________________________\n";
    //blue triangle 3
    for (i = 0; i < 3; i++ ) {
      for (j=0; j >= (i+1); j++) {
      cout << "( " << i << ", " << j << " )" << "\t";
      cout << endl;
    }
  }

}