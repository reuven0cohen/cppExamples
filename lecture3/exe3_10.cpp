#include <iostream> 
using namespace std; 
 
void main() 
{ 
  int r,c;
  char ch;
  cout<< "Enter a number of rows ";
  cin>>r; 
  cout<< "Enter a number of columns ";
  cin>>c;
  cout<< "Enter a character to be printed ";
  cin>>ch;
 
  for(int i=0;i<r;i++)
	{ 
		for(int j=0; j<c; j++)
	           cout<<ch;
		cout<<endl;
	}            
}
