#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

void init(int a[],int size);
void print(int a[],int size);

void main()
{
	const int SIZE=10;
	int arr [SIZE] ;
	init(arr,SIZE);
	print(arr,SIZE);
}

void init(int a[],int size)
{
	srand( (unsigned)time( NULL ) );
	for(int i=0;i<size;i++)
		a[i]=rand()%10+1;
}

void print(int a[],int size)
{
	for ( int n=0 ; n<size ; n++ )
		cout<<"\nThe "<<n<<" element is:"<<a[n];
}
