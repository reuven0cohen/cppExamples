#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

const int SIZE=3;

void print(double [][SIZE],int, int);

int main()
{
	double d [SIZE] [SIZE]= {{0.5,1.5,2.3},
	{2.4,5.6,4.5}, {1.3,5.9,0.1}} ;
	cout<<“The values of array are:”;
	print(d,SIZE, SIZE);
	getchar();
	return 0;
}

void print(double a[][SIZE],int row, int col)
{
	for ( int n=0 ; n<row ; n++ )
	{
	   for ( int k=0 ; k<col ; k++ )
          	cout<<a[n][k]<<“  “;
            cout<<endl;
	}
}