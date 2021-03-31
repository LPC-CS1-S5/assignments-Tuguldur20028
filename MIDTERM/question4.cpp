#include <iostream>
using namespace std;
void  getRdnum();
void  getRdnum(int n2);
void getRdnum(int n1, int n2);

int main()
{
  getRdnum();
  getRdnum(n2);
  getRdnum(n1+1, n2);

}
void  getRdnum()
{
int num;
  srand(time(NULL));
  num = rand() % 100 + 1;
  cout << num;
}
void  getRdnum(int n2)
{
  int num;
  srand(time(NULL));
  num = rand() % 100 + n2;
  cout << num;
}
void getRdnum(int n1, int n2)
{
  int num;
  srand(time(NULL));
  num = rand() % n2 + n1+1;
  cout << num;
}


