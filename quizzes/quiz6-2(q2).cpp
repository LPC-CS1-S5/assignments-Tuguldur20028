#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void getRandnum(int &n1, int &n2, int &n3);
void printResult( int n1, int n2, int n3, int min);
int findMin(int n1, int n2, int n3, int min);

int n1, n2, n3;


void getRandnum(int &n1, int &n2, int &n3)
{
	srand(time(NULL));
	 n1 = rand() % 1000 + 1;
   n2 = rand() % 1000 + 1;
   n3 = rand() % 1000 + 1;
  
}

int findMin(int n1, int n2, int n3){
  getRandnum(n1, n2, n3);
  int min;

  min = n1;
  if (n2 < min) {
    min = n2;
  }
  if (n3 < min) {
    min = n3;
  }
  return min;
}

void printResult(int n1, int n2, int n3)
{
getRandnum(n1, n2, n3);
cout << "The random numbers are: " << n1 << n2 << n3;
min = findMin(n1, n2, n3);
cout << "The minimum is: " << min;
}

int main(){

getRandnum(n1, n2, n3);
min = findMin(n1, n2, n3);
printResult(n1, n2, n3, min);
}