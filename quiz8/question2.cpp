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
bool	domaincheck(char email[])
{ int start;
  int length;
  int i;
  char domain[] = ".org,.com, .edu, .net, .gov";
  string id;
  int found = 0;
  start = 0;
  char *comp; 
  length = strlen(email);
  i = length - 1;
  do{ 
    if(email[i] == '.')
    break;
  } while( i -- > 0);
  comp = strstr(domain, email + i + 1);
  if ( comp != NULL)
    return true;
  return false;
}
