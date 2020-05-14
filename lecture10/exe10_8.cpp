#include<iostream>
using namespace std;

void cube(int* ip);

int main()
{
	int i=10;
	cout<<"The value of i is:"  << i <<endl;
	cube(&i);    //address of i is transferred to the function
	cout<<"The new value of i is:" << i <<endl;
	getchar();
	return 0;
}

void cube(int* ip)
{
	*ip=*ip* *ip* *ip;  //where *ip is the value of ip
}
