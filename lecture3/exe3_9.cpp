#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int b,e,result=1;
  cout<<"Enter a base ";
  cin>>b; 
  cout<<"Enter an exponent ";
  cin>>e;
  for( ; e; e--)
      result=result*b;
 cout << result;
 getchar();
 return 0; 
}
