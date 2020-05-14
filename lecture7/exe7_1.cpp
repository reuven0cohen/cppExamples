#include<iostream>
using namespace std;

inline int max(int a, int b);

 int main()
 { 
	 int x,y;
	 cout<<"Enter two integers: ";
	 cin>>x>>y;
	 cout<<"The maximum is: "<<max(x,y);
	 getchar();
	 return 0;
 }

inline int max(int a, int b) 
	{ 
		return (a > b ? a : b); 
	} 
