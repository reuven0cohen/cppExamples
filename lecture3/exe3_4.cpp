#include <iostream>	
using namespace std;
		
int main()                            
{
  int age;                              
  cout<<"Please input your age: ";    
  cin>> age;
  if ( age < 85 ) {                  
     cout<<"You are pretty young!\n"; 
  }
else if ( age == 85 ) {            
     cout<<"You are old\n";           
  }
  else {
    cout<<"You are really old\n";     
  }
  cin.get();     //equals to getchar but in iostream library
  return 0;
}