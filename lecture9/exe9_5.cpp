#include<iostream>
using namespace std;

enum Size { SMALL = 10, MEDIUM = 100, LARGE = 1000 };

void main()
}
int x;
cout<<"Enter a number of items ";
cin>>x;
if(x<SMALL) 
	cout<<"the number is too small"<<endl;
else 
	if (x>LARGE) 
		cout<<"the number is too large"<<endl;
	else 
	cout<<"the number is medium"<<endl;
}
