#include<iostream>
using namespace std;

int main()
{
  int x,y=2;
  int *const p=&x;
  *p = 7;  
  p = &y; 
  cout << *p << endl;
  return 0;
}
