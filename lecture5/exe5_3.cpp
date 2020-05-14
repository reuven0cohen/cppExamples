#include<iostream>
using namespace std;

double factorial(int n);  // function declaration

 int main()
 { 
	 int i;
	 cout<<"Enter a number to compute factorial ";
	 cin>>i;
	 cout<<"The result is: "<<factorial(i);
	 getchar();
	 return 0;
 }

double factorial(int n)  // function definition
{
 double result=1;
   for(int k=n; k>1; k--)
	result*=k;
   return result;
}
