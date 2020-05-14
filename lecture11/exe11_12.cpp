#include <iostream>
 using namespace std;

void main()
{
   FILE * ifp, *ofp;
   char c;
   ifp=fopen("myfile.txt","r");
   fopen_s(&ofp,"output.txt","w");
   
   while( (c=getc(ifp))!=EOF)
		   putc(c,ofp);
   fclose(ifp);
   fclose(ofp); 
}  
