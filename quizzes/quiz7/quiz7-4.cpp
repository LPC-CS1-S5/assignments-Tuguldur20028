#include <cmath>
#include <iostream>
using namespace std;
const int N = 10;

int main(){
  int number [N] = {10, 15, 20, 25, 0, 40, 35, 45, 30, 5};
  for(int i = 0; i<N; i++){
    if(i>0 && i<9){//checks if the index is 1-8
      if(abs(number[i]-number[i+1]<10 && abs (number [i]-number[i-1])<10)){
        cout << " index " << i << "has adjacent elements less than then 10\n";
      }
    }
    if (i==0){//only needs to check lower number if index is 0
      if(abs(number[i] - number[i+1]<10){
        cout << " index " << "has adjacent elements less than then 10\n" 
      }
    }
    if(i==9){//only needs to check lower number if index is 9
      if(abs(number[i] - number[i+1]<10){
        cout << " index " << "has adjacent elements less than then 10\n" 
      }
    }
  } 
}