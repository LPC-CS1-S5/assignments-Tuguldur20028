#include	<iostream>
#include	<cstdlib>
#include	<iomanip>
using	namespace	std;

void findMax();
const int SIZE = 11;
 int numbers[SIZE]{10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
 int main()
{
 
  
  findMax();
}
 
void findMax(){
 
 for(int i=0; i < (SIZE/2); i++){
  if (i == 3)
   cout << numbers[i] << "\n";
  else if( numbers[i] > numbers[i+1])
     swap(numbers[i], numbers[i+1]); 
     }

 for(int i= SIZE/2 ; i < (SIZE) ; i++){
  if( i == 9)
   cout << numbers[i] << "\n" ;
  else if( numbers[i] > numbers[i+1])
     swap(numbers[i], numbers[i+1]); 
     
 }
}