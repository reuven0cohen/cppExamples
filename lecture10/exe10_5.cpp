#include<iostream>
using namespace std;

int main()
{
    char c1='a', c2='b', c3[3] = {'c','d','e'};
	char * ptr[3];
	ptr[0]=&c1;
	ptr[1]=&c2;
	ptr[2]=c3;  //why??? Is it correct?
	cout<<"*ptr[0] is "<< *ptr[0]<<" *ptr[1] is "<<*ptr[1]; 
	cout<<" *ptr[2] is "<< *ptr[2] <<endl; 
	*ptr[0]='z';
	*ptr[2]='z';
	cout<<"*ptr[0] is "<< *ptr[0]<<" *ptr[1] is "<<*ptr[1]; 
	cout<<" *ptr[2] is "<< *ptr[2] <<endl; 
	cout<<" *(ptr[2]+1) is "<< *(ptr[2]+1) <<endl; 
    return 0;
}
