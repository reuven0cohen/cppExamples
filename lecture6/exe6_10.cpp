#include<iostream> 
using namespace std;

int power(int x, int n)
{
        if( n == 0) return 1;         // base case
        else return x*power(x,n-1);     // recursive case
}

void main()
{
    int x,y;
    cout<<"Enter two numbers ";
    cin>>x>>y;
    cout<< x <<"in power of "<<y<<" is "<<power(x,y);
}
