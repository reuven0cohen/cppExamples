#include<iostream>
using namespace std;
void  main()
{
    int digits[10]={0};
	long number;
    cout<<“Pls. enter a positive number:\n";
    cin>>number;
    while (number!=0)
    {
        digits[number%10]++;
        number=number/10;
    }
    for (int i=0; i<10; i++) 
        if(digits[i]) cout<<“The digit<<i<<“ appeared”<< digits[i]<<endl;
}
