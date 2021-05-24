#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
    string  words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";
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