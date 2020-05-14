#include<iostream>
using namespace std;

int main()
{
	int first = 5, second = 15;
	int *p1, *p2;

	p1 = &first; 
	p2 = &second; 
	cout << "first value is " << first << endl;
	cout << "second value is " << second << endl;

	*p1 = 10; 
	*p2 = *p1;         
	cout << "first value is " << first << endl;
	cout << "second value is " << second << endl;
	cout << "*p1 value is " << *p1 << endl;
	cout << "p2 value is " << p2 << endl; 
	p1 = p2;           
	*p1 = 20; 
	cout << "first value is " << first << endl;
	cout << "second value is " << second << endl;
	getchar();
	return 0;
}
