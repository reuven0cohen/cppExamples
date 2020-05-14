#include<iostream> 
using namespace std;

int main()
{
	int max = 5;           // no longer const
	int* a = new int[max];  
	int n = 0;
	while (cin >> a[n]) {
		n++;
		if (n >= max) {
          max = max * 2;            
          int* temp = new int[max]; 
          for (int i=0; i<n; i++)
	            temp[i] = a[i]; 
          delete [] a;              // free old array memory.
          a = temp;                 // now a points to new array.
		}//end if         
	}
return 0;
}
