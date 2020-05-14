#include <iostream>
using namespace std;
 
 void main()
{
	int i, j;
	for(i = 3; i <= 50; i += 10)
		for(j = 2; j < i; j ++)
		{   
			if(i % j == 0)
				break;
		     if(j > i%5)
			{
				cout<< i<<endl;
				break;
			}
		}
}
