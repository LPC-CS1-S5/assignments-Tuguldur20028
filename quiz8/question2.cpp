#include		<iostream>
#include		<cctype>
#include		<cstring>
#include    <fstream>

using namespace std;

bool 	idcheck(char []);
bool 	domaincheck(char []);

int 	main()
{
		char email[20]; 

		cout 	<< "Enter your email \n";
		cin >> email;

		if( idcheck(email))
			cout << "ID check passed\n";
		if( domaincheck(email))
			cout << "Domain check passed\n";
}
bool 	idcheck(char email[])
{ 
  int start;
  int i, found = 0;
  int count;
  start = 0;

   for (count = 0;  count < strlen(email) ; count++)
   {
      if ( email[count] == '@')
        break;
      if (!isalpha(email[count]))
         return false;
   }

  if (count  <5 || count > 15) 
      return false;
  else
     return true;
 
}
