#include<iostream> 
using namespace std;

int main()
{
int n,* a = NULL; 
cout<<"Enter array size ";
cin >> n; 
a = new int[n]; 
for (int i=0; i<n; i++) 
    a[i] = rand()%10;    
cout<<"The array values are "<<endl;
for (int i=0; i<n; i++) 
    cout<<a[i]<<"\t";

delete [] a;  // When done, free memory pointed to by a.
cout<<"\nAfter deletion array holds"<<endl;
for (int i=0; i<n; i++)
    cout<<a[i]<<"\t";
a = NULL; 
return 0;
}
