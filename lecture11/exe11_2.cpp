#include<iostream>
using namespace std;

int main()
{
	int x, y;

      //const pointer to integer. Integer value (*ptr) can be 
      // changed but ptr value remains the same memory location.
	int * const ptr=&x;  
	
	*ptr=7;
	ptr=&y;  //error

	getchar();
	return 0;
}