#include <iostream> 
using namespace std;    
int main()    
{   int n, array[9] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };    
    do   
    { cout << "Enter a number between 1-9 ";    
        cin >> n;    
    } while (n < 1 || n > 9);    
    
    for (int ii=0; ii < 9; ii++)    
        cout << array[ii] << " ";    
    cout << endl;    
    for (int j=0; j< 9; j++)    
    {  if (array[jjj] == n)    
            cout<<"The number "<< n<<" has index "<< j;    
    }
    return 0;    
}   
