#include <math.h>
#include<iostream> 
using namespace std;


double logn (double x, double base=10); 

int main()
{
	double y=5.6;
	cout << "log(y) = " << logn(y) << endl; 
	// base e
	cout  << "ln(y) = " << logn(y,2.71828) << endl;  
	cout << "ld(y) = " << logn(y,2) << endl;
	getchar();
	return 0;
}

double logn (double x, double base) 
{
   return log(x)/log(base);
}
