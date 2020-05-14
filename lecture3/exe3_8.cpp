#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int fact = 1;
  for(int k=1; k<5; k++) 
  {
      fact *= k;
	 cout<<"\nThe factorial of "<<k<<" is:"<<fact;
   }
getchar();
return 0; 
}
