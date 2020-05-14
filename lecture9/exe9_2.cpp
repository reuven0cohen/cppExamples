#include<iostream>
using namespace std;

int main ()
{
	const int ROWS=5;
	const int COL=10;
	int array [ROWS][COL];
    for (int n=0;n< ROWS;n++)
		for (int m=0;m< COL;m++)
			array[n][m]=(n+1)*(m+1);
	getchar();
	return 0;
}