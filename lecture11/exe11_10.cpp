#include <iostream>
 using namespace std;

void main()
{
   FILE * pFile;
   char buffer [100];

   pFile = fopen ("myfile.txt" , "r");
   if (pFile == NULL)  cout<<"Error opening file";
   else   {
     while ( ! feof (pFile) )
            if ( fgets (buffer , 100 , pFile) != NULL )
                    cout<<buffer;
     fclose (pFile);
   }
} 
