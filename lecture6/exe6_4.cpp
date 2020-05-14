#include<iostream> 
using namespace std;

int triple(int x);
int main ()
{ 
	int x;
	cout<<"Enter a number";   
	cin>>x;
	cout<<"The triple function output"<<triple(x)<<endl;
	cout<<"The value of x is "<<x;      //what will be printed???
	getchar();
	return 0;
}

int triple(int x)
{   x*=3;
    return x; }
