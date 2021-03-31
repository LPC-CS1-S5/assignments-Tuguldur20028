#include <iostream>
using namespace std;
 
int countEvenOdd(int n)//function that count digits
{
    int even_count = 0;
    int odd_count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            even_count++;
        else
            odd_count++;
        n = n / 10;
    }
    cout << "Even count : "
         << even_count;
    cout << "\nOdd count : "
         << odd_count;
    if (even_count % 2 == 0 &&
        odd_count % 2 != 0)
        return 1;
    else
        return 0;
}
 

int main()
{
    int n;
    n = 1234567;
    int t = countEvenOdd(n);
    if (t == 1)
        cout << "\nYES" << endl;
    else
        cout << "\nNO" << endl;
    return 0;
}