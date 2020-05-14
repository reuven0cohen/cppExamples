#include<iostream>
using namespace std;

void init(int *arr[]);
void print(int *arr[]);

void main()
{
	int *arr[3];	
	cout<< "Enter 3 sequences of 5 integers pls: " <<endl;
	init(arr);
       print(arr);
}

void init(int *arr[])
{
	for (int i=0; i<3;i++)
	{
		arr [i]= new int [5];
		for(int j=0;j<5;j++)
		      cin>>*(arr[i]+j);
	}
}
void free(int *name[])
{
	for (int i=0; i<3;i++)
		{delete [] name[i];
	             name[i]=NULL;}
}
void print(int *arr[])
{
	for (int i=0; i<3;i++)
	{
	    for(int j=0;j<5;j++)
		   cout<<*(arr[i]+j)<<" ";
	     cout<<endl;
	}
}
