#include <iostream> 
using namespace std; 

int main() 
{ 
  float num1,num2; 
   cout << "Type two different numbers:";

   if( !(cin >> num1 && cin >> num2)) 
        cout<< "\nInvalid input!" << endl;
   else 
	    cout<< "The greater value is: "<< (num1 > num2 ? num1 : num2) << endl;
   return 0;
   }
