#include <iostream>
using namespace std;

void sod(double x, double& y, int i, int& j)
{
   x = y;
   y = x;
   i = 2*i;
   j = 2*j;
}

int main()
{
	double x = 10.0,y = 20.0;
	int i = 30,j = 40;
	sod(x,y,i,j);
	cout << x << y << i << j;
	x = 1.0; 
	y = 2.0;
	i = 3;
	j = 4;
	sod (y,x,j,i);
	cout << x << y << i << j;
	getchar();
 	return 0;
}
