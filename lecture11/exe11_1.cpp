#include<iostream>
using namespace std;

void init(const int* ip);

int main()
{
	int y;
	init(&y);    //address of i is transferred to the function
	getchar();
	return 0;
}

void init(const int* ip)
{
	*ip=100;
}
