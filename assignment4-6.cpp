#include <iostream>
using namespace std;

int main() {
  int selection;
  cout << "What formula would you like to see?\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of these.\n\n";
  cout << "Enter your selection as an intiger of 1-4:\n";

  cin >> selection;
  if (selection == 1 || selection == 2 || selection == 3 || selection == 4 || ) {
    case 1: cout << "pi x radius squared\n";
      break;
    case 2: cout << "length x width\n";
      break;
    case 3: cout << "po x radius squared x height\n";
      break;
    default: cout << "not good with numbers\n"
      break;
  }
  } else {
    cout << "Invalid user input.\n you must enter number 1-4.\n";
  }

  return 0;