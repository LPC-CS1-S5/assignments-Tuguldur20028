#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;


int isPrime();
int getRdnum(void);


int main() 
{
  // ofstream ofs;
  srand(time(0));
  isPrime();
  // getRdnum();

  // ofs.open("numbers.txt");
}
 
int getRdnum(void)
{ 
  int   rdnum;
  // srand(time(0));
  rdnum = rand() % 50 +1;
  cout << rdnum << endl;
  return rdnum;
 }


int isPrime(){
  int n =10;
  ofstream ofs;
  int i, j, rdnum;
  bool flag =0;
 
  ofs.open("numbers.txt");
  //  for (i=0; (i=n); i++){
   for (i=0; (i<=n); i++){
    //  getRdnum();
     rdnum = getRdnum();
     for (j=2; j < rdnum/2; j++){
       flag = 0;
       if (rdnum % j == 0){
      
         flag = 1;
         break;}
       }
      if (flag)
          cout << " ";
      else
            ofs << rdnum << endl;
          
  }
}