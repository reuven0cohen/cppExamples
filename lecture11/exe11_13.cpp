#include<iostream>
using namespace std;

void print(int *p,int size);

void main()
{
	int *p1,*p2,size;
	cout<<"Enter an array size - ";
	cin>>size;
	p1=new int[size];
	p2=new int[size/2];
      for(int i=0;i<size;i++)
		p1[i]=rand()%10;	
	cout<<"\nPrinting array elements:";
	print(p1,size);
    
	for(int i=1;i<size;i+=2)
		p2[i/2]=p1[i];
	delete p1;
	cout<<"\nAfter the copy array elements are:";
	print(p2,size/2);
	delete p2;
	}

void print(int *p,int size)
{
	for (int i=0; i<size;i++)
		   cout<<*(p+i)<<" ";
}

