#include<iostream> 
using namespace std;

int Factorial(int N)
{
        if( N <= 0 )
		return 1;         // base case
        else 
            return N*Factorial(N-1);     // recursive case
}

int main()
{
    int x;
    cout<<"Enter a positive integer number ";
    cin>>x;
    cout<<"The factorial of "<<x<<" is "<<Factorial(x);
    cin.get();
    return 0;
}
