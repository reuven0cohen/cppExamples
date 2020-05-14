#include <iostream> 
using namespace std; 
 
void main() 
{ 
   int num,i,j;

	cout<< "Please enter a number bigger than 0:";
	cin>>num;

	for(i=1;i<=num;i++)
	{
	       for(j=1;j<=i;j++)
		cout<<"*";
	      cout<<"\n";
	}
}