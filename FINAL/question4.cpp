#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  cout  << "Please type in a string: ";
  getline(cin, input);

  int numOfChars = input.length();

  for (unsigned int i = 0; i < input.length(); i++) {
    if (input.at(i) == '1') {
      numOfChars++;
    }
  }
  cout << "Number of characters: " << numOfChars << endl;

  return 0;
}