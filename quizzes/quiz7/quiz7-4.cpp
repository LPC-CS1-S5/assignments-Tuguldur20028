#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
vector<int>::iterator  iter;
int main()
{
 vector<int> number;
 int size = 20;
 srand(time(0));
 makevector(number, size);
 printvector(number);
 deleteone(number);
}
void makevector(vector<int> &vec, int size)
{
 for(int i=0; i<size; i++)
         vec.push_back(rand() % 10);
}
void printvector(vector<int> vec)
{
 for(int v : vec)
          cout << v << "\t";
 cout << endl;
}
void deleteone(vector<int> &vec)
{
    int deletecnt = 0;
      int usernum;
      cout << "Please enter the number you want to delete: " << endl;
      cin >> usernum;

  for(iter=vec.begin(); iter!=vec.end(); iter++)
  { 
    if (usernum == *iter){
      vec.erase(iter);
    deletecnt += 1;
    }
  }

      cout << usernum << " is deleted " << deletecnt << " times \n";
 printvector(vec);
 
}