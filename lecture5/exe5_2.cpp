#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main() 
{ 
  int number, guess;    
   number = rand()%100;   // get a random number 0-99
    do{
		cout << “\nEnter your guess: "; 
		cin >> guess;
		if (guess == number) 
			cout << "** Correct **\n">>number << " is the magic number.\n"; 
		else 
           { 
				cout << "...Sorry, it is a wrong number. "; 
				if(guess > number) 
					cout <<" Your guess is too high.\n"; 
				else 
					cout << " Your guess is too low.\n"; 
			} 
	 } while(guess!=number);
  getchar();
  return 0; 
}
