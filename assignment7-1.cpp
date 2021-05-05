#include <iostream>
#include    <ctime>
#include    <cstdlib>
#include    <iomanip>
using   namespace   std;

int     makearray(int []);
void    bubble(int [], int);
void    printout(int [], int);


const   int     SIZE = 100;

int         main()
{
    int     number[SIZE] = {10, 20, 30, 40, 50};
    int     last;
    last = 5;
    printout(number, last);

    for(int i=0; i<last-1; i++){
      swap(number[i], number[i+1]);
    }
    printout(number, last);
}

int     makearray(int   number[], int SIZE)
{
    int last;
    srand(time(NULL));
    last = rand() % 10 + 10;
    {
      for(int i = 0; i < last; i++)
      number[i] = rand() % 100;
    return last;
    }
}

void    printout(int number[], int last)
{
  cout << "Array Size : " << last << endl;
  for(int i = 0; i < last; i++){
    cout << number[i]<< " ";
  }
  cout << endl;
}