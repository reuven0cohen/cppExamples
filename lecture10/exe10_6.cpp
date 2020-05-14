#include<cstring>
#include<iostream> 
using namespace std;

int main( )
{
   char string[80];
   int result;
   cout<<"Enter a string";
   cin.getline(string,80,'\n');
  
 // Reverse string and compare (ignore case):
   result = stricmp( string, strrev (string ) );
   if( result == 0 )
      cout<< "The string is a palindrome\n"<< string;
   else
      cout<< "The string is not a palindrome\n"<< string;
   getchar();return 0;
}
