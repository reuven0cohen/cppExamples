#include <iostream>
void myFunc(int x);
 
int main() 
{ 
 int x, y; 
 y = myFunc(int); 
 cout<<"x: "<< x <<" y: "<< y<< "\n"; 
 return 0;
} 

void myFunc(int x)
 { return 4*x; } 
