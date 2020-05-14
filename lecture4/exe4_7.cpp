#include <iostream>
using namespace std;

int main ()
{
  int number;
  do {
    cout << "Enter a number (to end enter 0): ";
    cin >> number;
    cout << "You’ve entered: " << number << "\n";
  } while (number!= 0);
  return 0;
}
