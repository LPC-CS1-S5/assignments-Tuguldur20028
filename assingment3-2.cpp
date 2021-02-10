#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int nummales;
    float numfemales;
    int total;
    float fpercentage, mpercentage;

    cout<< "How many males are in the class?\n";
    cin >> nummales;
    cout<< "How many females are in the class?\n";
    cin >>numfemales;


    total = numfemales + nummales;
    fpercentage = (numfemales / total) * 100
    mpercentage = (nummales / total) * 100
    // mpercentage = 100 - fpercentage;

    cout << "Percent female : " << setprecision(2) << fixed << fpercentage << '%' << endl;
    
    cout << "Percent male : " << setprecision(2) << fixed << mpercentage << '%' << endl;
    return 0;
