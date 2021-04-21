#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shiftleftN(int n[], int SIZE, int N);
void shiftleftone(int n[], int SIZE);
void makearray(int [], int);
void printarray(int numbers[], int size);
int main()
{
  const int SIZE=5;
  int numbers[SIZE];
  int i;
  int N;

  cout << " Enter the value N: ";
  cin >> N;
  srand(time(0));
  makearray(numbers, SIZE);
  printarray(numbers, SIZE);
  shiftleftN(numbers, SIZE, N);
  printarray(numbers, SIZE);
  
}
void makearray(int numbers[], int SIZE)
{
    for(int i =0;i<SIZE; i++)
      numbers[i] = rand() % 50;
}
void shiftleftN(int n[], int SIZE, int N)
{
  for (int cnt=0; cnt <N; cnt++ )
    shiftleftone(n, SIZE);
}
void shiftleftone(int n[], int SIZE)
{
    int tmp, i;
    tmp = n[0];
    for (i = 0; i < (SIZE-1); i++)
      n[i] = n[(i + 1)];
    n[SIZE-1] = tmp; 

}
void printarray(int numbers[], int size)
{
  for (int i =0; i < size; i++)
    cout << numbers[i] << "\t";
  cout << endl;   
}