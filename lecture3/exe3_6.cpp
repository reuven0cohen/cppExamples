#include <iostream> 
using namespace std; 
 
void main() 
{
	char ch;
	cout << "Please enter a character: ";
	cin >> ch;

	cout << "The charachter is " << 
	   ((ch >= '0' && ch <= '9') ? "" : "NOT ")  << "a digit\n";
}
