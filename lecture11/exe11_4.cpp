#include<iostream> 
using namespace std;

int main()
{
int* a = NULL;   // Pointer to int, initialize to nothing.
int n; 
cout<<"Enter array size ";
cin >> n; 
a = new int[n];  // Allocate n ints and save ptr in a.
for (int i=0; i<n; i++) 
    a[i] = rand()%10;      //the same as *(a+i)=a[i]

cout<<"The array values are "<<endl;
for (int i=0; i<n; i++) 
    cout<<a[i]<<"\t";
return 0;
}
