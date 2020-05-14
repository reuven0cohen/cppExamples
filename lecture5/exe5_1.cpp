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
          cout << "** Correct **\n">>number << " is the magic number.\n"; 
  else 
           { cout << "...Sorry, it is a wrong number. “; 
    if(guess > number) 
       std::cout <<" Your guess is too high.\n"; 
    else 
       std::cout << " Your guess is too low.\n"; 
 } 

  getchar();
  return 0; 
}
