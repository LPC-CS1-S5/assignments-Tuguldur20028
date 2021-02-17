#include <iostream>
using namespace std;

int main()
{
    // Variables
    int num1, 
        num2, num3;

    // Ask the user to enter two numbers
    cout << endl;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter Number 3: ";
    cin >> num3;

    // Formatting
    cout << endl;

    // Use a decision structure to determine largest and smallest num
    if (num1 < num2)
    {
        cout << "Number 1 (" << num1 << ")";
        cout << " is smallest" << endl;

        cout << "Number 2 (" << num2 << ")";
        cout << " is largest"  << endl;
    }
    else
    {
        cout << "Number 1 (" << num1 << ")";
        cout << "is largest"  << endl;
        
        cout << "Number 2 (" << num2 << ")";
        cout << " is smallest" << endl;
    }

    // Formatting
    cout << endl;

    // Terminate
    return 0;
}