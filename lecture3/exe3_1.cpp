#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main() 
{ 
  int number, guess;    
  number = rand();   // get a random number 
   
  cout << "Enter your guess: "; 
  cin >> guess; 
  if (guess == number) 
  { 	  cout << "** Correct **\n"; 
	  cout << number << " is the magic number.\n"; 
  } 
  else 
    {
    cout << "...Sorry, it is a wrong number. The correct number was "<<number; 
    if(guess > number) 
	cout <<" Your guess is too high.\n"; 
    else 
	cout << " Your guess is too low.\n"; 
    }
  getchar();
  return 0; 
}