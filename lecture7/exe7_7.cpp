#include <iostream>
using namespace std;
 
int f (int &a, int b, int &c)
 {    
	b = a * c;
    c = a-- * b;
    a = b;
    return b;
}

void main () 
{
  int b = 1, c = 2, d = 3, i = 1;
  while (++i < 4) 
    {
      cout<<f(b,c,d)<<endl;
       cout << b << ',' << c << ',' << d << endl;
    }
}
