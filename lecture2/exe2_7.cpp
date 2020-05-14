#include<iostream>
using std::cout;  // program uses cout
using std::cin;   // program uses cin 

/* function main begins program execution */
int main()
{
   int x;
   cout << "Enter an integer: ";
   cin >> x;   // read an input integer
   if ( x<1 || x%2!=0 ) 
	   cout<<"your number "<<x<<" is not a positive even number!";
	 	
   return 0;
} //end of main
