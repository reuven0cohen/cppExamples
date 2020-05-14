#include <iostream>
using namespace std;

void main ()
{
	int num, temp, revnum=0;
	cout<< “Please enter a number:";
	cin>>num;
	temp=num;
	while(temp)
	}
		revnum*=10;
		revnum+=temp%10;
		temp/=10;
	}	
	if(revnum == num)
		cout<< "The number is a palindrom\n";
	else	cout<< “The number isn't a palindrom\n";
 }
