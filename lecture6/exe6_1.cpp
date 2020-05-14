#include<iostream> 
using namespace std;

void f1();

int main ()
{ 	void f2();
	int x;
	f1();
	f2();
	return 0;
}

void f1()
{	cout<<"\nPrinted from f1"<<endl;}

void f2()
{	void f3();
	cout<<"\nPrinted from f2"<<endl;
	 f3();}

void f3()
{	cout<<"\nPrinted from f3"<<endl;}
