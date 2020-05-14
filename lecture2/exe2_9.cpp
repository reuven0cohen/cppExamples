#include<iostream>
using std::cout;  // program uses cout
using std::cin;   // program uses cin 

/* function main begins program execution */
void main()
{
     int grade;
   cout << "Enter your grade: ";
   cin >> grade;   
   if ( grade>=60 ) 
	  cout<<"You passed the test!";
   else
	cout<<"You failed the test!";
} //end of main