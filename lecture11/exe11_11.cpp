#include <iostream>
 using namespace std;

void main()
{
   FILE * pFile;
  char sentence [256];

   cout<<"Enter sentence to append: ";
   cin.getline(sentence,256);
	   pFile = fopen ("somefile.txt","a");
   fputs (sentence,pFile);
   fclose (pFile);
} 
