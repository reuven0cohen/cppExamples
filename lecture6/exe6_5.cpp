#include<iostream> 
using namespace std;

void swap (int & a, int& b);

int main()
{
	int x,y;
	cout << "Enter two integers ";
	cin>>x>>y;
	cout<< "Before swapping x="<< x <<" and y="<< y;
	swap(x,y);  // call by reference : a,b are aliases for x,y
	cout<< "\nAfter swapping x="<< x <<" and y="<< y;
	getchar();
	return 0;
}

void swap (int & a, int& b)  // call by reference a, b are aliases
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
