#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

void multiply(int i);

int main()
{
	const int SIZE=10;
	int arr [SIZE] ;
	int n;
	srand( (unsigned)time( NULL ) );

     	for ( n=0 ; n<SIZE ; n++ )
     	{	arr[n]=rand()%10+1;
		cout<<"\nThe "<<n<<" element is:"<<arr[n];
     	}
    
      for ( n=0 ; n<SIZE ; n++ )
	     multiply(arr[n]);
	 
     for ( n=0 ; n<SIZE ; n++ )
	    cout<<"\nAfter multiplication the "<<n<<" element is:"<<arr[n];
	getchar();  return 0;
}

void multiply(int i)
{ i=i*2;}
