#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void  swap(int &, int &);
void swapfold(int[], int);
void sumfold(int[], int);
void equalfold(int [], int[], int);
void printarray(int [], int);
void makearray(int [], int);

int main()
{
  const int SIZE = 11;
  int numbers[SIZE];
  int equal[SIZE/2]={0};
  srand(time(0));
  makearray(numbers, SIZE);
  printarray(numbers, SIZE);
  swapfold(numbers, SIZE);
  printarray(numbers, SIZE);
  sumfold(numbers, SIZE);
  printarray(numbers, SIZE/2);
  equalfold(numbers,equal, SIZE);
  printarray(equal, SIZE/2);
  
}
void makearray(int numbers[], int SIZE)
{
    for(int i =0;i<SIZE; i++)
      numbers[i] = rand() % 5;
}
void sumfold(int n[], int SIZE)
{
  for(int i=0; i<(SIZE/2); i++)
    n[i] = n[i] + n[SIZE-i-1];
}
void equalfold(int n[], int equal[], int SIZE)
{
  for(int i=0; i<(SIZE/2); i++){
    if ( n[i] == n[SIZE-i-1])
      equal[i] = 1;
  }
}
void swapfold(int array [], int SIZE)
{
  for(int i = 0; i < (SIZE / 2); i++)
    {
      swap(array[i], array[SIZE - 1 - i]);
    }
}
void swap(int &n1, int &n2)
{
  int tmp;
  tmp = n1;
  n1 = n2;
  n2 = tmp;
}
void printarray(int numbers[], int size)
{
  for (int i =0; i < size; i++)
    cout << numbers[i] << "\t";
  cout << endl;   
}