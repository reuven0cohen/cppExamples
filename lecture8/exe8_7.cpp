#include<iostream>
using namespace std;

void main()
{   
    int A[20];
     A[0]=1;A[1]=1;
     for(int n=2;n<20;n++)
		A[n]=A[n-1]+A[n-2];
    for (int i=0; i<20; i++) 
       cout<<“The ”<<i+1<<“element is“<<A[i];
}
