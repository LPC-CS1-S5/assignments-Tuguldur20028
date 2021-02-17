//Program recieves input for weigth of package, and intended distance of travel, then calculates and displats total charges to console
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()  {
  //assuming user is told to round
  int weight;     //0 < weight < 20 (kg)
  int distance;   //min:10 mi, max: 1000 mi
  float const rate1 = 1.10;
  float const rate2 = 2.20;
  float const rate3 = 3.30;
  float const rate4 = 4.40;
  float charges;  //based on rate & distance

  //user prompts
  cout << "Please enter weight of your package in kg\n";
  cout << "as a whole number. Round up: ";
  cin >> weight;
  cout << "Please enter the distance, and you may round down: ";
  cin >> distance;

  //input validation
  while (weight > 0 && weight <= 20 && distance > 10 && distance <= 1000)  {
    if (distance >= 500)  {
      if (weight < 2.0) {
        charges = ((distance/500) * rate1);
        cout << "Amount to be charged: $ " << setprecision(2) << fixed << charges << endl;
        cout << "Distance: " << distance << " mi, and weight: " << weight << " kg.\n";
        break;
      } else if (weight >= 2.0 && weight < 6.0) {
          charges = ((distance/500) * rate2);
          cout << "Amount to be charged: $ " << setprecision(2) << fixed << charges << endl;
          cout << "Distance: " << distance << " mi, and weight: " << weight << " kg.\n";
          break;
      } else if (weight >= 6.0 && weight < 10.0)  {
          charges = ((distance/500) * rate3);
          cout << "Amount to be charged: $ " << setprecision(2) << fixed << charges << endl;
          cout << "Distance: " << distance << " mi, and weight: " << weight << " kg.\n";
          break;
      } else  {   //(weight >= 10.0 && weight < 20.0)
          charges = ((distance/500) * rate4);
          cout << "Amount to be charged: $ " << setprecision(2) << fixed << charges << endl;
        cout << "Distance: " << distance << " mi, and weight: " << weight << " kg.\n";
        break;
      }
    }

    //now if the distance !> 500, execute
    charges = rate1;
    cout << "Amount to be charged: $ " << setprecision(2) << fixed << charges << endl;
    cout << "Distance: " << distance << " mi, and weight: " << weight << " kg.\n";
    break;
  }

  //if initial validation checks for weight and distance not satisfied, 
  //notify and terminate
  cout << "\nYou may have entered invalid parameters, and we cannot serve your needs.\n";
  return 0;
  

}
}